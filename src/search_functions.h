// -*- c++ -*- 
//#include "precision.h"
//#define PIFUS_BIGVALUE 1E6	
//#define PIFUS_TOL 1e-10
#include<math.h>
#include<stdio.h>
#define REAL double
__device__ int faceEdgeIntersectCheck(REAL xface[4][3],
			   REAL xx[3],
			   REAL xp[3],
			   REAL xi[3],
			   REAL EPS1,
			   REAL EPS2,
			   int nvert);


__global__
void cutHole(double xmin, double ymin, double zmin,
	     double xmax, double ymax, double zmax,
	     double *xsearch,
	     int *iblank,
	     int nsearch)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  if (idx < nsearch)
#else
  for (int idx;idx < nsearch;idx++)
#endif
  {
  if (iblank[idx]==1) {
    if ( (xsearch[3*idx]-xmin)*(xsearch[3*idx]-xmax) < PIFUS_TOL &&
         (xsearch[3*idx+1]-ymin)*(xsearch[3*idx+1]-ymax) < PIFUS_TOL &&       	     
         (xsearch[3*idx+2]-zmin)*(xsearch[3*idx+1]-zmax) < PIFUS_TOL )
          iblank[idx]=0;
    }
  else if (iblank[idx]==-2) {
    iblank[idx]=1;
    }
  }
}
__global__
void cellparams(double *cellvol,double *cellcenter,double *x,
		int *ndc4,int *ndc5,int *ndc6, int *ndc8,
		int ntetra,int npyra,int nprizm,int nhexa,int ncells)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
  if (idx < ncells)
#else
  for (int idx;idx < ncells;idx++)
#endif
    {
      double xv[8][3];
      cellcenter[3*idx]=cellcenter[3*idx+1]=cellcenter[3*idx+2]=0;	  
      int icell;
      if (idx < ntetra) 
	{
	  icell=idx;
	  for(int j=0;j < 4;j++)
	    for(int k=0;k<3;k++)
	      {
		xv[j][k]=x[3*(ndc4[4*idx+j]-PIFUS_BASE)+k];
		cellcenter[3*idx+k]+=xv[j][k];
	      }
	  cellvol[idx]=computeCellVolume(xv,4);
	  for(int k=0;k<3;k++) cellcenter[3*idx+k]*=0.25;
	}
      else if (idx < ntetra + npyra)
	{
	  icell=idx-ntetra;
	  for(int j=0;j < 5;j++)
	    for(int k=0;k<3;k++)
	      {
		xv[j][k]=x[3*(ndc5[5*icell+j]-PIFUS_BASE)+k];
		cellcenter[3*idx+k]+=xv[j][k];
	      }
	  cellvol[idx]=computeCellVolume(xv,5);
	  for(int k=0;k<3;k++) cellcenter[3*idx+k]*=0.2;
	}
      else if (idx < ntetra + npyra + nprizm)
	{
	  icell=idx-ntetra-npyra;
	  for(int j=0;j < 6;j++)
	    for(int k=0;k<3;k++)
	      {
		xv[j][k]=x[3*(ndc6[6*icell+j]-PIFUS_BASE)+k];
		cellcenter[3*idx+k]+=xv[j][k];
	      }
	  cellvol[idx]=computeCellVolume(xv,6);
	  for(int k=0;k<3;k++) cellcenter[3*idx+k]*=0.1666666667;
	}
      else if (idx < ntetra + npyra + nprizm + nhexa)
	{
	  icell=idx-ntetra-npyra-nprizm;
	  for(int j=0;j < 8;j++)
	    for(int k=0;k<3;k++)
	      {
		xv[j][k]=x[3*(ndc8[8*icell+j]-PIFUS_BASE)+k];
		cellcenter[3*idx+k]+=xv[j][k];
	      }
	  cellvol[idx]=computeCellVolume(xv,8);
	  for(int k=0;k<3;k++) cellcenter[3*idx+k]*=0.125;
	}
    }
}	  
__global__ void donorSearch(int *ndc4,
		 int *ndc5,
		 int *ndc6,
		 int *ndc8,
		 int *neig,
		 REAL *x,
		 int *auxGrid,
		 int mdimx,int mdimy,int mdimz,
		 REAL xminx,REAL xminy, REAL xminz,
		 REAL dsx,REAL dsy, REAL dsz,	    
		 REAL *cellCenter,
		 REAL *scfac,
		 int ntetra,
		 int npyra,
		 int nprizm,
		 int nhexa,
		 int ncells,
		 int *interp,
		 int *fringe,
		 REAL *deltax,
		 REAL *xsearch,
		 REAL *rcap,
		 int *iblank,
		 int nsearch)
                 //!int* compactionIndex,
                 //!int* recipient)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
  int e[8],i,j,k,nvert;
  int icell,nfaces,ipoly;
  REAL xx[3],xp[3],xi[3];
  int numverts[4][6]={3,3,3,3,0,0,4,3,3,3,3,0,3,4,4,4,3,0,4,4,4,4,4,4};
  int faceInfo[4][24]={1,2,3,0,1,4,2,0,2,4,3,0,1,3,4,0,0,0,0,0,0,0,0,0,
		       1,2,3,4,1,5,2,0,2,5,3,0,4,3,5,0,1,4,5,0,0,0,0,0,
		       1,2,3,0,1,4,5,2,2,5,6,3,1,3,6,4,4,6,5,0,0,0,0,0,
		       1,2,3,4,1,5,6,2,2,6,7,3,3,7,8,4,1,4,8,5,5,8,7,6};
  int indx,findx;
  int idonor;
  int searchComplete;
  int donorPrev;
  int inside,intersect;
  REAL xface[4][3];
  int mdim[3];
  REAL ds[3];
  REAL xmin[3];
  // FILE *fp;
#ifdef GPU
  if (idx < nsearch)
#else
  for(int idx=0;idx < nsearch;idx++)
#endif
    {
      xmin[0]=xminx;
      xmin[1]=xminy;
      xmin[2]=xminz;
      ds[0]=dsx;
      ds[1]=dsy;
      ds[2]=dsz;
      mdim[0]=mdimx;
      mdim[1]=mdimy;
      mdim[2]=mdimz;
      //
      inside=1;
      //
    xx[0]=xsearch[3*idx];
    xx[1]=xsearch[3*idx+1];
    xx[2]=xsearch[3*idx+2];
    //
    k=(int)((xx[2]-xmin[2])/ds[2]);
    j=(int)((xx[1]-xmin[1])/ds[1]);
    i=(int)((xx[0]-xmin[0])/ds[0]);
    //
    if ( i < 0 || i > mdim[0]-1) inside=0;
    if ( j < 0 || j > mdim[1]-1) inside=0;
    if ( k < 0 || k > mdim[2]-1) inside=0;
    //
    if (inside) {
      indx=k*mdim[1]*mdim[0]+j*mdim[0]+i;
      idonor=auxGrid[indx];
      searchComplete=0;
      donorPrev=-3;
      if (idonor >=0) {
	xp[0]=cellCenter[3*idonor];
	xp[1]=cellCenter[3*idonor+1];
	xp[2]=cellCenter[3*idonor+2];
	
	while(idonor >=0 && !searchComplete) 
	  {
	    if (idonor < ntetra) {
	      icell=4*idonor;
	      nvert=4;
	      nfaces=4;
	      ipoly=0;
	      for (k=0;k<nvert;k++)
		e[k]=ndc4[icell+k];
	    }
	    else if (idonor < ntetra+npyra) {
	      nvert=5;
	      nfaces=5;
	      icell=nvert*(idonor-ntetra);
	      ipoly=1;
	      for (k=0;k<nvert;k++)
		e[k]=ndc5[icell+k];
	    }
	    else if (idonor < ntetra+npyra+nprizm) {
	      nvert=6;
	      nfaces=5;
	      ipoly=2;
	      icell=nvert*(idonor-ntetra-npyra);
	      for (k=0;k< nvert;k++)
		e[k]=ndc6[icell+k];
	    }
	    else if (idonor < ntetra+npyra+nprizm+nhexa){
	      nvert=8;
	      nfaces=6;
	      ipoly=3;
	      icell=nvert*(idonor-ntetra-npyra-nprizm);
	      for(k=0;k<nvert;k++)
		e[k]=ndc8[icell+k];
	    }
	    
	    k=0;
	    intersect=0;
	    
 	    // FILE *fp=fopen("cell.dat","w");
 	    // fprintf(fp,"TITLE=cell file\n");
 	    // fprintf(fp,"VARIABLES=\"X\",\"Y\",\"Z\"\n");
 	    // fprintf(fp,"ZONE T=\"VOL_MIXED\",N=6 E=1 ET=BRICK, F=FEPOINT\n");
 	    // for(j=0;j<nvert;j++)
 	    //   fprintf(fp,"%f %f %f\n",x[3*(e[j]-1)],x[3*(e[j]-1)+1],x[3*(e[j]-1)+2]);
 	    // fprintf(fp,"1 2 3 4 5 6 7 8\n");
 	    // fprintf(fp,"ZONE\n");
 	    // fprintf(fp,"%f %f %f\n",xx[0],xx[1],xx[2]);
 	    // fprintf(fp,"%f %f %f\n",xp[0],xp[1],xp[2]);
 	    // fclose(fp);

	    k=0;
	    while(k<nfaces && !intersect)
	      {
		//for(int l=0;l<6;l++) TRACEI(neig[6*idonor+l]);
		if (neig[6*idonor+k]!=donorPrev && !intersect)
		  {
		    for(j=0;j<numverts[ipoly][k];j++)
		      {
			findx=e[faceInfo[ipoly][4*k+j]-1]-PIFUS_BASE;
			xface[j][0]=x[3*findx];
			xface[j][1]=x[3*findx+1];
			xface[j][2]=x[3*findx+2];
		      }		
		    intersect=faceEdgeIntersectCheck(xface,xx,xp,xi,-PIFUS_TOL,PIFUS_TOL,
						     numverts[ipoly][k]);
		    if (intersect) {
		      donorPrev=idonor;
		      idonor=neig[6*idonor+k];
		      xp[0]=xi[0];
		      xp[1]=xi[1];
		      xp[2]=xi[2];
		    }
		  }
		k++;
	      }
	    
	    if (!intersect) {
	      if (idonor >=0) {
		if (scfac[idonor] < rcap[idx]) {
		  interp[idonor]=idx;
		  fringe[0+2*idx]=idonor;
		  fringe[1+2*idx]=idx;
		  //! fringe[idx] = idonor
		  
		  //!compactionIndex[idx]=0;
		  //!recipient[idx] = idx;
		  //deltax[3*idonor]=xx[0]-cellCenter[3*idonor];
		  //deltax[3*idonor+1]=xx[1]-cellCenter[3*idonor+1];
		  //deltax[3*idonor+2]=xx[2]-cellCenter[3*idonor+2];
		  deltax[3*idx]=xx[0]-cellCenter[3*idonor];
		  deltax[3*idx+1]=xx[1]-cellCenter[3*idonor+1];
		  deltax[3*idx+2]=xx[2]-cellCenter[3*idonor+2];
		  iblank[idx]=-1;
		}
		else {
		  iblank[idx]=-2;
		}	    
	      }
	      else {
		iblank[idx]=0;
	      }
	      searchComplete=1;
	    }
	  }
      }
    }
  }  
}	

__device__ int faceEdgeIntersectCheck(REAL xface[4][3],
			   REAL xx[3],
			   REAL xp[3],
			   REAL xi[3],
			   REAL EPS1,
			   REAL EPS2,
			   int nvert)
{
  REAL mat[3][3];
  REAL rhs[3];
  REAL sol[3];
  REAL ONE1=1+EPS1;
  REAL ONE2=1+EPS2;
  int i,j;
  REAL det,deti;
//  FILE *fp;

//   fp=fopen("cell.dat","a");
//   fprintf(fp,"ZONE T=\"VOL_MIXED\",N=%d E=1 ET=QUADRILATERAL, F=FEPOINT\n",nvert);  
//   for(i=0;i<nvert;i++)
//     fprintf(fp,"%f %f %f\n",xface[i][0],xface[i][1],xface[i][2]);
//   fprintf(fp,"1 2 3 %d\n",(nvert==4)?nvert:3);
//   fclose(fp);

  for(i=1;i<nvert-1;i++)
    {
      
      for (j=0;j<3;j++)
	{
	  mat[j][0]=xp[j]-xx[j];
	  mat[j][1]=xface[i][j]-xface[0][j];
	  mat[j][2]=xface[i+1][j]-xface[0][j];
	  rhs[j]=xp[j]-xface[0][j];
	}
      //
      // invert
      // 
      det=( mat[0][0]*(mat[2][2]*mat[1][1]-mat[2][1]*mat[1][2])-
	    mat[1][0]*(mat[2][2]*mat[0][1]-mat[2][1]*mat[0][2])+
	    mat[2][0]*(mat[1][2]*mat[0][1]-mat[1][1]*mat[0][2]));

      if (fabs(det) > 1E-10) {
	deti=1./det;
	sol[0]=deti*
	  ( (mat[2][2]*mat[1][1]-mat[2][1]*mat[1][2])*rhs[0]
	    -(mat[2][2]*mat[0][1]-mat[2][1]*mat[0][2])*rhs[1]
	    +(mat[1][2]*mat[0][1]-mat[1][1]*mat[0][2])*rhs[2]);
	
	sol[1]=deti*
	  (-(mat[2][2]*mat[1][0]-mat[2][0]*mat[1][2])*rhs[0]
	   +(mat[2][2]*mat[0][0]-mat[2][0]*mat[0][2])*rhs[1]
	   -(mat[1][2]*mat[0][0]-mat[1][0]*mat[0][2])*rhs[2]);
	
	sol[2]=deti*
	  ((mat[2][1]*mat[1][0]-mat[2][0]*mat[1][1])*rhs[0]
	   -(mat[2][1]*mat[0][0]-mat[2][0]*mat[0][1])*rhs[1]
	   +(mat[1][1]*mat[0][0]-mat[1][0]*mat[0][1])*rhs[2]);
	
	if ((sol[0]+EPS1)*(sol[0]-ONE1) < 0) {
	  if ((sol[1]+EPS2) >= 0 && (sol[2]+EPS2) >=0 && 
	      (sol[1]+sol[2]) <= ONE2) 
	    {
	      xi[0]=xp[0]+sol[0]*(xx[0]-xp[0]);
	      xi[1]=xp[1]+sol[0]*(xx[1]-xp[1]);
	      xi[2]=xp[2]+sol[0]*(xx[2]-xp[2]);
	      return 1;
	    }			  
	}
      }
    }
  return 0;
}
__global__ void find_neighbors(int *c2f,
	   	               int *face,
			       int *neig,
			       int ncells)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
  int j,faceid,c1,c2;
  //FILE *fp;

#ifdef GPU
  if (idx < ncells)
#else
    //    fp=fopen("facedebug.dat","w");
    for(int idx=0;idx < ncells;idx++)
#endif
  if (idx < ncells) 
   {
    for(j=0;j<6;j++)
      {
	faceid=c2f[6*idx+j];
	//fprintf(fp,"%d %d %d %d\n",idx,faceid,face[2*faceid],face[2*faceid+1]);
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
  //    fclose(fp);
}

__global__ void preprocess_nb_grid(int *ndc4,
			int *ndc5,
			int *ndc6,
			int *ndc8,
			REAL *x,
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
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
  int e[8],i,j,k,nvert,iflag;
  int icell;
  REAL xx;
  REAL axmin[3],axmax[3];
  REAL xmin[3],ds[3];
  int mdim[3];
  int ixmin[3],ixmax[3];
#ifdef GPU
  if (idx < ncells)
#else
  for (int idx;idx < ncells;idx++)
#endif
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
    
    axmin[0]=axmin[1]=axmin[2]=PIFUS_BIGVALUE;
    axmax[0]=axmax[1]=axmax[2]=-PIFUS_BIGVALUE;
    //
    // find the bounding box of the given cell
    //
    for(i=0;i<nvert;i++)
      for(k=0;k<3;k++)
	{
	  xx=x[3*(e[i]-PIFUS_BASE)+k];
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
	scfac[idx]=PIFUS_BIGVALUE;
      }
    else
      {
	scfac[idx]=cellVol[idx];
      }
  }
}
     

__global__ void set_tag(int *itag,int nnodes)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;;
#endif
#ifdef GPU
  if (idx < nnodes)
#else
 for(int idx = 0 ;idx < nnodes;idx++)
#endif
    {
      itag[idx]=0;
    }
}

__global__ void set_interp(int *interp,int ncells)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
#ifdef GPU
  if (idx < ncells)
#else
    for(int idx =0;idx <ncells;idx++)
#endif
    {
      interp[idx]=-1;
    }
}  
  
__global__ void set_wbc_tags(int *itag,int *wbcnode,int nwbc)
{
#ifdef GPU
  int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
#ifdef GPU
  if (idx < nwbc)
#else
  for(int idx =0 ;idx < nwbc;idx++)
#endif
    {
      itag[wbcnode[idx]]=1;
    }
}			

__global__ void set_obc_tags(int *itag,int *obcnode,int nobc)
{
#ifdef GPU
    int idx=blockIdx.x*blockDim.x + threadIdx.x;
#endif
#ifdef GPU
    if (idx < nobc)
#else
   for(int idx=0;idx < nobc;idx++)
#endif
      {
	itag[obcnode[idx]]=2;
      }
}			


template < typename T >
__global__ void setVector(int nr, int nc, T* vec, T val)
{
#ifdef GPU
   int idx = blockIdx.x*blockDim.x + threadIdx.x;
#endif
#ifdef GPU
   if (idx < nr)
#else
   for(int idx=0;idx < nr;idx++)
#endif
    {
     vec[0+nc*idx]=val;
     vec[1+nc*idx]=val;
     vec[2+nc*idx]=val;
    }
}

template < typename T >
__global__ void setArray(int nr, T* vec, T val)
{
#ifdef GPU
   int idx = blockIdx.x*blockDim.x + threadIdx.x;
#endif
#ifdef GPU
   if (idx < nr)
#else
   for(int idx=0;idx < nr;idx++)
#endif
    {
     vec[idx]=val;
    }
}


