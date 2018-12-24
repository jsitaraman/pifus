/** \file PIFUS external function declarations
 *
 */


void buildADTrecursion(double *coord, double *adtReals, double *adtWork,
                       int *adtIntegers, int *elementsAvailable, int *adtCount,
                       int side, int parent, int level, int ndim, int nelem,
                       int nav);

extern "C" {

void interprbf_(double*, double*, double*, int*, int*, int*);

void interpls1_(double *, double *, double *, int *, int *);

void median_(int *, double *, int *, double *);

}
