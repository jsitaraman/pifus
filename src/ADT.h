/** 
 * Generic Alternating Digital Tree For Search Operations
 */
// forward declaration for instantiation
#ifndef ADT_H
#define ADT_H

#include "pifus_types.h"
#include <stdlib.h>

namespace PIFUS {

class ADT
{
  private :
  
  int ndim;          /** < number of dimensions (usually 3 but can be more) */
  int nelem;         /** < number of elements */
  int *adtIntegers;  /** < integers that define the architecture of the tree */
  double *adtReals;  /** < real numbers that provide the extents of each box */
  double *adtExtents; /** < global extents */
  double *coord;          /** < bounding box of each element */
  int *ndescendents;      /** < number of descendents per node */

 public :
  ADT() {ndim=6;nelem=0;adtIntegers=NULL;adtReals=NULL;adtExtents=NULL;coord=NULL;};
  ~ADT() 
    {
      if (adtIntegers) free(adtIntegers);
      if (adtReals) free(adtReals);
      if (adtExtents) free(adtExtents);
      adtIntegers=NULL;
      adtReals=NULL;
      adtExtents=NULL;
    };
  void clearData(void)
    {
      if (adtIntegers) free(adtIntegers);
      if (adtReals) free(adtReals);
      if (adtExtents) free(adtExtents);
      adtIntegers=NULL;
      adtReals=NULL;
      adtExtents=NULL;
    };      
  int *getadtIntegers(void) { return adtIntegers;}
  int getadtnelem(void) {return nelem;}
  double *getadtReals(void) {return adtReals;}
  double *getadtExtents(void) {return adtExtents;}
  double *getadtcoord(void) {return coord;}
  int *getdescendents(void) {return ndescendents;}
  void buildADT(int d,int nelements,double *elementBbox);  
  void searchADTRegion(int *elemid,double *xsearch,double *vec);
};

} // namespace PIFUS
#endif
