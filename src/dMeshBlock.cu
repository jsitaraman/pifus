#include <cuda.h>
#include "dMeshBlock.h"
#include "cuda_macros.h"
#include "device_functions.h"


//extern "C" {
//void searchIntersections_region_norecursion(int *pointIndex,int *adtIntegers,double *adtReals,
//				double *coord,int level,int node,double *dmin,
//				double *xsearch,double *vec,int nelem,int ndim,int *nchecks);
//}


__global__ 
void d_searchADTRegion(int ndim,int nelem,
     double *x, double *xtarget, int *adtIntegers, double *adtReals,double *adtExtents, 
     double *coord,int *pcount, int *pindx, double *weights, int ntargets)
{
 int idx = blockIdx.x * blockDim.x + threadIdx.x;
//TRACEI(ntargets);
//for(int idx=0;idx < ntargets;idx++)
 if (idx < ntargets)
 {
  //printf("---- GPU search --- \n");
  double v0[3][3];
  double vec[9];
  double xcloud[24];
  int indx[8];	
  int np=8;
  int nchecks;
  int p=0;
  double dmin[2];
  //
  v0[0][0]=1.0;v0[1][0]=0.0;;v0[2][0]=0.0;
  v0[0][1]=0.0;v0[1][1]=1.0;;v0[2][1]=0.0;
  v0[0][2]=0.0;v0[1][2]=0.0;;v0[2][2]=1.0;
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
		d_searchIntersections_norecursion(&(indx[p]),adtIntegers,adtReals,coord,
                                                 &(xtarget[3*idx]),vec,nelem,ndim,&nchecks);
		//printf("pointIndex, nchecks=%d %d\n",indx[p],nchecks);
              p++;
            }
    int m=0;
    for(p=0;p<np;p++)
     {
       //TRACEI(indx[p]);
       if (indx[p] > -1) {
         xcloud[m++]=x[3*indx[p]];
         xcloud[m++]=x[3*indx[p]+1];
	 xcloud[m++]=x[3*indx[p]+2];
         }
     }
    int itype=1;
    int iflag;
    pcount[idx]=m/3;
    for(p=0;p<m/3;p++) pindx[8*idx+p]=indx[p];
    d_interprbf(xcloud,&(xtarget[3*idx]),&(weights[8*idx]),pcount[idx],itype,&iflag);
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

 int block_size = 512;
 int n_blocks = ntargets/block_size + (ntargets%block_size == 0 ? 0:1);
 d_searchADTRegion<<< n_blocks, block_size >>> 
                  (dadt->ndim,
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
  cudaThreadSynchronize();


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

  dadt->setHostTree(nelem,adtIntegers,adtReals,adtExtents,coord);
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
