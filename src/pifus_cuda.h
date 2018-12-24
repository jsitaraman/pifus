#ifndef PIFUS_CUDA_H
#define PIFUS_CUDA_H

#ifdef GPU

#include <cuda.h>

#define pushToDeviceDouble(xD, xH, size)                                       \
  {                                                                            \
    cudaMalloc((void**)&xD, (size));                                           \
    cudaMemcpy(xD, xH, (size), cudaMemcpyHostToDevice);                        \
  }

#define pushToDeviceInt(xD, xH, size)                                          \
  {                                                                            \
    cudaMalloc((void**)&xD, (size));                                           \
    cudaMemcpy(xD, xH, (size), cudaMemcpyHostToDevice);                        \
  }

#define pullFromDevice(xH, xD, size)                                           \
  {                                                                            \
    cudaMemcpy(xH, xD, (size), cudaMemcpyDeviceToHost);                        \
  }

#define allocateOnDeviceDouble(xD, size) cudaMalloc((void**)&xD, (size));
#define allocateOnDeviceInt(xD, size) cudaMalloc((void**)&xD, (size));

#define deallocateDevice(xD)                                                   \
  {                                                                            \
    cudaFree(xD);                                                              \
    xD = NULL;                                                                 \
  }

#else

#include <cstring>
#include <cstdlib>

#define pushToDeviceDouble(xD, xH, size)                                       \
  {                                                                            \
    xD = (double*)malloc((size));                                              \
    memcpy(xD, xH, (size));                                                    \
  }

#define pushToDeviceInt(xD, xH, size)                                          \
  {                                                                            \
    xD = (int*)malloc((size));                                                 \
    memcpy(xD, xH, (size));                                                    \
  }

#define pullFromDevice(xH, xD, size)                                           \
  {                                                                            \
    memcpy(xH, xD, (size));                                                    \
  }

#define allocateOnDeviceDouble(xD, size)                                       \
  {                                                                            \
    xD = (double*)malloc((size));                                              \
  }

#define allocateOnDeviceInt(xD, size)                                          \
  {                                                                            \
    xD = (int*)malloc((size));                                                 \
  }

#define deallocateDevice(xD)                                                   \
  {                                                                            \
    free(xD);                                                                  \
    xD = NULL;                                                                 \
  }

#define __device__
#define __global__
#define __host__

#endif

#endif /* PIFUS_CUDA_H */
