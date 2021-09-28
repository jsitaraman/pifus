#include "dMeshBlock.h"
#include "dADT.h"
#include "ADT.h"

#include "pifus_types.h"
#include "pifus_cuda.h"
#include "device_functions.h"

// __device__ __constant__  static double v0[3][3] = {1.0,0.0,0.0,
//                                                    0.0,1.0,0.0,
//                                                    0.0,0.0,1.0};

// __constant__ double v0[3][3];

__global__
void d_searchADTRegion(int ndim,int nelem,
                       double *x, double *xtarget, int* isorted, 
                       int *adtIntegers, double *adtReals,
		       double *adtExtents, 
                       double *coord,int *ndes,int *pcount, 
		       int *pindx, double *weights, int ntargets)
{
 int i0 = blockIdx.x * blockDim.x + threadIdx.x;

//TRACEI(ntargets);
//for(int idx=0;idx < ntargets;idx++)
 if (i0 < ntargets)
 {
   int idx = i0; //isorted[i0];
  //printf("---- GPU search --- \n");
  double vec[9];
  double xcloud[24];
  int indx[9];	// 8+1 ... the +1 is a quick fix for memory issues
  int np=8;
  int nchecks;
  int p=0;
  double dmin[2];
  double v0[3][3] = {1.0,0.0,0.0,
                     0.0,1.0,0.0,
                     0.0,0.0,1.0};
  for(int j=0;j<24;j++) xcloud[j]=-1000;
  //
  /*
  printf("%f %f %f\n",xtarget[3*idx],xtarget[3*idx+1],xtarget[3*idx+2]);
  for(int j=0;j < 10; j++)
   printf("%d \n",adtIntegers[j]);
  */
  //
  for(int l=1;l>=-1;l-=2)
     for(int k=1;k>=-1;k-=2)
        for(int j=1;j>=-1;j-=2)
            {
              int m=0;
              for(int n=0;n<3;n++)
                {
                  vec[m++]=v0[n][0]*j;
                  vec[m++]=v0[n][1]*k;
                  vec[m++]=v0[n][2]*l;
                }
                nchecks=0;
                indx[p]=indx[p+1]=-1;
		dmin[0]=dmin[1]=PIFUS_BIGVALUE;
		//searchIntersections_region_norecursion(&(indx[p]),adtIntegers,adtReals,
		//	     coord,0,0,dmin,&(xtarget[3*idx]),vec,nelem,ndim,
                //             &nchecks);
		//d_searchIntersections_norecursion(&(indx[p]),adtIntegers,adtReals,coord,
                //                            &(xtarget[3*idx]),vec,nelem,ndim,&nchecks);

                d_searchIntersections_norecursion_nostack(&(indx[p]),adtIntegers,adtReals,coord,ndes,
                                                 &(xtarget[3*idx]),vec,nelem,ndim,&nchecks);

		printf("pointIndex, nchecks=%d %d\n",indx[p],nchecks);
              p++;
            }
    int m=0;
    TRACED(xtarget[3*idx]);
    TRACED(xtarget[3*idx+1]);
    TRACED(xtarget[3*idx+2]);
    for(p=0;p<np;p++)
     {
       if (indx[p] > -1) {
         xcloud[m++]=x[3*indx[p]];
         xcloud[m++]=x[3*indx[p]+1];
	 xcloud[m++]=x[3*indx[p]+2];
         }
     }
    int itype=1;
    int iflag;
    pcount[idx]=m/3;
    //TRACEI(pcount[idx]);
    for(p=0;p<m/3;p++) {
     printf("xcloud: %f %f %f\n",xcloud[3*p],xcloud[3*p+1],xcloud[3*p+2]);
    }
    //printf("pointer=%p\n",xcloud);
    d_interprbf(xcloud,&(xtarget[3*idx]),&(weights[8*idx]),pcount[idx],itype,&iflag);
    for(p=0;p<m/3;p++) pindx[8*idx+p]=indx[p];
    //for(p=0;p<pcount[idx];p++) TRACED(weights[8*idx+p]);
 }
}

__global__
void d_interpolate(int nvar,int ntargets,double *q,double *qtarget, int *pcount, int *pindx, double *weights)
{
 int idx = blockIdx.x * blockDim.x + threadIdx.x;
 if (idx < ntargets)	
 // for(int idx=0;idx<ntargets;idx++)
    {
      for(int j=0;j<nvar;j++)
	{
	  qtarget[idx*nvar+j]=0.0;
	  for(int p=0;p<pcount[idx];p++)
            {
            //printf("%d %f %f\n",pindx[8*idx+p],weights[8*idx+p],q[pindx[8*idx+p]*nvar+j]);
	    qtarget[idx*nvar+j]+=(weights[8*idx+p]*q[pindx[8*idx+p]*nvar+j]);
            }
	}
    }
}

namespace PIFUS {

void dMeshBlock::setData(int btag_in,int nnodes_in,double *xin)
{
    btag=btag_in;
    nnodes=nnodes_in;
    int xsize=3*nnodes*sizeof(double);
    pushToDeviceDouble(x,xin,xsize);
    /*
    cudaMalloc((void **) &x,xsize);
    cudaMemcpy(x,xin,xsize,cudaMemcpyHostToDevice);
    */
}


void dMeshBlock::setQ(int nvar,double *qin) {
    int qsize=nvar*nnodes*sizeof(double);
    pushToDeviceDouble(q,qin,qsize);
    /*
    cudaMalloc((void **) &q,qsize);
    cudaMemcpy(q,qin,qsize,cudaMemcpyHostToDevice);
    */
}

void dMeshBlock::setTargets(int nvar,int ntargets_in,double *xtargets_in,double *qtargets_in) 
{
  ntargets=ntargets_in;
  //TRACEI(ntargets);
  int xsize=3*ntargets*sizeof(double);
  pushToDeviceDouble(xtarget,xtargets_in,xsize);
  /*
  cudaMalloc((void **) &xtarget,xsize);
  cudaMemcpy(xtarget,xtargets_in,xsize,cudaMemcpyHostToDevice);
  */
  int qsize=nvar*nnodes*sizeof(double);
  pushToDeviceDouble(qtarget,qtargets_in,qsize);
  qH=qtargets_in;
  /*
  cudaMalloc((void **) &qtarget,qsize);
  cudaMemcpy(qtarget,qtargets_in,qsize,cudaMemcpyHostToDevice);
  */
}

void dMeshBlock::search(void)
{
 if (weights!=NULL || pindx !=NULL) {
   deallocateDevice(weights);
   deallocateDevice(pindx);
   deallocateDevice(pcount);
 }
 
 allocateOnDeviceDouble(weights,8*ntargets*sizeof(double));
 allocateOnDeviceInt(pindx,8*ntargets*sizeof(int));
 allocateOnDeviceInt(pcount,ntargets*sizeof(int));

 int block_size = 128;
 int n_blocks = ntargets/block_size + (ntargets%block_size == 0 ? 0:1);

 // double v0_cpu[3][3] = {1.0,0.0,0.0,
 //                        0.0,1.0,0.0,
 //                        0.0,0.0,1.0};
 // cudaMemcpyToSymbol(v0, v0_cpu, 9*sizeof(double));

 int* isorted = NULL;
 //allocateOnDeviceInt(isorted,ntargets*sizeof(int)); 
 //msort(xtarget, ntargets, isorted);

 d_searchADTRegion<<< n_blocks, block_size >>> 
                  (dadt->ndim,
                   dadt->nelem,
                   x,xtarget,
                   isorted,
                   dadt->adtIntegers,
		   dadt->adtReals,
                   dadt->adtExtents,
                   dadt->coord,
                   dadt->ndescendents,
                   pcount,
                   pindx,
                   weights,
                   ntargets);
  cudaDeviceSynchronize();

  //deallocateDevice(isorted);


 /*
 d_searchADTRegion(dadt->ndim,
                   dadt->nelem,
                   x,xtarget,
                   dadt->adtIntegers,
		   dadt->adtReals,
                   dadt->adtExtents,
                   dadt->coord,
                   pcount,
                   pindx,
                   weights,
                   ntargets);
 */

}
void dMeshBlock::interpolate(int nvar)
{
 int block_size = 512;
 int n_blocks = ntargets/block_size + (ntargets%block_size == 0 ? 0:1);
 d_interpolate <<< n_blocks, block_size >>> (nvar,ntargets,q,qtarget,pcount,pindx,weights);
 //d_interpolate(nvar,ntargets,q,qtarget,pcount,pindx,weights);
 //for(int i=0;i<nvar*ntargets;i++) printf("%f ",qH[i]);
 //printf("\n");
 pullFromDevice(qH,qtarget,sizeof(double)*nvar*ntargets);
 //for(int i=0;i<nvar*ntargets;i++) printf("%f ",qH[i]);
 //printf("\n");
}

void dMeshBlock::preprocess(ADT *adt)
{
  if (dadt)
   {
     dadt->clearData();
   }
  else		
   {
     dadt=new dADT[1];
   }

  int *adtIntegers=adt->getadtIntegers();
  int nelem=adt->getadtnelem();
  double *adtReals=adt->getadtReals();
  double *adtExtents=adt->getadtExtents();
  double *coord=adt->getadtcoord();
  int *ndesc=adt->getdescendents();

  dadt->setHostTree(nelem,adtIntegers,adtReals,adtExtents,coord,ndesc);
}


dMeshBlock::~dMeshBlock() {
   if (elementBbox) deallocateDevice(elementBbox);
   if (pcount) deallocateDevice(pcount);
   if (pindx) {
     deallocateDevice(pindx);
     deallocateDevice(weights);
   }
   delete [] dadt;
}

} // namespace PIFUS
