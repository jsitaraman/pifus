// -*- c++ -*- 
//#include "precision.h"
#define BIGVAL 1E6
//#include<math.h>
//#include<stdio.h>
//#include<stdlib.h>
#define REAL double
__global__ void preprocess_nb_grid(int *ndc4,
			int *ndc5,
			int *ndc6,
			int *ndc8,
			REAL *x,
			REAL *cellCenter,
			REAL *cellVol,
			REAL dsx,REAL dsy,REAL dsz,
			REAL xminx,REAL xminy,REAL xminz,
			int mdimx,int mdimy,int mdimz,
			int *itag,
			int *celltag,
			int *auxGrid,
			REAL *scfac,
			int ntetra,
			int npyra,
			int nprizm,
			int nhexa,
			int ncells)

{
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  int e[8],i,j,k,nvert,iflag;
  int icell;
  REAL xx;
  REAL axmin[3],axmax[3];
  REAL xmin[3],ds[3];
  int mdim[3];
  int ixmin[3],ixmax[3];

  if (idx < ncells)
  {
    xmin[0]=xminx;
    xmin[1]=xminy;
    xmin[2]=xminz;
    mdim[0]=mdimx;
    mdim[1]=mdimy;
    mdim[2]=mdimz;
    ds[0]=dsx;
    ds[1]=dsy;
    ds[2]=dsz;
    //    printf("%d \n",idx);
    if (idx < ntetra)
      {
	icell=4*idx;
	nvert=4;
	for(k=0;k<nvert;k++)
	  e[k]=ndc4[icell+k];
      }
    else if (idx < ntetra+npyra) 
      {
	icell=5*(idx-ntetra);
	nvert=5;
	for(k=0;k<nvert;k++)
	  e[k]=ndc5[icell+k];
      }
    else if (idx < ntetra+npyra+nprizm)
      {
	icell=6*(idx-ntetra-npyra);
	nvert=6;
	for(k=0;k<nvert;k++)
	  e[k]=ndc6[icell+k];
      }
    else if (idx < ntetra+npyra+nprizm+nhexa)
      {
	icell=8*(idx-ntetra-npyra-nprizm);
	nvert=8;
	for(k=0;k<nvert;k++)
	  e[k]=ndc8[icell+k];
      }
    
    axmin[0]=axmin[1]=axmin[2]=BIGVAL;
    axmax[0]=axmax[1]=axmax[2]=-BIGVAL;
    //
    // find the bounding box of the given cell
    //
    for(i=0;i<nvert;i++)
      for(k=0;k<3;k++)
	{
	  xx=x[3*e[i]+k];
	  axmin[k]=axmin[k] > xx ? xx : axmin[k];
	  axmax[k]=axmax[k] < xx ? xx : axmax[k];
	}
    //
    // find the index limits
    // 
    for(k=0;k<3;k++)
      {
	ixmin[k]=(int)floor(((axmin[k]-xmin[k])/ds[k]));
	ixmax[k]=(int)floor(((axmax[k]-xmin[k])/ds[k]));
      }
    //
    for(k=ixmin[2];k<=ixmax[2];k++)
      for(j=ixmin[1];j<=ixmax[1];j++)
	for (i=ixmin[0];i<=ixmax[0];i++)
	  {
	    auxGrid[k*mdim[1]*mdim[0]+j*mdim[0]+i]=idx;
	  }
    //
    // tag wall boundary cells //
    //
    iflag=0;
    for(i=0;i<nvert;i++) 
      {
	iflag=iflag + (itag[e[i]] == 1);
      }
    
    if (iflag > 0) 
      { 
	celltag[idx]=1;
      }
    else
      {
	celltag[idx]=0;
      }
    //
    // tag outer boundary nodes and cells //
    //
    iflag=0;
    for(i=0;i<nvert;i++) 
      {
	iflag=iflag + (itag[e[i]] == 2);
      }
    
    if (iflag > 0) 
      {
	scfac[idx]=BIGVAL;
      }
    else
      {
	scfac[idx]=cellVol[idx];
      }
  }
}
     

__global__ void set_tag(int *itag,int nnodes)
{
  int idx=blockIdx.x*blockDim.x + threadIdx.x;;
  if (idx < nnodes)
    {
      itag[idx]=0;
    }
}

__global__ void set_interp(int *interp,int ncells)
{
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  if (idx < ncells)
    {
      interp[idx]=-1;
    }
}  
  
__global__ void set_wbc_tags(int *itag,int *wbcnode,int nwbc)
{
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  if (idx < nwbc)
    {
      itag[wbcnode[idx]]=1;
    }
}			

__global__ void set_obc_tags(int *itag,int *obcnode,int nobc)
{
    int idx=blockIdx.x*blockDim.x + threadIdx.x;
    if (idx < nobc)
      {
	itag[obcnode[idx]]=2;
      }
}			

__global__ void setScalar(int N, int* vec, int val)
{
   int idx = blockIdx.x*blockDim.x + threadIdx.x;
   if (idx < N)
     {
        vec[idx]=val;
     }
}


template < typename T >
__global__ void setVector(int nr, int nc, T* vec, T val)
{
   int idx = blockIdx.x*blockDim.x + threadIdx.x;
   if (idx < nr)
    {
     vec[0+nc*idx]=val;
     vec[1+nc*idx]=val;
     vec[2+nc*idx]=val;
    }
}


