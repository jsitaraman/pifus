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
    nblocks=mblocks.size();
    iblk=nblocks-1;
    tag_iblk_map[btag]=iblk;
  } else {
    iblk=idxit->second;
  
  } 
  auto &mb = mblocks[iblk];
  mb->setData(btag,nnodes,xyz);
}
  
void pifus::registerSolution(int btag, double *q)
{
  auto idxit=tag_iblk_map.find(btag);
  int iblk=idxit->second;
  auto &mb = mblocks[iblk];
  mb->setQ(q);
}

void pifus::registerTargets(int btag, int ntargets, double *targetxyz,
			    double *targetq)
{
  auto idxit=tag_iblk_map.find(btag);
  int iblk=idxit->second;
  auto &mb = mblocks[iblk];
  mb->setTargets(ntargets,targetxyz,targetq);
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
