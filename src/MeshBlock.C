
#include "MeshBlock.h"
#include "pifus_ext.h"

#include <stdio.h>

#ifdef ENABLE_OPENMP
#include <omp.h>
#endif

namespace PIFUS {

void MeshBlock::preprocess()
{
  if (elementBbox) PIFUS_FREE(elementBbox);
  
  elementBbox=(double *)malloc(sizeof(double)*nnodes*6);

  int l=0;
  for(int i=0;i<nnodes;i++)
    {
      elementBbox[l++]=x[3*i];
      elementBbox[l++]=x[3*i+1];
      elementBbox[l++]=x[3*i+2];
      elementBbox[l++]=x[3*i];
      elementBbox[l++]=x[3*i+1];
      elementBbox[l++]=x[3*i+2];
    }
  if (adt) 
    {
      adt->clearData();
    }
  else
    {
      adt = new ADT[1];
    }
  int ndim=6;
  adt->buildADT(ndim,nnodes,elementBbox);
}
 
void MeshBlock::search()
{
  double v0[3][3];
  //double *vec;
  //double *xcloud;
  //int *indx;
  int iorder=1;
  int np;
  //
  v0[0][0]=1.0;v0[1][0]=0.0;;v0[2][0]=0.0;
  v0[0][1]=0.0;v0[1][1]=1.0;;v0[2][1]=0.0;
  v0[0][2]=0.0;v0[1][2]=0.0;;v0[2][2]=1.0;
  //vec=(double *)malloc(sizeof(vec)*9);
  np=8*iorder;
  //indx=(int *)malloc(sizeof(int)*(np+1));
  //xcloud=(double *)malloc(sizeof(double)*3*(np+1));
  //
  // free weights if it exists
  //
  if (weights != NULL || pindx !=NULL) 
    {
      for(int i=0;i<ntargets;i++)
       {
	if (weights[i]!=NULL) PIFUS_FREE(weights[i]);
        if (pindx[i]  !=NULL) PIFUS_FREE(pindx[i]);
       } 
     PIFUS_FREE(weights);
     PIFUS_FREE(pindx);
     PIFUS_FREE(pcount);
    }
  weights=(double **)malloc(sizeof(double *)*ntargets);
  pindx=(int **)malloc(sizeof(int *)*ntargets);
  pcount = (int *)malloc(sizeof(int)*ntargets);
  //
 {
  #pragma omp parallel for
  for(int i=0;i<ntargets;i++)
    {
      double vec[9];
      double xcloud[24];
      int indx[9];
      int p=0;
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
	      adt->searchADTRegion(&(indx[p]),&(xtarget[3*i]),vec);
	      p+=iorder;
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
      weights[i]=(double *) malloc(sizeof(double)*m);
      pindx[i]=(int *)malloc(sizeof(int)*m/3);
      pcount[i]=m/3;
      for(p=0;p<m/3;p++) pindx[i][p]=indx[p];
      interprbf_(xcloud,&(xtarget[3*i]),weights[i],&pcount[i],&itype,&iflag);      
      //for(p=0;p<pcount[i];p++) TRACED(weights[i][p]);
      //interpls1_(xcloud,&(xtarget[3*i]),weights[i],&pcount[i],&iflag);      
    }
  }
  //PIFUS_FREE(indx);
  //PIFUS_FREE(xcloud);
  //PIFUS_FREE(vec);
}
  
void MeshBlock::interpolate(int nvar)
{
  for (int i = 0; i < ntargets; i++) {
    for (int j = 0; j < nvar; j++) {
      qtarget[i * nvar + j] = 0.0;
      for (int p = 0; p < pcount[i]; p++) {
        qtarget[i * nvar + j] += (weights[i][p] * q[pindx[i][p] * nvar + j]);
      }
    }
  }
}

void MeshBlock::outputIblankStats(void)
  {
    int nfringe,nfield,nfound,nhole;
    nfringe=nfield=nhole=0;
    for(int i=0;i<ncells;i++)
      {
	if (iblank[i]==1) {
	  nfield++;
	} else if (iblank[i] <= 0) {
	  if (iblank[i]==-1) nfringe++;
	  if (iblank[i]== 0) nhole++;
	} 
      }	
    printf("\n");
    TRACEI(ncells);
    TRACEI(nfield);
    TRACEI(nfringe);
    TRACEI(nhole);
    printf("\n");
  }


} // namespace PIFUS
