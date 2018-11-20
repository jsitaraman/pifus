#include<stdio.h>
#include<stdlib.h>
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
  void pifus_register_source_solution_(int *btag, double *q)
  {
    pf->registerSolution(*btag,q);
  }
  void pifus_register_targets_(int *btag, int *ntargets,double *x, double *q)
  {
    pf->registerTargets(*btag,*ntargets,x,q);
  }
  void pifus_interpolate_(int *nvar)
  {
    pf->searchAndInterpolate(*nvar);
  }
 void pifus_delete_(void)
  {
   delete [] pf;
  }
}
    
