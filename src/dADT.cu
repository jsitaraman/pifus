#include<cuda.h>
#include "dADT.h"
#include "cuda_macros.h"

void dADT::setHostTree(int nelemInput,int *adtIntegersInput, double *adtRealsInput,
                            double *adtExtentsInput, double *coordInput)
{

nelem=nelemInput;

pushToDevice(adtIntegers,adtIntegersInput,4*nelem*sizeof(int));
pushToDevice(adtReals,adtRealsInput,ndim*nelem*sizeof(double));
pushToDevice(adtExtents,adtExtentsInput,ndim*sizeof(double));
pushToDevice(coord,coordInput,ndim*nelem*sizeof(double));

/*
int isize=4*nelem*sizeof(int);
cudaMalloc((void **) &adtIntegers,isize);
cudaMemcpy(adtIntegers,adtIntegersInput,isize,cudaMemcpyHostToDevice);

int rsize=ndim*nelem*sizeof(double);
cudaMalloc((void **) &adtReals,rsize);
cudaMemcpy(adtReals,adtRealsInput,rsize,cudaMemcpyHostToDevice);

cudaMalloc((void **) &coord,rsize);
cudaMemcpy(coord,coordInput,rsize,cudaMemcpyHostToDevice);

rsize=ndim*sizeof(double);
cudaMalloc((void **) &adtExtents,rsize);
cudaMemcpy(adtReals,adtExtentsInput,rsize,cudaMemcpyHostToDevice);

rsize=ndim*sizeof(double);
cudaMalloc((void **) &adtExtents,rsize);
cudaMemcpy(adtExtents,adtExtentsInput,rsize,cudaMemcpyHostToDevice);
*/

}


void dADT::clearData(void)
{
 if (adtIntegers) cudaFree(adtIntegers);
 if (adtReals) cudaFree(adtReals);
 if (adtExtents) cudaFree(adtExtents);
 if (coord) cudaFree(coord);
 adtIntegers=NULL;
 adtReals=NULL;
 adtExtents=NULL;
}
