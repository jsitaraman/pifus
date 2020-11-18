// -*- c++ -*- 
#include <stdio.h>
#include <math.h>
#include "dMeshBlock.h"
#include "pifus_types.h"
#include "pifus_cuda.h"
#include "math_functions.h"
#include "search_functions.h"

namespace PIFUS {

  void dMeshBlock::setData(int btag_in,int nnodes_in,
			   int *c2f_in,int *face_in,
			   double *x_in,int *iblank_in, 
			   int nfaces_in,int nwbc_in, int nobc_in,
			   int *wbcnode_in,int *obcnode_in,
			   int ntypes,int *nv,int *nc,int **vconn)
  {
    btag=btag_in;
    nnodes=nnodes_in;
    nobc=nobc_in;
    nwbc=nwbc_in;

    for(int i=0;i<ntypes;i++)
      ncells+=nc[i];
    xmin[0]=xmin[1]=xmin[2]=PIFUS_BIGVALUE;
    xmax[0]=xmax[1]=xmax[2]=-PIFUS_BIGVALUE;
    for(int i=0;i<nnodes;i++)
      for(int k=0;k<3;k++)
	{
	  xmin[k]=PIFUS_MIN(xmin[k],x_in[3*i+k]);
	  xmax[k]=PIFUS_MAX(xmax[k],x_in[3*i+k]);
	}

    xwbmin[0]=xwbmin[1]=xwbmin[2]=PIFUS_BIGVALUE;
    xwbmax[0]=xwbmax[1]=xwbmax[2]=-PIFUS_BIGVALUE;
    for(int i=0;i<nwbc;i++)
      for(int k=0;k<3;k++)
	{
	  xwbmin[k]=PIFUS_MIN(xwbmin[k],x_in[3*(wbcnode_in[i]-PIFUS_BASE)+k]);
	  xwbmax[k]=PIFUS_MAX(xwbmax[k],x_in[3*(wbcnode_in[i]-PIFUS_BASE)+k]);
	}
    for(int k=0;k<3;k++)
      {
	xmin[k]-=PIFUS_TOL;
	xmax[k]+=PIFUS_TOL;
	xwbmin[k]-=PIFUS_TOL;
	xwbmax[k]+=PIFUS_TOL;
      }
    nfaces=nfaces_in;
    pushToDeviceInt(c2f,c2f_in,6*ncells*sizeof(int));
    pushToDeviceInt(face,face_in,2*nfaces*sizeof(int));
    pushToDeviceDouble(x,x_in,3*nnodes*sizeof(double));
    pushToDeviceInt(iblank,iblank_in,ncells*sizeof(int));
    pushToDeviceInt(wbcnode,wbcnode_in,nwbc*sizeof(int));
    pushToDeviceInt(obcnode,obcnode_in,nobc*sizeof(int));
    for(int i=0;i<ntypes;i++)
      {
	if (nv[i]==4) {n4=nc[i]; pushToDeviceInt(ndc4,vconn[i],4*nc[i]*sizeof(int));}
	if (nv[i]==5) {n5=nc[i]; pushToDeviceInt(ndc5,vconn[i],5*nc[i]*sizeof(int));}
	if (nv[i]==6) {n6=nc[i]; pushToDeviceInt(ndc6,vconn[i],6*nc[i]*sizeof(int));}
	if (nv[i]==8) {n8=nc[i]; pushToDeviceInt(ndc8,vconn[i],8*nc[i]*sizeof(int));}
      }
  }

  void dMeshBlock::preprocess(void)
  {
    int block_size = 512;		
    int n_blocks;

    //find neighbors
    //printf("Allocating neig %d\n",6*ncells);
    allocateOnDeviceInt(neig,6*ncells*sizeof(int));  
    //printf("Initializing array %d\n",6*ncells);
    n_blocks = (6*ncells)/block_size + ((6*ncells)%block_size == 0 ? 0:1);
    //setArray<int><<< n_blocks, block_size>>> (6*ncells,neig,-1);
    setArray<int><<< nblocks(6*ncells,block_size), block_size>>>(6*ncells,neig,-1);

    //printf("Finding neighbors\n");
    n_blocks = ncells/block_size + (ncells%block_size == 0 ? 0:1);
    find_neighbors<<< n_blocks, block_size>>>(c2f,face,neig,ncells);  

    // compute cell volume
    allocateOnDeviceDouble(cellvol,ncells*sizeof(double));
    allocateOnDeviceDouble(cellcenter,3*ncells*sizeof(double));
    //printf("Computing cell volume and cell center\n");
    cellparams<<< n_blocks, block_size >>>
    (cellvol,cellcenter,x,ndc4,ndc5,ndc6,ndc8,n4,n5,n6,n8,ncells);
    // create auxiliary grid as an inverse map
    
    double ncells3=pow(ncells,0.3333333);
  
    for(int k=0;k<3;k++)
      {
	ds[k]=(xmax[k]-xmin[k])/ncells3;
	mdim[k]=ceil((xmax[k]-xmin[k])/ds[k]);
	ds[k]=(xmax[k]-xmin[k])/mdim[k];
      }
    //
    allocateOnDeviceInt(itag,nnodes*sizeof(int));
    n_blocks = nnodes/block_size + (nnodes%block_size == 0 ? 0:1);
    setArray<int><<<n_blocks,block_size>>>(nnodes,itag,0);
    //
    block_size=32;
    n_blocks = nwbc/block_size + (nwbc%block_size == 0 ? 0:1);
    set_wbc_tags<<< n_blocks, block_size >>> (itag,wbcnode,nwbc);
    n_blocks = nobc/block_size + (nobc%block_size == 0 ? 0:1);
    set_obc_tags<<< n_blocks, block_size >>>(itag,obcnode,nobc);
    //
    allocateOnDeviceInt(auxGrid,mdim[0]*mdim[1]*mdim[2]*sizeof(int));
    allocateOnDeviceDouble(scfac,ncells*sizeof(double));
    allocateOnDeviceInt(celltag,ncells*sizeof(int));

    n_blocks = (mdim[0]*mdim[1]*mdim[2])/block_size + ((mdim[0]*mdim[1]*mdim[2])%block_size == 0 ? 0:1);

    setArray<int><<< n_blocks, block_size>>>(mdim[0]*mdim[1]*mdim[2],auxGrid,-1);
    n_blocks = ncells/block_size + (ncells%block_size == 0 ? 0:1);
    setArray<int><<< n_blocks, block_size>>>(ncells,celltag,-1);
    // TRACEI(mdim[0]);
    // TRACEI(mdim[1]);
    // TRACEI(mdim[2]);
    // TRACED(ds[0]);
    // TRACED(ds[1]);
    // TRACED(ds[2]);
    //
    block_size=512;
    n_blocks = ncells/block_size + (ncells%block_size == 0 ? 0:1);
    preprocess_nb_grid<<< n_blocks, block_size >>>
                       (ndc4,ndc5,ndc6,ndc8,x,cellvol,
		       ds[0],ds[1],ds[2],
		       xmin[0],xmin[1],xmin[2],
		       mdim[0],mdim[1],mdim[2],
		       itag,
		       celltag,
		       auxGrid,
		       scfac,
		       n4,n5,n6,n8,ncells);

    //double ne=0;
    //for(int i=0;i<mdim[0]*mdim[1]*mdim[2];i++)
    //  if (auxGrid[i] >=0 ) ne++;
    //TRACED(ne*1.0/(mdim[0]*mdim[1]*mdim[2]));
  }

  void dMeshBlock::createSearchPoints(void)
  {
    // for now assume a 2-grid problem and send all points as query points
    // this routine need to be modified using a table hash and OBB intersection
    // checks on the GPU in the multi-grid
    // multi-processor setting
    int n_blocks;
    int block_size=512;
    nquery=ncells;
    xquery=cellcenter;
    allocateOnDeviceInt(fringe,2*nquery*sizeof(int));
    n_blocks = (2*nquery)/block_size + ((2*nquery)%block_size == 0 ? 0:1);
    setArray<int><<< n_blocks, block_size>>>(2*nquery,fringe,-1);
    allocateOnDeviceDouble(deltax,3*nquery*sizeof(double));
    n_blocks = (3*nquery)/block_size + ((3*nquery)%block_size == 0 ? 0:1);
    setArray<double><<<n_blocks, block_size>>>(3*nquery,deltax,0.0);
  }

  void dMeshBlock::searchInverseMap(double *xsearch,int *iblank, int *fringe,
				    double *deltax,double *rcap,int nsearch)
  {
    int n_blocks;
    int block_size=512;

    allocateOnDeviceInt(interp,ncells*sizeof(int));
    n_blocks = (ncells)/block_size + ((ncells)%block_size == 0 ? 0:1);
    setArray<int><<<n_blocks, block_size>>>(ncells,interp,-1);
    n_blocks = (nsearch)/block_size + ((nsearch)%block_size == 0 ? 0:1);	
    donorSearch<<< n_blocks, block_size >>>
               (ndc4,ndc5,ndc6,ndc8,neig,x,auxGrid,
		mdim[0],mdim[1],mdim[2],
		xmin[0],xmin[1],xmin[2],
		ds[0],ds[1],ds[2],
		cellcenter,
		scfac,
		n4,n5,n6,n8,ncells,
		interp,
		fringe,
		deltax,
		xsearch,
		rcap,
		iblank,
		nsearch);
   cutHole<<< n_blocks, block_size>>>
    (xwbmin[0],xwbmin[1],xwbmin[2],
     xwbmax[0],xwbmax[1],xwbmin[3],
     xsearch,		    
     iblank,
     nsearch);

    
  }

void dMeshBlock::outputIblankStats(void)
  {
    int nfringe,nfield,nfound;
    nfringe=nfield=nfound=0;
    for(int i=0;i<ncells;i++)
      {
	if (iblank[i]==1) {
	  nfield++;
	} else if (iblank[i] < 0) {
	  nfound++;
	  if (iblank[i]==-1) nfringe++;
	} 
      }	
    printf("\n");
    TRACEI(ncells);
    TRACEI(nfield);
    TRACEI(nfringe);
    TRACEI(nfound);
    printf("\n");
  }  

  void dMeshBlock::getIblanks(int *iblankH)
  {
    pullFromDevice(iblankH,iblank,ncells*sizeof(int));
  }

  void dMeshBlock::getCellVolume(double *cellvolumeH)
  {
    pullFromDevice(cellvolumeH,cellvol,ncells*sizeof(double));
  }  
}
