/** 
 * Generic Alternating Digital Tree For Search Operations
 * on the device
 */
#ifndef dADT_H
#define dADT_H

namespace PIFUS {

class dADT
{
public:
  int ndim{6};                 /**< number of dimensions (usually 3 but can be more) */
  int nelem{0};                /**< number of elements */

  int* adtIntegers{nullptr};   /**< integers that define the architecture of the tree */
  double* adtReals{nullptr};   /**< real numbers that provide the extents of each box */
  double* adtExtents{nullptr}; /**< global extents */
  double* coord{nullptr};      /**< bounding box of each element */

  dADT(){};

  ~dADT() { clearData(); };
  void setHostTree(
    int nelem,
    int* adtIntegersInput,
    double* adtRealsInput,
    double* adtExtentsInput,
    double* coordInput);
  void clearData(void);
  // void buildADT(int d,int nelements,double *elementBbox);
  // void searchADTRegion(int *elemid,double *xsearch,double *vec);
};

} // namespace PIFUS

#endif
