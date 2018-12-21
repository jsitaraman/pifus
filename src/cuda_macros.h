#define pushToDeviceDouble(xD,xH,size) { cudaMalloc((void **) &xD,(size)); cudaMemcpy(xD,xH,(size),cudaMemcpyHostToDevice); }
#define pushToDeviceInt(xD,xH,size) { cudaMalloc((void **) &xD,(size)); cudaMemcpy(xD,xH,(size),cudaMemcpyHostToDevice); }
#define pullFromDevice(xH,xD,size) { cudaMemcpy(xH,xD,(size),cudaMemcpyDeviceToHost); }
#define allocateOnDeviceDouble(xD,size)  cudaMalloc((void **) &xD,(size));
#define allocateOnDeviceInt(xD,size)  cudaMalloc((void **) &xD,(size));
#define deallocateDevice(xD) {cudaFree(xD);xD=NULL;}
