#ifndef MESHBLOCK_H
#define MESHBLOCK_H

#include "ADT.h"
#include <vector>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>

namespace PIFUS {

class MeshBlock
{
 public:
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
  //
  int nwbc,nobc,ntypes,nfaces,ncells;
  int *c2f,*face,*iblank,*wbcnode,*obcnode,*nc,*nv;
  int **vconn;
  double *cellvolume;


  MeshBlock() {
    nnodes=ntargets=0;nvar=5;x=NULL;xtarget=NULL;
    btag=0;adt=NULL;
    q=NULL;
    qtarget=NULL;
    weights=NULL;
    elementBbox=NULL;
    pcount=NULL;
    pindx=NULL;
    c2f=face=iblank=wbcnode=obcnode=nc=nv=NULL;
    nwbc=nobc=ntypes=nfaces=0;
    vconn=NULL;
    cellvolume=NULL;
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

  void setData(int btag_in,int nnodes_in,int *c2f_in,
	       int *face_in,double *x_in, int *iblank_in,
	       int nfaces_in,int nwbc_in, int nobc_in,int *wbcnode_in, 
	       int *obcnode_in, int ntypes_in,
	       int *nv_in, int *nc_in, int **vconn_in)
  {
    btag=btag_in;
    nnodes=nnodes_in;
    c2f=c2f_in;
    nfaces=nfaces_in;
    face=face_in;
    x=x_in;
    iblank=iblank_in;
    nwbc=nwbc_in;
    nobc=nobc_in;
    wbcnode=wbcnode_in;
    obcnode=obcnode_in;
    ntypes=ntypes_in;
    nv=nv_in;
    nc=nc_in;
    vconn=vconn_in;
    ncells=0;
    for(int i=0;i<ntypes;i++) ncells+=nc[i];
    cellvolume=(double *)malloc(sizeof(double)*ncells);
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

  void outputIblankStats(void);

  void writeCellFile(int bid);

};

} // namespase PIFUS

#endif 
