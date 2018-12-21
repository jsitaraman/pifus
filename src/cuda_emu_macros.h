#include<string.h>
#define pushToDeviceDouble(xD,xH,size) { xD=(double *)malloc((size)); memcpy(xD,xH,(size)); }
#define pushToDeviceInt(xD,xH,size) { xD=(int *)malloc((size)); memcpy(xD,xH,(size)); }
#define pullFromDevice(xH,xD,size) { memcpy(xH,xD,(size)); }
#define allocateOnDeviceDouble(xD,size) { xD=(double *)malloc((size));}
#define allocateOnDeviceInt(xD,size) { xD=(int *)malloc((size));}
#define deallocateDevice(xD) {free(xD);xD=NULL;}
#define __device__
#define __global__
