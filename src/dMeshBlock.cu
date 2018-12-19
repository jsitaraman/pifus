#include <cuda.h>
#include "dMeshBlock.h"
#include "cuda_macros.h"

void dMeshBlock::setData(int btag_in,int nnodes_in,double *xin)
{
    btag=btag_in;
    nnodes=nnodes_in;
    int xsize=3*nnodes*sizeof(double);
    pushToDevice(x,xin,xsize);
    /*
    cudaMalloc((void **) &x,xsize);
    cudaMemcpy(x,xin,xsize,cudaMemcpyHostToDevice);
    */
}


void dMeshBlock::setQ(int nvar,double *qin) {
    int qsize=nvar*nnodes*sizeof(double);
    pushToDevice(q,qin,qsize);
    /*
    cudaMalloc((void **) &q,qsize);
    cudaMemcpy(q,qin,qsize,cudaMemcpyHostToDevice);
    */
}

void dMeshBlock::setTargets(int nvar,int ntargets_in,double *xtargets_in,double *qtargets_in) 
{
  ntargets=ntargets_in;
  int xsize=3*ntargets*sizeof(double);
  pushToDevice(xtarget,xtargets_in,xsize);
  /*
  cudaMalloc((void **) &xtarget,xsize);
  cudaMemcpy(xtarget,xtargets_in,xsize,cudaMemcpyHostToDevice);
  */
  int qsize=nvar*nnodes*sizeof(double);
  pushToDevice(qtarget,qtargets_in,qsize);
  /*
  cudaMalloc((void **) &qtarget,qsize);
  cudaMemcpy(qtarget,qtargets_in,qsize,cudaMemcpyHostToDevice);
  */
}

dMeshBlock::~dMeshBlock() {
   if (elementBbox) cudaFree(elementBbox);
   if (pcount) cudaFree(pcount);
   if (pindx) {
     for(int i=0;i<ntargets;i++) cudaFree(pindx[i]);
     for(int i=0;i<ntargets;i++) cudaFree(weights[i]);
     cudaFree(pindx);
     cudaFree(weights);
   }
   delete [] dadt;
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
