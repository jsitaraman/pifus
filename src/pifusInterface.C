#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pifus.h"
using namespace PIFUS;
#define MAXBLOCKS 100;
pifus *pf;
/*
** pointer storage for connectivity arrays that
** comes from external solver
*/
typedef struct inpdata
{
int **vconn;
int *nc;
int *nv;
} inpdata;
inpdata idata[MAXBLOCKS];

extern "C" {
  void pifus_init_(void)
  {
    pf=new pifus[1];
  }
  void pifus_use_timer_(void)
  {
   pf->use_timer=1;
  }
  void pifus_register_source_(int *btag,double *x,int *nnodes)
  {
    pf->registerGridData(*btag,*nnodes,x);
  }
  void pifus_register_source_solution_(int *btag, int *nvar,double *q)
  {
    pf->registerSolution(*btag,*nvar,q);
  }
  void pifus_registergrid_data(int *bid,int *btag,int *c2f,int *face,
			       int *nfaces,int *nnodes,
			       double *xyz,int *ibl,int *nwbc, 
			       int *nobc,int *wbcnode,
                               int *obcnode,int *ntypes,...)
  {
    va_list arguments;
    int i;
    int iblk=*bid-BASE;

    va_start(arguments, ntypes);

    if(idata[iblk].nv) TIOGA_FREE(idata[iblk].nv);
    if(idata[iblk].nc) TIOGA_FREE(idata[iblk].nc);
    if(idata[iblk].vconn) TIOGA_FREE(idata[iblk].vconn);
    idata[iblk].nv=(int *) malloc(sizeof(int)*(*ntypes));
    idata[iblk].nc=(int *) malloc(sizeof(int)*(*ntypes));
    idata[iblk].vconn=(int **)malloc(sizeof(int *)*(*ntypes));
    for(i=0;i<*ntypes;i++)
      {
	idata[iblk].nv[i]=*(va_arg(arguments, int *));
	idata[iblk].nc[i]=*(va_arg(arguments, int *));
	idata[iblk].vconn[i]=va_arg(arguments, int *);
      }
    pf->registerGridData(*btag,*nnodes,
			 c2f,face,xyz,ibl,
			 *nfaces,*nwbc,*nobc,
			 wbcnode,obcnode,
			 *ntypes,idata[iblk].nv,idata[iblk].nc,idata[iblk].vconn);
    
  }

  void pifus_register_targets_(int *btag, int *nvar, int *ntargets,double *x, double *q)
  {
    pf->registerTargets(*btag,*nvar,*ntargets,x,q);
  }
  void pifus_interpolate_(int *nvar, char *devicetype)
  {
    if (strstr(devicetype,"gpu"))
      {
	pf->searchAndInterpolate_gpu(*nvar);
      }
    else
      {
	pf->searchAndInterpolate(*nvar);
      }
	
  }
 void pifus_delete_(void)
  {
   delete [] pf;
  }
}
    
