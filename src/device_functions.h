
#include <cmath>

#define NEQNS 12
#define maxStackSize 32
#define d_fabs(a) (a > 0 ? a:-a)

void msort(double* xyz, int& n, int* isorted);

__device__
int d_boxRegionIntersect(double *x0,double *vec,double *bbox)
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
	  for(d=0;d<3;d++)
	    {
	      xc[d][m]=xp[0]*vec[3*d]+xp[1]*vec[3*d+1]+xp[2]*vec[3*d+2];
	      xcmin[d]=(xc[d][m] < xcmin[d])?xc[d][m]:xcmin[d];
	      xcmax[d]=(xc[d][m] > xcmax[d])?xc[d][m]:xcmax[d];
	    }
          //printf("%f %f %f %f\n",xc[0][m],xc[1][m],xc[2][m],EPS);
          //printf("%d %d %d\n",(xc[0][m] > -EPS),(xc[1][m] > -EPS),(xc[2][m] > -EPS));
	  if (xc[0][m] >= -EPS && 
	      xc[1][m] >= -EPS &&
	      xc[2][m] >= -EPS)
	    {
	      bflag=1;
	      return bflag;
	    }
	}
  
  if (xcmax[0] < 0.0 || xcmax[1] < 0.0 || xcmax[2] < 0.0) return bflag;
  
  for(k=0;k<3;k++)     // for each vector
    for(j=0;j<3;j++)   // for each direction
      for(i=0;i<2;i++) // for each vector in this direction
	{
	  if (d_fabs(vec[3*k+j]) > PIFUS_TOL)
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
		  return bflag;
		}
	    }
	}
  return bflag;
}
__device__
double d_boxdist2(double *xp, double *box)
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


__device__
void d_solvec(double a[NEQNS][NEQNS],double b[NEQNS],int *iflag,int n)
{
  int i,j,k,l,flag;
  double fact;
  double temp;
  double sum;
  double eps=1e-8;

  
  for(i=0;i<n;i++)
    {
      if (d_fabs(a[i][i]) < eps)
	{
	  flag=1;
	  for(k=i+1;k<n && flag;k++)
	    {
	      if (a[k][i]!=0)
                {
		  flag=0;
		  for(l=0;l<n;l++)
		    {
		      temp=a[k][l];
		      a[k][l]=a[i][l];
		      a[i][l]=temp;
		    }
		  temp=b[k];
		  b[k]=b[i];
		  b[i]=temp;
                }
	    }
	  if (flag) {*iflag=0;return;}
	}
      for(k=i+1;k<n;k++)
	{
	  if (i!=k)
	    {
	      fact=-a[k][i]/a[i][i];
	      for(j=0;j<n;j++)
		{
		  a[k][j]+=fact*a[i][j];
		}
	      b[k]+=fact*b[i];
	    }
	}
    }

  for(i=n-1;i>=0;i--)
    {
      sum=0;
      for(j=i+1;j<n;j++)
	sum+=a[i][j]*b[j];
      b[i]=(b[i]-sum)/a[i][i];
    }
  *iflag=1;
  return;

}


__device__ 
void d_interprbf(double *xcloud, double *P,double *weights,int np,int itype, int *iflag)
{
  int i,j,n;
  double M[NEQNS][NEQNS], B[NEQNS];
  double dd;
  int neqns=np+4;
  //TRACEI(np);
  for(i=0;i<np;i++)
    {
      for(j=0;j<np;j++)
	{
	  dd=0;
	  for(n=0;n<3;n++) dd+=(xcloud[3*i+n]-xcloud[3*j+n])*(xcloud[3*i+n]-xcloud[3*j+n]);
	  M[i][j]=std::exp(-dd);
	}
      M[i][np]=M[np][i]=1.0;
      for(j=np+1,n=0;j<np+4;j++,n++) M[i][j]=M[j][i]=xcloud[3*i+n];
      dd=0;
      for(n=0;n<3;n++) dd+=(xcloud[3*i+n]-P[n])*(xcloud[3*i+n]-P[n]);
      B[i]=std::exp(-dd);
    }
  for(i=np;i<np+4;i++) 
    {
      for(j=np;j<np+4;j++)
	M[i][j]=0.0;
      B[i]=(i==np)?1.0:P[i-(np+1)];
    }
  /*
  for(i=0;i<np+4;i++)
   {
    for(j=0;j<np+4;j++)
      printf("%8.4f ", M[i][j]);
    printf("\n");
   }
  */
  d_solvec(M,B,iflag,neqns);
  for(i=0;i<np;i++) weights[i]=B[i];
}

__device__
void d_searchIntersections_norecursion(int *pointIndex,
			               int *adtIntegers,
				       double *adtReals,
				       double *coord,
				       double *xsearch,
				       double *vec,
				       int nelem,
				       int ndim,
				       int *nchecks)
{
  

  int i,k,is;
  int d,nodeChild;
  double element[6];
  double dv[3];
  double dtest,bdist;
  int nodeStack[maxStackSize];
  int mm=0;
  int nstack=1;
  double dmin[2];

  //typedef struct nodestack{
  //  int val;
  //  struct nodestack* next;
  //} nstack;  
  //
  int node=0;
  int level=0;

  nodeStack[0]=node;
  dmin[0]=dmin[1]=PIFUS_BIGVALUE;
  pointIndex[0]=pointIndex[1]=-1;

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
                //printf("nodeChild,d_boxRegionIntersect: %d %d\n",nodeChild,d_boxRegionIntersect(xsearch,vec,element));
		if (d_boxRegionIntersect(xsearch,vec,element))
		  {
		    bdist=d_boxdist2(xsearch,element);
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
__device__
void d_searchIntersections_region_norecursion(int *pointIndex,int *adtIntegers,double *adtReals,
				double *coord,int level,int node,double *dmin,
				double *xsearch,double *vec,int nelem,int ndim,int *nchecks)
{
  int i,k,is;
  int d,nodeChild;
  double element[6];
  double dv[3];
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
		if (d_boxRegionIntersect(xsearch,vec,element))
		  {
		    bdist=d_boxdist2(xsearch,element);
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
