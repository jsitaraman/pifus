#include "ADT.h"
#include <math.h>
#define maxStackSize 256

namespace PIFUS {

int boxRegionIntersect(double *x0,double *vec,double *bbox)
{
  int i,j,k,l,d,m,k1,k2;
  double xc[3][8],xp[3],xcmin[3],xcmax[3],alpha;
  double EPS=PIFUS_TOL;
  int bflag;

  bflag=0;
  for(i=0;i<3;i++) { xcmin[i]=PIFUS_BIGVALUE; xcmax[i]=-xcmin[i];}
  m=-1;
  // check if any corners are within the region
  for(l=0;l<2;l++)
    for(k=0;k<2;k++)
      for(j=0;j<2;j++)
	{
	  m++;
	  xp[0]=bbox[3*j+0]-x0[0];
	  xp[1]=bbox[3*k+1]-x0[1];
	  xp[2]=bbox[3*l+2]-x0[2];
	  for(d=0;d<2;d++)
	    {
	      xc[d][m]=xp[0]*vec[3*d]+xp[1]*vec[3*d+1]+xp[2]*vec[3*d+2];
	      xcmin[d]=(xc[d][m] < xcmin[d])?xc[d][m]:xcmin[d];
	      xcmax[d]=(xc[d][m] > xcmax[d])?xc[d][m]:xcmax[d];
	    }
          //printf("%f %f %f\n",xc[0][m],xc[1][m],xc[2][m]);
	  if (xc[0][m] > -EPS && 
	      xc[1][m] > -EPS &&
	      xc[2][m] > -EPS)
	    {
	      bflag=1;
              //printf("A\n");
	      return bflag;
	    }
	}
  
  if (xcmax[0] < 0.0 || xcmax[1] < 0.0 || xcmax[2] < 0.0) return bflag;
  
  for(k=0;k<3;k++)     // for each vector
    for(j=0;j<3;j++)   // for each direction
      for(i=0;i<2;i++) // for each vector in this direction
	{
	  if (fabs(vec[3*k+j] > PIFUS_TOL)) 
	    {
	      alpha=(bbox[3*i+j]-x0[j])/vec[3*k+j];
	      xp[0]=x0[0]+alpha*vec[3*k];
	      xp[1]=x0[1]+alpha*vec[3*k+1];
	      xp[2]=x0[2]+alpha*vec[3*k+2];
	      k1=(k+1)%3;
	      k2=(k1+1)%3;
	      if ( (xp[k1] - (bbox[k1]+EPS))*(xp[k1]-(bbox[3+k1]-EPS)) <= 0.0 &&
                   (xp[k2] - (bbox[k2]+EPS))*(xp[k2]-(bbox[3+k2]-EPS)) <= 0.0)
		{
		  bflag=1;
                  //printf("B\n");
		  return bflag;
		}
	    }
	}
  return bflag;
}

double boxdist2(double *xp, double *box)
{
  int j;
  double dx[3];
  double boxDist2;
  for(j=0;j<3;j++)
    {
      dx[j]=PIFUS_MAX(box[j]-xp[j],0.0);
      dx[j]=PIFUS_MAX(dx[j],xp[j]-box[j+3]);
    }
  boxDist2=dx[0]*dx[0]+dx[1]*dx[1]+dx[2]*dx[2];
  return boxDist2;
}


void searchIntersections_region(int *pointIndex,int *adtIntegers,double *adtReals,
				double *coord,int level,int node,double *dmin,
				double *xsearch,double *vec,int nelem,int ndim,int *nchecks)
{
  int i,k;
  int d,nodeChild;
  double element[ndim];
  double dv[ndim/2];
  double dtest,bdist;
  //
  for(i=0;i<ndim;i++)
    element[i]=coord[ndim*(adtIntegers[4*node])+i];
  //
  for(k=0;k<3;k++) 
    dv[k]=(element[0]-xsearch[0])*vec[3*k]+
          (element[1]-xsearch[1])*vec[3*k+1]+
          (element[2]-xsearch[2])*vec[3*k+2];
  //
  if (dv[0] > 0 && dv[1] > 0 && dv[2] > 0) 
    {
      (*nchecks)++;
      dtest=(element[0]-xsearch[0])*(element[0]-xsearch[0])+
	    (element[1]-xsearch[1])*(element[1]-xsearch[1])+
	    (element[2]-xsearch[2])*(element[2]-xsearch[2]);
      if (dtest < dmin[0]) 
	{
	  pointIndex[1]=pointIndex[0];
	  dmin[1]=dmin[0];
	  pointIndex[0]=adtIntegers[4*node];
	  dmin[0]=dtest;
	}
      else if (dtest < dmin[1])
	{
	  pointIndex[1]=adtIntegers[4*node];
	  dmin[1]=dtest;
	}
       //TRACEI(nchecks);
    }
  //
  // check the left and right children
  // now and sort based on distance if it is
  // within the given octant
  //
  for(d=1;d<3;d++)
    {
      nodeChild=adtIntegers[4*node+d];
      if (nodeChild > -1) {
        nodeChild=adtIntegers[4*nodeChild+3];
	for(i=0;i<ndim;i++)
         {
	  element[i]=adtReals[ndim*nodeChild+i];
         }
	if (boxRegionIntersect(xsearch,vec,element))
         {
	  bdist=boxdist2(xsearch,element);
	  if (bdist < dmin[0] || bdist < dmin[1]) 
	    {
	      searchIntersections_region(pointIndex,adtIntegers,adtReals,coord,
					 level+1,
					 nodeChild,dmin,xsearch,vec,nelem,ndim,                                           nchecks);
	    }
         }
      }
    }
  return;
}

void searchIntersections_region_norecursion(int *pointIndex,int *adtIntegers,double *adtReals,
				double *coord,int level,int node,double *dmin,
				double *xsearch,double *vec,int nelem,int ndim,int *nchecks)
{
  int i,k,is;
  int d,nodeChild;
  double element[ndim];
  double dv[ndim/2];
  double dtest,bdist;
  int nodeStack[maxStackSize];
  int mm=0;
  int nstack=1;

  //typedef struct nodestack{
  //  int val;
  //  struct nodestack* next;
  //} nstack;  
  //
  nodeStack[0]=node;
  
  while(nstack > 0) 
    {
      mm=0;
      for(is=0;is<nstack;is++)
	{
	  node=nodeStack[is];
	  for(i=0;i<ndim;i++)
	    element[i]=coord[ndim*(adtIntegers[4*node])+i];
	  //
	  for(k=0;k<3;k++) 
	    dv[k]=(element[0]-xsearch[0])*vec[3*k]+
	      (element[1]-xsearch[1])*vec[3*k+1]+
	      (element[2]-xsearch[2])*vec[3*k+2];
	  //
	  if (dv[0] > 0 && dv[1] > 0 && dv[2] > 0) 
	    {
	      (*nchecks)++;
	      dtest=(element[0]-xsearch[0])*(element[0]-xsearch[0])+
		(element[1]-xsearch[1])*(element[1]-xsearch[1])+
		(element[2]-xsearch[2])*(element[2]-xsearch[2]);
	      if (dtest < dmin[0]) 
		{
		  pointIndex[1]=pointIndex[0];
		  dmin[1]=dmin[0];
		  pointIndex[0]=adtIntegers[4*node];
		  dmin[0]=dtest;
		}
	      else if (dtest < dmin[1])
		{
		  pointIndex[1]=adtIntegers[4*node];
		  dmin[1]=dtest;
		}
	      //TRACEI(nchecks);
	    }
	  
	  //
	  // check the left and right children
	  // now and sort based on distance if it is
	  // within the given octant
	  //
	  for(d=1;d<3;d++)
	    {
	      nodeChild=adtIntegers[4*node+d];
	      if (nodeChild > -1) {
		nodeChild=adtIntegers[4*nodeChild+3];
		for(i=0;i<ndim;i++)
		  {
		    element[i]=adtReals[ndim*nodeChild+i];
		  }
                //printf("nodeChild/boxRegionIntersect=%d %d\n",nodeChild,boxRegionIntersect(xsearch,vec,element));
		if (boxRegionIntersect(xsearch,vec,element))
		  {
		    bdist=boxdist2(xsearch,element);
		    if (bdist < dmin[0] || bdist < dmin[1]) 
		      {
			nodeStack[mm+nstack]=nodeChild;
			mm++;
		      }
		  }
	      }
	    }
	}
      //printf("mm=%d\n",mm);
      for(int j=0;j<mm;j++)
         nodeStack[j]=nodeStack[j+nstack];
      nstack=mm;
      level++;
    }
  return;
}

void ADT::searchADTRegion(int *pointIndex,double *xsearch,double *vec)
{
  int rootNode;
  double dmin[2];
  int nchecks=0;
  int recursive=0;
  //
  // check if the given point is in the bounds of
  // the ADT
  //
  rootNode=0;
  pointIndex[0]=pointIndex[1]=-1; // closest two points
  dmin[0]=dmin[1]=PIFUS_BIGVALUE;
  /*
  printf("%f %f %f\n",xsearch[0],xsearch[1],xsearch[2]);
  for(int j=0;j < 10; j++)
   printf("%d \n",adtIntegers[j]);
  */

  //
  // call recursive routine to find the closest
  // node within an octant
  //
  if (recursive) {
  searchIntersections_region(pointIndex,adtIntegers,adtReals,
    coord,0,rootNode,dmin,xsearch,vec,nelem,ndim,
                             &nchecks);
  }
  else
  {
  searchIntersections_region_norecursion(pointIndex,adtIntegers,adtReals,
			     coord,0,rootNode,dmin,xsearch,vec,nelem,ndim,
                             &nchecks);
  }
  //printf("pointIndex, nchecks=%d %d\n",*pointIndex,nchecks);
} 

}
