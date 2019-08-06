#include <cuda.h>
#include "dMeshBlock.h"
#include "cuda_emu_macros.h"
#include "search_functions.h"

void dMeshBlock::setData(int btag_in,int nnodes_in,int *c2f_in,int *face_in,
			 double *xin,int *iblank_in, int nfaces_in,
                         int nwbc_in, int nobc_in,int *wbcnode_in,int *obcnode_in,
			 int ntypes,int *nv,int *nc,int *vconn)
{
  btag=btag_in;
  nnodes=nnodes_in;
  for(int i=0;i<ntypes;i++)
    ncells+=nc[i];
  nfaces_in=nfaces;
  pushToDeviceInt(c2f,c2f_in,6*ncells*sizeof(int));
  pushToDeviceInt(face,face_in,2*nfaces*sizeof(int));
  pushToDeviceDouble(x,xin,3*nnodes*sizeof(double));
  pushToDeviceInt(iblank,iblankin,nnodes*sizeof(int));
  nobc_in=nobc;
  nwbc_in=nwbc;
  pushToDeviceInt(wbcnode,wbcnode_in,nwbc*sizeof(int));
  pushToDeviceInt(obcnode,obcnode_in,nobc*sizeof(int));
  for(int i=0;i<ntypes;i++)
    {
      if (nv[i]==4) {n4=nv[i]; pushToDeviceInt(ndc4,vconn[i],4*nc[i]*sizeof(int));}
      if (nv[i]==5) {n5=nv[i]; pushToDeviceInt(ndc5,vconn[i],5*nc[i]*sizeof(int));}
      if (nv[i]==6) {n6=nv[i]; pushToDeviceInt(ndc6,vconn[i],6*nc[i]*sizeof(int));}
      if (nv[i]==8) {n8=nv[i]; pushToDeviceInt(ndc8,vconn[i],8*nc[i]*sizeof(int));}
    }
}
