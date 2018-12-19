#ifndef PIFUS_H
#define PIFUS_H
#include<vector>
#include<map>
#include<memory>
#include<stdint.h>
#include "dMeshBlock.h"
#include "MeshBlock.h"
namespace PIFUS {

class pifus 
  {
    private : 
      int nblocks;
      std::vector<std::unique_ptr<MeshBlock>>mblocks;
      std::vector<std::unique_ptr<dMeshBlock>>dmblocks;
      std::map<int, int> tag_iblk_map;
      std::vector<int> mtags;
  public:
      pifus()
	{
	  nblocks=0;
	  mblocks.clear();
	  dmblocks.clear();
	  tag_iblk_map.clear();
	  mtags.clear();
	}
      ~pifus() { mtags.clear(); tag_iblk_map.clear();mblocks.clear();}

      void registerGridData(int btag,int nnodes, double *xyz);
      void registerSolution(int btag, int nvar, double *q);
      void registerTargets(int btag,int nvar,int ntargets, double *targetxyz,
			   double *targetq);
      void searchAndInterpolate(int nvar);
  };
}
#endif 
