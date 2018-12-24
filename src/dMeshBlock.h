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

  dMeshBlock() {}

  ~dMeshBlock();

  void setData(int btag_in, int nnodes_in, double* xin);

  void setQ(int nvar, double* qin);

  void setTargets(int nvar, int ntargets_in, double* xtargets_in, double* qtargets_in);

  void preprocess(ADT* adt);

  void search();

  void interpolate(int nvar);
};

} // namespace PIFUS

#endif 
