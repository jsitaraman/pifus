#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pifus.h"
using namespace PIFUS;
#define MAXBLOCKS 100;
pifus *pf;

extern "C" {
  void pifus_init_(void)
  {
    pf=new pifus[1];
  }
  void pifus_register_source_(int *btag,double *x,int *nnodes)
  {
    pf->registerGridData(*btag,*nnodes,x);
  }
  void pifus_register_source_solution_(int *btag, int *nvar,double *q)
  {
    pf->registerSolution(*btag,*nvar,q);
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
    
