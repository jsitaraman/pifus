#include "pifus_types.h"
#include "pifus.h"
using namespace PIFUS;

void pifus::registerGridData(int btag, int nnodes, double *xyz)
{
  int iblk;
  auto idxit=tag_iblk_map.find(btag);
  if (idxit== tag_iblk_map.end()) {
    mtags.push_back(btag);
    mblocks.push_back(std::unique_ptr<MeshBlock>(new MeshBlock));
    dmblocks.push_back(std::unique_ptr<dMeshBlock>(new dMeshBlock));
    nblocks=mblocks.size();
    iblk=nblocks-1;
    tag_iblk_map[btag]=iblk;
  } else {
    iblk=idxit->second;
  
  } 
  auto &mb = mblocks[iblk];
  mb->setData(btag,nnodes,xyz);
  auto &dmb= dmblocks[iblk];
  dmb->setData(btag,nnodes,xyz);
}
  
void pifus::registerSolution(int btag, int nvar, double *q)
{
  auto idxit=tag_iblk_map.find(btag);
  int iblk=idxit->second;
  auto &mb = mblocks[iblk];
  auto &dmb= dmblocks[iblk];
  mb->setQ(nvar,q);
  dmb->setQ(nvar,q);
}

void pifus::registerTargets(int btag, int nvar, int ntargets, double *targetxyz,
			    double *targetq)
{
  auto idxit=tag_iblk_map.find(btag);
  int iblk=idxit->second;
  auto &mb = mblocks[iblk];
  auto &dmb = dmblocks[iblk];
  //TRACEI(ntargets);
  mb->setTargets(nvar,ntargets,targetxyz,targetq);
  dmb->setTargets(nvar,ntargets,targetxyz,targetq);
}

void pifus::searchAndInterpolate_gpu(int nvar)
{
  for (int ib=0;ib<nblocks;ib++)
    {
      auto &mb = mblocks[ib];
      auto &dmb= dmblocks[ib];
      mb->preprocess();
      dmb->preprocess(mb->getADT());
      //mb->search();
      dmb->search();
      //mb->interpolate(nvar);
      dmb->interpolate(nvar);
    }
}

void pifus::searchAndInterpolate(int nvar)
{
  for (int ib=0;ib<nblocks;ib++)
    {
      auto &mb = mblocks[ib];
      mb->preprocess();
      mb->search();
      mb->interpolate(nvar);
    }
}

