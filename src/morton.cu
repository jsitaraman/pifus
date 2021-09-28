#include <stdio.h>
#include <stdlib.h>

#include <cuda_runtime.h>
#include <thrust/sort.h>
#include <thrust/device_ptr.h>
#include <cublas_v2.h>

#define HASH_64

#ifdef HASH_64
#define UINT_TYPE uint64_t
#define REAL double
#else
#define UINT_TYPE uint32_t
#define REAL float
#endif	


__global__ void arange(int* a, int n){
  int i = blockIdx.x*blockDim.x + threadIdx.x;
  if(i<n) a[i] = i;
}

#ifdef HASH_64
__inline__ __device__ UINT_TYPE expand_bits(UINT_TYPE v){
  v = (v * 0x000100000001u) & 0xFFFF00000000FFFFu;
  v = (v * 0x000000010001u) & 0x00FF0000FF0000FFu;
  v = (v * 0x000000000101u) & 0xF00F00F00F00F00Fu;
  v = (v * 0x000000000011u) & 0x30C30C30C30C30C3u;
  v = (v * 0x000000000005u) & 0x9249249249249249u;
  return v;
}
#else
__inline__ __device__ UINT_TYPE expand_bits(UINT_TYPE v){
  v = (v * 0x00010001u) & 0xFF0000FFu;
  v = (v * 0x00000101u) & 0x0F00F00Fu;
  v = (v * 0x00000011u) & 0xC30C30C3u;
  v = (v * 0x00000005u) & 0x49249249u;
  return v;
}
#endif

__global__ void compute_morton(int total, UINT_TYPE *mkeys, REAL (*xyz)[3], REAL* box){

  int idx = threadIdx.x + blockDim.x * blockIdx.x;
  if (idx < total){
	
    REAL x, y, z;
    x = (xyz[idx][0]-box[0])/(box[3]-box[0]);
    y = (xyz[idx][1]-box[1])/(box[4]-box[1]);
    z = (xyz[idx][2]-box[2])/(box[5]-box[2]);
		
    UINT_TYPE mx, my, mz;
#ifdef HASH_64
    x *= 1024*1024-1;
    y *= 1024*1024-1;
    z *= 1024*1024-1;
#else
    x *= 1023.0f;
    y *= 1023.0f;
    z *= 1023.0f;
#endif
    mx = expand_bits((UINT_TYPE)x);
    my = expand_bits((UINT_TYPE)y);
    mz = expand_bits((UINT_TYPE)z);
		
    mkeys[idx] = mx * 4 + my * 2 + mz;
  }
}

void nodes_compute_morton(int total, UINT_TYPE *mkeys, REAL (*xyz)[3], REAL* box){
  dim3 threads(256,1,1);
  dim3 blocks(1,1,1);
  blocks.x = (total-1)/threads.x+1;
  compute_morton<<<blocks,threads>>>(total, mkeys, xyz, box);
}

__global__ void setbox(REAL* xyz, REAL* box, int* ibox){
  int i=threadIdx.x;
  if(i<6) box[i] = xyz[ibox[i]*3+i];
}

__global__ void dbgprint(REAL* x, int n){
  int i;
  for(i=0; i<n; i++){
    printf("__GPU__ %16.8e %16.8e %16.8e\n", x[i*3+0],x[i*3+1],x[i*3+2]);
  }
}

__global__ void dbgiprint(int* x, int n){
  int i;
  for(i=0; i<n; i++){
    printf("__GPU__ %d\n", x[i]);
  }
}

__global__ void dbguprint(UINT_TYPE* x, int n){
  int i;
  for(i=0; i<n; i++){
    printf("__GPU__ %6d : %lu\n", i, x[i]);
  }
}

void getbox(REAL* xyz, int n, REAL* box){
  
  // Create a handle for CUBLAS
  cublasHandle_t handle;
  cublasCreate(&handle);

  int *c_ibox = new int[6];
  int *d_ibox;
  cudaMalloc((void**)&d_ibox, 6*sizeof(int));

#ifdef HASH_64
  cublasIdamin(handle, n, &xyz[0], 1, &c_ibox[0]);
  cublasIdamin(handle, n, &xyz[1], 1, &c_ibox[1]);
  cublasIdamin(handle, n, &xyz[2], 1, &c_ibox[2]);
  cublasIdamax(handle, n, &xyz[0], 1, &c_ibox[3]);
  cublasIdamax(handle, n, &xyz[1], 1, &c_ibox[4]);
  cublasIdamax(handle, n, &xyz[2], 1, &c_ibox[5]);
#else
  cublasIsamin(handle, n, &xyz[0], 3, &c_ibox[0]);
  cublasIsamin(handle, n, &xyz[1], 3, &c_ibox[1]);
  cublasIsamin(handle, n, &xyz[2], 3, &c_ibox[2]);
  cublasIsamax(handle, n, &xyz[0], 3, &c_ibox[3]);
  cublasIsamax(handle, n, &xyz[1], 3, &c_ibox[4]);
  cublasIsamax(handle, n, &xyz[2], 3, &c_ibox[5]);
#endif

  cudaMemcpy(d_ibox, c_ibox, 6*sizeof(int), cudaMemcpyHostToDevice);

  setbox<<<1,6>>>(xyz,box,d_ibox);
  
  // Destroy the handle
  cublasDestroy(handle);

  cudaFree(d_ibox);
  delete[] c_ibox;
  
}
  
void msort(REAL* xyz, int& n, int* isorted){

  UINT_TYPE*  d_m;
  REAL* box;
  cudaMalloc((void**)&box, 6*sizeof(REAL));
  cudaMalloc((void**)&d_m, n*sizeof(UINT_TYPE));
  
  getbox(xyz,n,box);

  // git morton indices
  nodes_compute_morton(n, d_m, (REAL (*)[3])xyz, box);

  // UINT_TYPE* c_m = new UINT_TYPE[n];
  // cudaMemcpy(c_m, d_m, n*sizeof(UINT_TYPE), cudaMemcpyDeviceToHost);
  // for(int i=0; i<n; i++){
  //   printf("%6d : %lu\n", i, c_m[i]);
  // }
  // dbguprint<<<1,1>>>(d_m, n);
  // cudaDeviceSynchronize();
  
  // set the array indices to simple increment
  arange<<<(n-1)/256+1,256>>>(isorted,n);

  thrust::device_ptr<UINT_TYPE> thm( d_m );
  thrust::device_ptr<int>  thi( isorted );
  thrust::sort_by_key( thm, thm+n, thi ); // sort by the index

  cudaFree(box);
  cudaFree(d_m);

}











