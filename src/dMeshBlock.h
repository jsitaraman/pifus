#ifndef DMESHBLOCK_H
#define DMESHBLOCK_H

namespace PIFUS {

class dADT;
class ADT;

class dMeshBlock
{
public:
  int nnodes{0};
  int ntargets{0};
  int nvar{5};
  double* x{nullptr};
  double* q{nullptr};
  double* qH{nullptr};
  double* xtarget{nullptr};
  double* qtarget{nullptr};
  double* weights{nullptr};
  double* elementBbox{nullptr};
  int* pcount{nullptr};
  int* pindx{nullptr};
  int btag{0};
  dADT* dadt{0};
  int nwbc{0};
  int nobc{0};
  int n4{0};
  int n5{0};
  int n6{0};
  int n8{0};
  int nfaces{0};
  int ncells{0};
  int *c2f{nullptr};
  int *face{nullptr};
  int *iblank{nullptr};
  int *wbcnode{nullptr};
  int *obcnode{nullptr};
  int *nc{nullptr};
  int *nv{nullptr};
  int *ndc4{nullptr}:
  int *ndc5{nullptr};
  int *ndc6{nullptr};
  int *ndc8{nullptr};

  dMeshBlock() {}

  ~dMeshBlock();

  void setData(int btag_in, int nnodes_in, double* xin);

  void setData(int btag_in,int nnodes_in,int *c2f_in,
	       int *face_in,double *x_in, int *iblank_in,
	       int nwbc_in, int nobc_in,int *wbcnode_in, 
	       int *obcnode_in, int ntypes_in,
	       int *nv_in, int *nc_in, int *vconn_in)

  void setQ(int nvar, double* qin);

  void setTargets(int nvar, int ntargets_in, double* xtargets_in, double* qtargets_in);

  void preprocess(ADT* adt);

  void search();

  void interpolate(int nvar);
};

} // namespace PIFUS

#endif 
