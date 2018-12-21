#ifndef DMESHBLOCK_H
#define DMESHBLOCK_H
#include <vector>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include "pifus_types.h"
#include "dADT.h"
#include "ADT.h"
class dMeshBlock
{
 public:
  int nnodes;
  int ntargets;
  int nvar;
  double *x;
  double *q;
  double *qH;
  double *xtarget;
  double *qtarget;
  double *weights;
  double *elementBbox;
  int *pcount;
  int *pindx;
  int btag;
  dADT *dadt;

  dMeshBlock() {
    nnodes=ntargets=0;nvar=5;x=NULL;xtarget=NULL;
    btag=0;dadt=NULL;
    q=NULL;
    qtarget=NULL;
    weights=NULL;
    elementBbox=NULL;
    pcount=NULL;
    pindx=NULL;
  }
#ifdef GPU
  ~dMeshBlock();
#else
  ~dMeshBlock() {};
#endif
     
  void setData(int btag_in,int nnodes_in,double *xin);
  
  void setQ(int nvar,double *qin);

  void setTargets(int nvar,int ntargets_in,double *xtargets_in,double *qtargets_in);

  void preprocess(ADT *adt);

  void search();

  void interpolate(int nvar);
};

#endif 
