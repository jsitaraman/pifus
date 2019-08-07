#include <stdio.h>
# define TRACEI(x)  printf("#pifus:\t"#x" =%d\n",x);
# define TRACED(x)  printf("#pifus:\t"#x" =%.16e\n",x);
# define PIFUS_MIN(x,y)  (x) < (y) ? (x) : (y)
# define PIFUS_MAX(x,y)  (x) > (y) ? (x) : (y)
# define PIFUS_FREE(a1)  {free(a1);a1=NULL;}
# define PIFUS_BIGVALUE 1e15
# define PIFUS_TOL 1e-6
# define PIFUS_BASE 1
