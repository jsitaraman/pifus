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
  //
  int nwbc,nobc,n4,n5,n6,n8,nfaces,ncells;
  int *c2f,*face,*iblank,*wbcnode,*obcnode,*nc,*nv;
  int *ndc4,*ndc5,*ndc6,*ndc8;

  dMeshBlock() {
    nnodes=ntargets=0;nvar=5;x=NULL;xtarget=NULL;
    btag=0;dadt=NULL;
    q=NULL;
    qtarget=NULL;
    weights=NULL;
    elementBbox=NULL;
    pcount=NULL;
    pindx=NULL;
    c2f=face=iblank=wbcnode=obcnode=nc=nv=NULL;
    ndc4=ndc5=ndc6=ndc8=NULL;
    n4=n5=n6=n8=nwbc=nobc=nfaces=0;
    ncells=0;
  }
#ifdef GPU
  ~dMeshBlock();
#else
  ~dMeshBlock() {};
#endif
     
  void setData(int btag_in,int nnodes_in,double *xin);

  void setData(int btag_in,int nnodes_in,int *c2f_in,
	       int *face_in,double *x_in, int *iblank_in,
	       int nwbc_in, int nobc_in,int *wbcnode_in, 
	       int *obcnode_in, int ntypes_in,
	       int *nv_in, int *nc_in, int *vconn_in)
  
  void setQ(int nvar,double *qin);

  void setTargets(int nvar,int ntargets_in,double *xtargets_in,double *qtargets_in);

  void preprocess(ADT *adt);

  void search();

  void interpolate(int nvar);
};

#endif 
