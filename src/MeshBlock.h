#ifndef MESHBLOCK_H
#define MESHBLOCK_H

#include "ADT.h"
#include "pifus_types.h"

#include <vector>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>

namespace PIFUS {

class MeshBlock
{
 private:
  int nnodes;
  int ntargets;
  int nvar;
  double *x;
  double *q;
  double *xtarget;
  double *qtarget;
  double **weights;
  double *elementBbox;
  int *pcount;
  int **pindx;
  int btag;
  ADT *adt;

 public:
  MeshBlock() {
    nnodes=ntargets=0;nvar=5;x=NULL;xtarget=NULL;
    btag=0;adt=NULL;
    q=NULL;
    qtarget=NULL;
    weights=NULL;
    elementBbox=NULL;
    pcount=NULL;
    pindx=NULL;
  }

 ~MeshBlock() {
   if (elementBbox) PIFUS_FREE(elementBbox);
   if (pcount) PIFUS_FREE(pcount);
   if (pindx) {
     for(int i=0;i<ntargets;i++) PIFUS_FREE(pindx[i]);
     for(int i=0;i<ntargets;i++) PIFUS_FREE(weights[i]);
     PIFUS_FREE(pindx);
     PIFUS_FREE(weights);
   }
   delete [] adt;
  }
   
  
  void setData(int btag_in,int nnodes_in,double *xin)
  {
    btag=btag_in;
    nnodes=nnodes_in;
    x=xin;
  }
  
  void setQ(int nvarin,double *qin) {nvar=nvarin;q=qin;};

  void setTargets(int nvar,int ntargets_in,double *xtargets_in,double *qtargets_in)
  {
    ntargets=ntargets_in;
    xtarget=xtargets_in;
    qtarget=qtargets_in;
  }
  
  void preprocess();

  void search();

  void interpolate(int nvar);

  ADT *getADT() {return adt;}
};

} // namespase PIFUS

#endif 
