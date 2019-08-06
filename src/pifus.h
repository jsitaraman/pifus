#ifndef PIFUS_H
#define PIFUS_H

#include<vector>
#include<map>
#include<memory>

namespace PIFUS {

class MeshBlock;
class dMeshBlock;

class pifus
{
private:
  int nblocks{0};
  std::vector<std::unique_ptr<MeshBlock>> mblocks;
  std::vector<std::unique_ptr<dMeshBlock>> dmblocks;
  std::map<int, int> tag_iblk_map;
  std::vector<int> mtags;

public:
  int use_timer{0};

  pifus();

  ~pifus();

  void registerGridData(int btag, int nnodes, double* xyz);
  void registerSolution(int btag, int nvar, double* q);
  void registerTargets(
    int btag, int nvar, int ntargets, double* targetxyz, double* targetq);
  void searchAndInterpolate(int nvar);
  void searchAndInterpolate_gpu(int nvar);
  void myTimer(char const*, int);
  void registerGridData(int btag, int nnodes, 
			int *c2f,int *face,
			double *xyz, int *iblank,
			int nfaces,int nwbc, int nobc, 
			int *wbcnode,int *obcnode,
			int ntypes,int *nv, int *nc, int *vconn);
};

} // namespace PIFUS
#endif 
