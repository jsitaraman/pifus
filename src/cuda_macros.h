#define pushToDevice(xD,xH,size) { cudaMalloc((void **) &xD,(size)); cudaMemcpy(xD,xH,(size),cudaMemcpyHostToDevice); }
#define pullFromDevice(xH,xD,size) { cudaMemcpy(xH,xD,(size),cudaMemcpyDeviceToHost); }
