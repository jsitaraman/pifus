/** 
 * Generic Alternating Digital Tree For Search Operations
 * on the device
 */
#ifndef dADT_H
#define dADT_H

#include "pifus_types.h"
#include <stdlib.h>
class dADT
{
  private :
  
  int ndim;          /** < number of dimensions (usually 3 but can be more) */
  int nelem;         /** < number of elements */

 public :

  int *adtIntegers;  /** < integers that define the architecture of the tree */
  double *adtReals;  /** < real numbers that provide the extents of each box */
  double *adtExtents; /** < global extents */
  double *coord;      /** < bounding box of each element */

  
  dADT() {ndim=6;nelem=0;adtIntegers=NULL;adtReals=NULL;adtExtents=NULL;coord=NULL;};
  ~dADT() { clearData(); };
  void setHostTree(int nelem,int *adtIntegersInput,
                   double *adtRealsInput,double *adtExtentsInput,
                   double *coordInput);
  void clearData(void);
  //void buildADT(int d,int nelements,double *elementBbox);  
  //void searchADTRegion(int *elemid,double *xsearch,double *vec);
};
#endif
