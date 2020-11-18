// -*- c++ -*- 
//#include "precision.h"
//#define BIGVAL 1E6
__global__ void find_neighbors(int *c2f,
	   	               int *face,
			       int *neig,
			       int ncells)
{
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  int j,faceid,c1,c2;

  if (idx < ncells) 
   {
    for(j=0;j<6;j++)
      {
	faceid=c2f[6*idx+j];
	if (faceid >=0) {
	  c1=face[2*faceid];
	  c2=face[2*faceid+1];
	  if (c1==idx) {
	    neig[6*idx+j]=c2;
	  }
	  if (c2==idx) {
	    neig[6*idx+j]=c1;
	  }
	}
      }
  }
}


