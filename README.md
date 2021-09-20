# pifus
Parallel Interpolation For Unstructured Sets

Provides interpolation capabilities between two point cloud sets using
a centered nearest-neighbor search, i.e. constructs and octant around each target point
and tries to find a nearest-neighbor in each octant to create smoother interpolation using Radial
Basis Functions. Runs on both CPUs and GPUs

J.S 9/20/2021
