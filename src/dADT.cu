#include "dADT.h"
#include "pifus_types.h"
#include "pifus_cuda.h"

namespace PIFUS {

void dADT::setHostTree(int nelemInput,int *adtIntegersInput, double *adtRealsInput,
                            double *adtExtentsInput, double *coordInput)
{

nelem=nelemInput;

pushToDeviceInt(adtIntegers,adtIntegersInput,4*nelem*sizeof(int));
pushToDeviceDouble(adtReals,adtRealsInput,ndim*nelem*sizeof(double));
pushToDeviceDouble(adtExtents,adtExtentsInput,ndim*sizeof(double));
pushToDeviceDouble(coord,coordInput,ndim*nelem*sizeof(double));

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
 if (adtIntegers) deallocateDevice(adtIntegers);
 if (adtReals) deallocateDevice(adtReals);
 if (adtExtents) deallocateDevice(adtExtents);
 if (coord) deallocateDevice(coord);
 adtIntegers=nullptr;
 adtReals=nullptr;
 adtExtents=nullptr;
}

}
