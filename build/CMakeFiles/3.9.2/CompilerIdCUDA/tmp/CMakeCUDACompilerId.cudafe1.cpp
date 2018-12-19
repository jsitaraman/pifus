# 1 "CMakeCUDACompilerId.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

# 1
# 56 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
#pragma GCC diagnostic push
# 59
#pragma GCC diagnostic ignored "-Wunused-function"
# 61 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_types.h"
#if 0
# 61
enum cudaRoundMode { 
# 63
cudaRoundNearest, 
# 64
cudaRoundZero, 
# 65
cudaRoundPosInf, 
# 66
cudaRoundMinInf
# 67
}; 
#endif
# 93 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 93
struct char1 { 
# 95
signed char x; 
# 96
}; 
#endif
# 98 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 98
struct uchar1 { 
# 100
unsigned char x; 
# 101
}; 
#endif
# 104 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 104
struct __attribute((aligned(2))) char2 { 
# 106
signed char x, y; 
# 107
}; 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 109
struct __attribute((aligned(2))) uchar2 { 
# 111
unsigned char x, y; 
# 112
}; 
#endif
# 114 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 114
struct char3 { 
# 116
signed char x, y, z; 
# 117
}; 
#endif
# 119 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 119
struct uchar3 { 
# 121
unsigned char x, y, z; 
# 122
}; 
#endif
# 124 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 124
struct __attribute((aligned(4))) char4 { 
# 126
signed char x, y, z, w; 
# 127
}; 
#endif
# 129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 129
struct __attribute((aligned(4))) uchar4 { 
# 131
unsigned char x, y, z, w; 
# 132
}; 
#endif
# 134 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 134
struct short1 { 
# 136
short x; 
# 137
}; 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 139
struct ushort1 { 
# 141
unsigned short x; 
# 142
}; 
#endif
# 144 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 144
struct __attribute((aligned(4))) short2 { 
# 146
short x, y; 
# 147
}; 
#endif
# 149 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 149
struct __attribute((aligned(4))) ushort2 { 
# 151
unsigned short x, y; 
# 152
}; 
#endif
# 154 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 154
struct short3 { 
# 156
short x, y, z; 
# 157
}; 
#endif
# 159 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 159
struct ushort3 { 
# 161
unsigned short x, y, z; 
# 162
}; 
#endif
# 164 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 164
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 165 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 165
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 167 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 167
struct int1 { 
# 169
int x; 
# 170
}; 
#endif
# 172 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 172
struct uint1 { 
# 174
unsigned x; 
# 175
}; 
#endif
# 177 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 177
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 178
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 180 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 180
struct int3 { 
# 182
int x, y, z; 
# 183
}; 
#endif
# 185 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 185
struct uint3 { 
# 187
unsigned x, y, z; 
# 188
}; 
#endif
# 190 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 190
struct __attribute((aligned(16))) int4 { 
# 192
int x, y, z, w; 
# 193
}; 
#endif
# 195 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 195
struct __attribute((aligned(16))) uint4 { 
# 197
unsigned x, y, z, w; 
# 198
}; 
#endif
# 200 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 200
struct long1 { 
# 202
long x; 
# 203
}; 
#endif
# 205 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 205
struct ulong1 { 
# 207
unsigned long x; 
# 208
}; 
#endif
# 215 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 215
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 217
long x, y; 
# 218
}; 
#endif
# 220 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 220
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 222
unsigned long x, y; 
# 223
}; 
#endif
# 227 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 227
struct long3 { 
# 229
long x, y, z; 
# 230
}; 
#endif
# 232 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 232
struct ulong3 { 
# 234
unsigned long x, y, z; 
# 235
}; 
#endif
# 237 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 237
struct __attribute((aligned(16))) long4 { 
# 239
long x, y, z, w; 
# 240
}; 
#endif
# 242 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 242
struct __attribute((aligned(16))) ulong4 { 
# 244
unsigned long x, y, z, w; 
# 245
}; 
#endif
# 247 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 247
struct float1 { 
# 249
float x; 
# 250
}; 
#endif
# 269 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 269
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 274 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 274
struct float3 { 
# 276
float x, y, z; 
# 277
}; 
#endif
# 279 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 279
struct __attribute((aligned(16))) float4 { 
# 281
float x, y, z, w; 
# 282
}; 
#endif
# 284 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 284
struct longlong1 { 
# 286
long long x; 
# 287
}; 
#endif
# 289 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 289
struct ulonglong1 { 
# 291
unsigned long long x; 
# 292
}; 
#endif
# 294 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 294
struct __attribute((aligned(16))) longlong2 { 
# 296
long long x, y; 
# 297
}; 
#endif
# 299 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 299
struct __attribute((aligned(16))) ulonglong2 { 
# 301
unsigned long long x, y; 
# 302
}; 
#endif
# 304 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 304
struct longlong3 { 
# 306
long long x, y, z; 
# 307
}; 
#endif
# 309 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 309
struct ulonglong3 { 
# 311
unsigned long long x, y, z; 
# 312
}; 
#endif
# 314 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 314
struct __attribute((aligned(16))) longlong4 { 
# 316
long long x, y, z, w; 
# 317
}; 
#endif
# 319 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 319
struct __attribute((aligned(16))) ulonglong4 { 
# 321
unsigned long long x, y, z, w; 
# 322
}; 
#endif
# 324 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 324
struct double1 { 
# 326
double x; 
# 327
}; 
#endif
# 329 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 329
struct __attribute((aligned(16))) double2 { 
# 331
double x, y; 
# 332
}; 
#endif
# 334 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 334
struct double3 { 
# 336
double x, y, z; 
# 337
}; 
#endif
# 339 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 339
struct __attribute((aligned(16))) double4 { 
# 341
double x, y, z, w; 
# 342
}; 
#endif
# 356 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char1 
# 356
char1; 
#endif
# 357 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar1 
# 357
uchar1; 
#endif
# 358 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char2 
# 358
char2; 
#endif
# 359 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar2 
# 359
uchar2; 
#endif
# 360 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char3 
# 360
char3; 
#endif
# 361 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar3 
# 361
uchar3; 
#endif
# 362 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef char4 
# 362
char4; 
#endif
# 363 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uchar4 
# 363
uchar4; 
#endif
# 364 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short1 
# 364
short1; 
#endif
# 365 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort1 
# 365
ushort1; 
#endif
# 366 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short2 
# 366
short2; 
#endif
# 367 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort2 
# 367
ushort2; 
#endif
# 368 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short3 
# 368
short3; 
#endif
# 369 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort3 
# 369
ushort3; 
#endif
# 370 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef short4 
# 370
short4; 
#endif
# 371 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ushort4 
# 371
ushort4; 
#endif
# 372 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int1 
# 372
int1; 
#endif
# 373 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint1 
# 373
uint1; 
#endif
# 374 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int2 
# 374
int2; 
#endif
# 375 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint2 
# 375
uint2; 
#endif
# 376 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int3 
# 376
int3; 
#endif
# 377 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint3 
# 377
uint3; 
#endif
# 378 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef int4 
# 378
int4; 
#endif
# 379 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef uint4 
# 379
uint4; 
#endif
# 380 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long1 
# 380
long1; 
#endif
# 381 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong1 
# 381
ulong1; 
#endif
# 382 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long2 
# 382
long2; 
#endif
# 383 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong2 
# 383
ulong2; 
#endif
# 384 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long3 
# 384
long3; 
#endif
# 385 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong3 
# 385
ulong3; 
#endif
# 386 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef long4 
# 386
long4; 
#endif
# 387 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulong4 
# 387
ulong4; 
#endif
# 388 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float1 
# 388
float1; 
#endif
# 389 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float2 
# 389
float2; 
#endif
# 390 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float3 
# 390
float3; 
#endif
# 391 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef float4 
# 391
float4; 
#endif
# 392 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong1 
# 392
longlong1; 
#endif
# 393 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong1 
# 393
ulonglong1; 
#endif
# 394 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong2 
# 394
longlong2; 
#endif
# 395 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong2 
# 395
ulonglong2; 
#endif
# 396 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong3 
# 396
longlong3; 
#endif
# 397 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong3 
# 397
ulonglong3; 
#endif
# 398 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef longlong4 
# 398
longlong4; 
#endif
# 399 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef ulonglong4 
# 399
ulonglong4; 
#endif
# 400 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double1 
# 400
double1; 
#endif
# 401 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double2 
# 401
double2; 
#endif
# 402 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double3 
# 402
double3; 
#endif
# 403 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef double4 
# 403
double4; 
#endif
# 411 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
# 411
struct dim3 { 
# 413
unsigned x, y, z; 
# 419
}; 
#endif
# 421 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_types.h"
#if 0
typedef dim3 
# 421
dim3; 
#endif
# 149 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/lib/gcc/powerpc64le-none-linux-gnu/5.4.0/include/stddef.h" 3
typedef long ptrdiff_t; 
# 216 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/lib/gcc/powerpc64le-none-linux-gnu/5.4.0/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 171 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 171
enum cudaError { 
# 178
cudaSuccess, 
# 184
cudaErrorMissingConfiguration, 
# 190
cudaErrorMemoryAllocation, 
# 196
cudaErrorInitializationError, 
# 206 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchFailure, 
# 215 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 226 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchTimeout, 
# 235 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 241
cudaErrorInvalidDeviceFunction, 
# 250 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorInvalidConfiguration, 
# 256
cudaErrorInvalidDevice, 
# 262
cudaErrorInvalidValue, 
# 268
cudaErrorInvalidPitchValue, 
# 274
cudaErrorInvalidSymbol, 
# 279
cudaErrorMapBufferObjectFailed, 
# 284
cudaErrorUnmapBufferObjectFailed, 
# 290
cudaErrorInvalidHostPointer, 
# 296
cudaErrorInvalidDevicePointer, 
# 302
cudaErrorInvalidTexture, 
# 308
cudaErrorInvalidTextureBinding, 
# 315
cudaErrorInvalidChannelDescriptor, 
# 321
cudaErrorInvalidMemcpyDirection, 
# 331 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorAddressOfConstant, 
# 340 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 349 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorTextureNotBound, 
# 358 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSynchronizationError, 
# 364
cudaErrorInvalidFilterSetting, 
# 370
cudaErrorInvalidNormSetting, 
# 378
cudaErrorMixedDeviceExecution, 
# 385
cudaErrorCudartUnloading, 
# 390
cudaErrorUnknown, 
# 398
cudaErrorNotYetImplemented, 
# 407 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 414
cudaErrorInvalidResourceHandle, 
# 422
cudaErrorNotReady, 
# 429
cudaErrorInsufficientDriver, 
# 442 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSetOnActiveProcess, 
# 448
cudaErrorInvalidSurface, 
# 454
cudaErrorNoDevice, 
# 460
cudaErrorECCUncorrectable, 
# 465
cudaErrorSharedObjectSymbolNotFound, 
# 470
cudaErrorSharedObjectInitFailed, 
# 476
cudaErrorUnsupportedLimit, 
# 482
cudaErrorDuplicateVariableName, 
# 488
cudaErrorDuplicateTextureName, 
# 494
cudaErrorDuplicateSurfaceName, 
# 504 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 509
cudaErrorInvalidKernelImage, 
# 517
cudaErrorNoKernelImageForDevice, 
# 530 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorIncompatibleDriverContext, 
# 537
cudaErrorPeerAccessAlreadyEnabled, 
# 544
cudaErrorPeerAccessNotEnabled, 
# 550
cudaErrorDeviceAlreadyInUse = 54, 
# 557
cudaErrorProfilerDisabled, 
# 565
cudaErrorProfilerNotInitialized, 
# 572
cudaErrorProfilerAlreadyStarted, 
# 579
cudaErrorProfilerAlreadyStopped, 
# 587
cudaErrorAssert, 
# 594
cudaErrorTooManyPeers, 
# 600
cudaErrorHostMemoryAlreadyRegistered, 
# 606
cudaErrorHostMemoryNotRegistered, 
# 611
cudaErrorOperatingSystem, 
# 617
cudaErrorPeerAccessUnsupported, 
# 624
cudaErrorLaunchMaxDepthExceeded, 
# 632
cudaErrorLaunchFileScopedTex, 
# 640
cudaErrorLaunchFileScopedSurf, 
# 655 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorSyncDepthExceeded, 
# 667 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorLaunchPendingCountExceeded, 
# 672
cudaErrorNotPermitted, 
# 678
cudaErrorNotSupported, 
# 687 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorHardwareStackError, 
# 695
cudaErrorIllegalInstruction, 
# 704 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorMisalignedAddress, 
# 715 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorInvalidAddressSpace, 
# 723
cudaErrorInvalidPc, 
# 731
cudaErrorIllegalAddress, 
# 737
cudaErrorInvalidPtx, 
# 742
cudaErrorInvalidGraphicsContext, 
# 748
cudaErrorNvlinkUncorrectable, 
# 755
cudaErrorJitCompilerNotFound, 
# 764 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
cudaErrorCooperativeLaunchTooLarge, 
# 769
cudaErrorStartupFailure = 127, 
# 777
cudaErrorApiFailureBase = 10000
# 778
}; 
#endif
# 783 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 783
enum cudaChannelFormatKind { 
# 785
cudaChannelFormatKindSigned, 
# 786
cudaChannelFormatKindUnsigned, 
# 787
cudaChannelFormatKindFloat, 
# 788
cudaChannelFormatKindNone
# 789
}; 
#endif
# 794 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 794
struct cudaChannelFormatDesc { 
# 796
int x; 
# 797
int y; 
# 798
int z; 
# 799
int w; 
# 800
cudaChannelFormatKind f; 
# 801
}; 
#endif
# 806 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 811
typedef const cudaArray *cudaArray_const_t; 
# 813
struct cudaArray; 
# 818
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 823
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 825
struct cudaMipmappedArray; 
# 830
#if 0
# 830
enum cudaMemoryType { 
# 832
cudaMemoryTypeHost = 1, 
# 833
cudaMemoryTypeDevice
# 834
}; 
#endif
# 839 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 839
enum cudaMemcpyKind { 
# 841
cudaMemcpyHostToHost, 
# 842
cudaMemcpyHostToDevice, 
# 843
cudaMemcpyDeviceToHost, 
# 844
cudaMemcpyDeviceToDevice, 
# 845
cudaMemcpyDefault
# 846
}; 
#endif
# 853 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 853
struct cudaPitchedPtr { 
# 855
void *ptr; 
# 856
size_t pitch; 
# 857
size_t xsize; 
# 858
size_t ysize; 
# 859
}; 
#endif
# 866 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 866
struct cudaExtent { 
# 868
size_t width; 
# 869
size_t height; 
# 870
size_t depth; 
# 871
}; 
#endif
# 878 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 878
struct cudaPos { 
# 880
size_t x; 
# 881
size_t y; 
# 882
size_t z; 
# 883
}; 
#endif
# 888 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 888
struct cudaMemcpy3DParms { 
# 890
cudaArray_t srcArray; 
# 891
cudaPos srcPos; 
# 892
cudaPitchedPtr srcPtr; 
# 894
cudaArray_t dstArray; 
# 895
cudaPos dstPos; 
# 896
cudaPitchedPtr dstPtr; 
# 898
cudaExtent extent; 
# 899
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 900
}; 
#endif
# 905 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 905
struct cudaMemcpy3DPeerParms { 
# 907
cudaArray_t srcArray; 
# 908
cudaPos srcPos; 
# 909
cudaPitchedPtr srcPtr; 
# 910
int srcDevice; 
# 912
cudaArray_t dstArray; 
# 913
cudaPos dstPos; 
# 914
cudaPitchedPtr dstPtr; 
# 915
int dstDevice; 
# 917
cudaExtent extent; 
# 918
}; 
#endif
# 923 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
struct cudaGraphicsResource; 
# 928
#if 0
# 928
enum cudaGraphicsRegisterFlags { 
# 930
cudaGraphicsRegisterFlagsNone, 
# 931
cudaGraphicsRegisterFlagsReadOnly, 
# 932
cudaGraphicsRegisterFlagsWriteDiscard, 
# 933
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 934
cudaGraphicsRegisterFlagsTextureGather = 8
# 935
}; 
#endif
# 940 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 940
enum cudaGraphicsMapFlags { 
# 942
cudaGraphicsMapFlagsNone, 
# 943
cudaGraphicsMapFlagsReadOnly, 
# 944
cudaGraphicsMapFlagsWriteDiscard
# 945
}; 
#endif
# 950 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 950
enum cudaGraphicsCubeFace { 
# 952
cudaGraphicsCubeFacePositiveX, 
# 953
cudaGraphicsCubeFaceNegativeX, 
# 954
cudaGraphicsCubeFacePositiveY, 
# 955
cudaGraphicsCubeFaceNegativeY, 
# 956
cudaGraphicsCubeFacePositiveZ, 
# 957
cudaGraphicsCubeFaceNegativeZ
# 958
}; 
#endif
# 963 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 963
enum cudaResourceType { 
# 965
cudaResourceTypeArray, 
# 966
cudaResourceTypeMipmappedArray, 
# 967
cudaResourceTypeLinear, 
# 968
cudaResourceTypePitch2D
# 969
}; 
#endif
# 974 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 974
enum cudaResourceViewFormat { 
# 976
cudaResViewFormatNone, 
# 977
cudaResViewFormatUnsignedChar1, 
# 978
cudaResViewFormatUnsignedChar2, 
# 979
cudaResViewFormatUnsignedChar4, 
# 980
cudaResViewFormatSignedChar1, 
# 981
cudaResViewFormatSignedChar2, 
# 982
cudaResViewFormatSignedChar4, 
# 983
cudaResViewFormatUnsignedShort1, 
# 984
cudaResViewFormatUnsignedShort2, 
# 985
cudaResViewFormatUnsignedShort4, 
# 986
cudaResViewFormatSignedShort1, 
# 987
cudaResViewFormatSignedShort2, 
# 988
cudaResViewFormatSignedShort4, 
# 989
cudaResViewFormatUnsignedInt1, 
# 990
cudaResViewFormatUnsignedInt2, 
# 991
cudaResViewFormatUnsignedInt4, 
# 992
cudaResViewFormatSignedInt1, 
# 993
cudaResViewFormatSignedInt2, 
# 994
cudaResViewFormatSignedInt4, 
# 995
cudaResViewFormatHalf1, 
# 996
cudaResViewFormatHalf2, 
# 997
cudaResViewFormatHalf4, 
# 998
cudaResViewFormatFloat1, 
# 999
cudaResViewFormatFloat2, 
# 1000
cudaResViewFormatFloat4, 
# 1001
cudaResViewFormatUnsignedBlockCompressed1, 
# 1002
cudaResViewFormatUnsignedBlockCompressed2, 
# 1003
cudaResViewFormatUnsignedBlockCompressed3, 
# 1004
cudaResViewFormatUnsignedBlockCompressed4, 
# 1005
cudaResViewFormatSignedBlockCompressed4, 
# 1006
cudaResViewFormatUnsignedBlockCompressed5, 
# 1007
cudaResViewFormatSignedBlockCompressed5, 
# 1008
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1009
cudaResViewFormatSignedBlockCompressed6H, 
# 1010
cudaResViewFormatUnsignedBlockCompressed7
# 1011
}; 
#endif
# 1016 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1016
struct cudaResourceDesc { 
# 1017
cudaResourceType resType; 
# 1019
union { 
# 1020
struct { 
# 1021
cudaArray_t array; 
# 1022
} array; 
# 1023
struct { 
# 1024
cudaMipmappedArray_t mipmap; 
# 1025
} mipmap; 
# 1026
struct { 
# 1027
void *devPtr; 
# 1028
cudaChannelFormatDesc desc; 
# 1029
size_t sizeInBytes; 
# 1030
} linear; 
# 1031
struct { 
# 1032
void *devPtr; 
# 1033
cudaChannelFormatDesc desc; 
# 1034
size_t width; 
# 1035
size_t height; 
# 1036
size_t pitchInBytes; 
# 1037
} pitch2D; 
# 1038
} res; 
# 1039
}; 
#endif
# 1044 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1044
struct cudaResourceViewDesc { 
# 1046
cudaResourceViewFormat format; 
# 1047
size_t width; 
# 1048
size_t height; 
# 1049
size_t depth; 
# 1050
unsigned firstMipmapLevel; 
# 1051
unsigned lastMipmapLevel; 
# 1052
unsigned firstLayer; 
# 1053
unsigned lastLayer; 
# 1054
}; 
#endif
# 1059 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1059
struct cudaPointerAttributes { 
# 1065
cudaMemoryType memoryType; 
# 1076 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
int device; 
# 1082
void *devicePointer; 
# 1088
void *hostPointer; 
# 1093
int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1094
}; 
#endif
# 1099 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1099
struct cudaFuncAttributes { 
# 1106
size_t sharedSizeBytes; 
# 1112
size_t constSizeBytes; 
# 1117
size_t localSizeBytes; 
# 1124
int maxThreadsPerBlock; 
# 1129
int numRegs; 
# 1136
int ptxVersion; 
# 1143
int binaryVersion; 
# 1149
int cacheModeCA; 
# 1156
int maxDynamicSharedSizeBytes; 
# 1165 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
int preferredShmemCarveout; 
# 1166
}; 
#endif
# 1171 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1171
enum cudaFuncAttribute { 
# 1173
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1174
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1175
cudaFuncAttributeMax
# 1176
}; 
#endif
# 1181 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1181
enum cudaFuncCache { 
# 1183
cudaFuncCachePreferNone, 
# 1184
cudaFuncCachePreferShared, 
# 1185
cudaFuncCachePreferL1, 
# 1186
cudaFuncCachePreferEqual
# 1187
}; 
#endif
# 1193 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1193
enum cudaSharedMemConfig { 
# 1195
cudaSharedMemBankSizeDefault, 
# 1196
cudaSharedMemBankSizeFourByte, 
# 1197
cudaSharedMemBankSizeEightByte
# 1198
}; 
#endif
# 1203 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1203
enum cudaSharedCarveout { 
# 1204
cudaSharedmemCarveoutDefault = (-1), 
# 1205
cudaSharedmemCarveoutMaxShared = 100, 
# 1206
cudaSharedmemCarveoutMaxL1 = 0
# 1207
}; 
#endif
# 1212 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1212
enum cudaComputeMode { 
# 1214
cudaComputeModeDefault, 
# 1215
cudaComputeModeExclusive, 
# 1216
cudaComputeModeProhibited, 
# 1217
cudaComputeModeExclusiveProcess
# 1218
}; 
#endif
# 1223 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1223
enum cudaLimit { 
# 1225
cudaLimitStackSize, 
# 1226
cudaLimitPrintfFifoSize, 
# 1227
cudaLimitMallocHeapSize, 
# 1228
cudaLimitDevRuntimeSyncDepth, 
# 1229
cudaLimitDevRuntimePendingLaunchCount
# 1230
}; 
#endif
# 1235 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1235
enum cudaMemoryAdvise { 
# 1237
cudaMemAdviseSetReadMostly = 1, 
# 1238
cudaMemAdviseUnsetReadMostly, 
# 1239
cudaMemAdviseSetPreferredLocation, 
# 1240
cudaMemAdviseUnsetPreferredLocation, 
# 1241
cudaMemAdviseSetAccessedBy, 
# 1242
cudaMemAdviseUnsetAccessedBy
# 1243
}; 
#endif
# 1248 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1248
enum cudaMemRangeAttribute { 
# 1250
cudaMemRangeAttributeReadMostly = 1, 
# 1251
cudaMemRangeAttributePreferredLocation, 
# 1252
cudaMemRangeAttributeAccessedBy, 
# 1253
cudaMemRangeAttributeLastPrefetchLocation
# 1254
}; 
#endif
# 1259 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1259
enum cudaOutputMode { 
# 1261
cudaKeyValuePair, 
# 1262
cudaCSV
# 1263
}; 
#endif
# 1268 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1268
enum cudaDeviceAttr { 
# 1270
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1271
cudaDevAttrMaxBlockDimX, 
# 1272
cudaDevAttrMaxBlockDimY, 
# 1273
cudaDevAttrMaxBlockDimZ, 
# 1274
cudaDevAttrMaxGridDimX, 
# 1275
cudaDevAttrMaxGridDimY, 
# 1276
cudaDevAttrMaxGridDimZ, 
# 1277
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1278
cudaDevAttrTotalConstantMemory, 
# 1279
cudaDevAttrWarpSize, 
# 1280
cudaDevAttrMaxPitch, 
# 1281
cudaDevAttrMaxRegistersPerBlock, 
# 1282
cudaDevAttrClockRate, 
# 1283
cudaDevAttrTextureAlignment, 
# 1284
cudaDevAttrGpuOverlap, 
# 1285
cudaDevAttrMultiProcessorCount, 
# 1286
cudaDevAttrKernelExecTimeout, 
# 1287
cudaDevAttrIntegrated, 
# 1288
cudaDevAttrCanMapHostMemory, 
# 1289
cudaDevAttrComputeMode, 
# 1290
cudaDevAttrMaxTexture1DWidth, 
# 1291
cudaDevAttrMaxTexture2DWidth, 
# 1292
cudaDevAttrMaxTexture2DHeight, 
# 1293
cudaDevAttrMaxTexture3DWidth, 
# 1294
cudaDevAttrMaxTexture3DHeight, 
# 1295
cudaDevAttrMaxTexture3DDepth, 
# 1296
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1297
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1298
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1299
cudaDevAttrSurfaceAlignment, 
# 1300
cudaDevAttrConcurrentKernels, 
# 1301
cudaDevAttrEccEnabled, 
# 1302
cudaDevAttrPciBusId, 
# 1303
cudaDevAttrPciDeviceId, 
# 1304
cudaDevAttrTccDriver, 
# 1305
cudaDevAttrMemoryClockRate, 
# 1306
cudaDevAttrGlobalMemoryBusWidth, 
# 1307
cudaDevAttrL2CacheSize, 
# 1308
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1309
cudaDevAttrAsyncEngineCount, 
# 1310
cudaDevAttrUnifiedAddressing, 
# 1311
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1312
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1313
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1314
cudaDevAttrMaxTexture2DGatherHeight, 
# 1315
cudaDevAttrMaxTexture3DWidthAlt, 
# 1316
cudaDevAttrMaxTexture3DHeightAlt, 
# 1317
cudaDevAttrMaxTexture3DDepthAlt, 
# 1318
cudaDevAttrPciDomainId, 
# 1319
cudaDevAttrTexturePitchAlignment, 
# 1320
cudaDevAttrMaxTextureCubemapWidth, 
# 1321
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1322
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1323
cudaDevAttrMaxSurface1DWidth, 
# 1324
cudaDevAttrMaxSurface2DWidth, 
# 1325
cudaDevAttrMaxSurface2DHeight, 
# 1326
cudaDevAttrMaxSurface3DWidth, 
# 1327
cudaDevAttrMaxSurface3DHeight, 
# 1328
cudaDevAttrMaxSurface3DDepth, 
# 1329
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1330
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1331
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1332
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1333
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1334
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1335
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1336
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1337
cudaDevAttrMaxTexture1DLinearWidth, 
# 1338
cudaDevAttrMaxTexture2DLinearWidth, 
# 1339
cudaDevAttrMaxTexture2DLinearHeight, 
# 1340
cudaDevAttrMaxTexture2DLinearPitch, 
# 1341
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1342
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1343
cudaDevAttrComputeCapabilityMajor, 
# 1344
cudaDevAttrComputeCapabilityMinor, 
# 1345
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1346
cudaDevAttrStreamPrioritiesSupported, 
# 1347
cudaDevAttrGlobalL1CacheSupported, 
# 1348
cudaDevAttrLocalL1CacheSupported, 
# 1349
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1350
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1351
cudaDevAttrManagedMemory, 
# 1352
cudaDevAttrIsMultiGpuBoard, 
# 1353
cudaDevAttrMultiGpuBoardGroupID, 
# 1354
cudaDevAttrHostNativeAtomicSupported, 
# 1355
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1356
cudaDevAttrPageableMemoryAccess, 
# 1357
cudaDevAttrConcurrentManagedAccess, 
# 1358
cudaDevAttrComputePreemptionSupported, 
# 1359
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1360
cudaDevAttrReserved92, 
# 1361
cudaDevAttrReserved93, 
# 1362
cudaDevAttrReserved94, 
# 1363
cudaDevAttrCooperativeLaunch, 
# 1364
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1365
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1366
cudaDevAttrCanFlushRemoteWrites, 
# 1367
cudaDevAttrHostRegisterSupported, 
# 1368
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1369
cudaDevAttrDirectManagedMemAccessFromHost
# 1370
}; 
#endif
# 1376 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1376
enum cudaDeviceP2PAttr { 
# 1377
cudaDevP2PAttrPerformanceRank = 1, 
# 1378
cudaDevP2PAttrAccessSupported, 
# 1379
cudaDevP2PAttrNativeAtomicSupported, 
# 1380
cudaDevP2PAttrCudaArrayAccessSupported
# 1381
}; 
#endif
# 1385 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1385
struct cudaDeviceProp { 
# 1387
char name[256]; 
# 1388
size_t totalGlobalMem; 
# 1389
size_t sharedMemPerBlock; 
# 1390
int regsPerBlock; 
# 1391
int warpSize; 
# 1392
size_t memPitch; 
# 1393
int maxThreadsPerBlock; 
# 1394
int maxThreadsDim[3]; 
# 1395
int maxGridSize[3]; 
# 1396
int clockRate; 
# 1397
size_t totalConstMem; 
# 1398
int major; 
# 1399
int minor; 
# 1400
size_t textureAlignment; 
# 1401
size_t texturePitchAlignment; 
# 1402
int deviceOverlap; 
# 1403
int multiProcessorCount; 
# 1404
int kernelExecTimeoutEnabled; 
# 1405
int integrated; 
# 1406
int canMapHostMemory; 
# 1407
int computeMode; 
# 1408
int maxTexture1D; 
# 1409
int maxTexture1DMipmap; 
# 1410
int maxTexture1DLinear; 
# 1411
int maxTexture2D[2]; 
# 1412
int maxTexture2DMipmap[2]; 
# 1413
int maxTexture2DLinear[3]; 
# 1414
int maxTexture2DGather[2]; 
# 1415
int maxTexture3D[3]; 
# 1416
int maxTexture3DAlt[3]; 
# 1417
int maxTextureCubemap; 
# 1418
int maxTexture1DLayered[2]; 
# 1419
int maxTexture2DLayered[3]; 
# 1420
int maxTextureCubemapLayered[2]; 
# 1421
int maxSurface1D; 
# 1422
int maxSurface2D[2]; 
# 1423
int maxSurface3D[3]; 
# 1424
int maxSurface1DLayered[2]; 
# 1425
int maxSurface2DLayered[3]; 
# 1426
int maxSurfaceCubemap; 
# 1427
int maxSurfaceCubemapLayered[2]; 
# 1428
size_t surfaceAlignment; 
# 1429
int concurrentKernels; 
# 1430
int ECCEnabled; 
# 1431
int pciBusID; 
# 1432
int pciDeviceID; 
# 1433
int pciDomainID; 
# 1434
int tccDriver; 
# 1435
int asyncEngineCount; 
# 1436
int unifiedAddressing; 
# 1437
int memoryClockRate; 
# 1438
int memoryBusWidth; 
# 1439
int l2CacheSize; 
# 1440
int maxThreadsPerMultiProcessor; 
# 1441
int streamPrioritiesSupported; 
# 1442
int globalL1CacheSupported; 
# 1443
int localL1CacheSupported; 
# 1444
size_t sharedMemPerMultiprocessor; 
# 1445
int regsPerMultiprocessor; 
# 1446
int managedMemory; 
# 1447
int isMultiGpuBoard; 
# 1448
int multiGpuBoardGroupID; 
# 1449
int hostNativeAtomicSupported; 
# 1450
int singleToDoublePrecisionPerfRatio; 
# 1451
int pageableMemoryAccess; 
# 1452
int concurrentManagedAccess; 
# 1453
int computePreemptionSupported; 
# 1454
int canUseHostPointerForRegisteredMem; 
# 1455
int cooperativeLaunch; 
# 1456
int cooperativeMultiDeviceLaunch; 
# 1457
size_t sharedMemPerBlockOptin; 
# 1458
int pageableMemoryAccessUsesHostPageTables; 
# 1459
int directManagedMemAccessFromHost; 
# 1460
}; 
#endif
# 1550 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 1547
struct cudaIpcEventHandle_st { 
# 1549
char reserved[64]; 
# 1550
} cudaIpcEventHandle_t; 
#endif
# 1558 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef 
# 1555
struct cudaIpcMemHandle_st { 
# 1557
char reserved[64]; 
# 1558
} cudaIpcMemHandle_t; 
#endif
# 1569 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaError 
# 1569
cudaError_t; 
#endif
# 1574 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 1574
cudaStream_t; 
#endif
# 1579 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 1579
cudaEvent_t; 
#endif
# 1584 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 1584
cudaGraphicsResource_t; 
#endif
# 1589 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 1589
cudaUUID_t; 
#endif
# 1594 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
typedef cudaOutputMode 
# 1594
cudaOutputMode_t; 
#endif
# 1599 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1599
enum cudaCGScope { 
# 1600
cudaCGScopeInvalid, 
# 1601
cudaCGScopeGrid, 
# 1602
cudaCGScopeMultiGrid
# 1603
}; 
#endif
# 1608 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_types.h"
#if 0
# 1608
struct cudaLaunchParams { 
# 1610
void *func; 
# 1611
dim3 gridDim; 
# 1612
dim3 blockDim; 
# 1613
void **args; 
# 1614
size_t sharedMem; 
# 1615
cudaStream_t stream; 
# 1616
}; 
#endif
# 84 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_types.h"
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 155
int __cudaReserved[15]; 
# 156
}; 
#endif
# 161 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
# 161
struct cudaTextureDesc { 
# 166
cudaTextureAddressMode addressMode[3]; 
# 170
cudaTextureFilterMode filterMode; 
# 174
cudaTextureReadMode readMode; 
# 178
int sRGB; 
# 182
float borderColor[4]; 
# 186
int normalizedCoords; 
# 190
unsigned maxAnisotropy; 
# 194
cudaTextureFilterMode mipmapFilterMode; 
# 198
float mipmapLevelBias; 
# 202
float minMipmapLevelClamp; 
# 206
float maxMipmapLevelClamp; 
# 207
}; 
#endif
# 212 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_types.h"
#if 0
typedef unsigned long long 
# 212
cudaTextureObject_t; 
#endif
# 70 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/library_types.h"
typedef 
# 54
enum cudaDataType_t { 
# 56
CUDA_R_16F = 2, 
# 57
CUDA_C_16F = 6, 
# 58
CUDA_R_32F = 0, 
# 59
CUDA_C_32F = 4, 
# 60
CUDA_R_64F = 1, 
# 61
CUDA_C_64F = 5, 
# 62
CUDA_R_8I = 3, 
# 63
CUDA_C_8I = 7, 
# 64
CUDA_R_8U, 
# 65
CUDA_C_8U, 
# 66
CUDA_R_32I, 
# 67
CUDA_C_32I, 
# 68
CUDA_R_32U, 
# 69
CUDA_C_32U
# 70
} cudaDataType; 
# 78
typedef 
# 73
enum libraryPropertyType_t { 
# 75
MAJOR_VERSION, 
# 76
MINOR_VERSION, 
# 77
PATCH_LEVEL
# 78
} libraryPropertyType; 
# 121 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
extern "C" {
# 123
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 124
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 125
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 126
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 127
extern cudaError_t cudaDeviceSynchronize(); 
# 128
extern cudaError_t cudaGetLastError(); 
# 129
extern cudaError_t cudaPeekAtLastError(); 
# 130
extern const char *cudaGetErrorString(cudaError_t error); 
# 131
extern const char *cudaGetErrorName(cudaError_t error); 
# 132
extern cudaError_t cudaGetDeviceCount(int * count); 
# 133
extern cudaError_t cudaGetDevice(int * device); 
# 134
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 135
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 136
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 137
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 138
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 139
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 140
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 141
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 142
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 143
extern cudaError_t cudaFree(void * devPtr); 
# 144
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 145
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 146
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 147
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 148
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 149
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 150
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 151
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 152
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 153
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 154
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 155
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 156
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 157
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 206 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 207
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 208
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 226 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 227
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 230
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 231
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 233
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 234
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 235
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 236
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 237
}
# 239
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 240
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 241
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 242
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 218 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern "C" {
# 251 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceReset(); 
# 270 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSynchronize(); 
# 347 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 378 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 410 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 446 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 489 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 519 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 562 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 587 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 615 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 660 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 698 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 739 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 792 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 825 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 865 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExit(); 
# 889 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(); 
# 936 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 967 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1002 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1048 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1104 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(); 
# 1147 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPeekAtLastError(); 
# 1163 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorName(cudaError_t error); 
# 1179 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t error); 
# 1210 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1476 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1663 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1701 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 1720 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 1755 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int device); 
# 1774 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int * device); 
# 1803 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 1866 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 1909 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 1947 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 1977 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2021 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2046 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2069 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2098 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2122 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 2136 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2195 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2240 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2321 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2358 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 2394 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 2432 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 2462 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 2491 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 2517 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 2559 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 2622 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 2677 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 2774 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 2823 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 2878 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 2913 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 2952 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 2976 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 3000 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDoubleForHost(double * d); 
# 3055 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 3099 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 3149 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, cudaStream_t stream = 0); 
# 3178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetupArgument(const void * arg, size_t size, size_t offset); 
# 3219 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunch(const void * func); 
# 3338 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 3366 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 3397 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 3438 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 3482 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 3510 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void * devPtr); 
# 3532 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void * ptr); 
# 3554 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 3576 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 3640 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 3722 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 3743 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostUnregister(void * ptr); 
# 3786 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 3806 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 3843 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 3980 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 4117 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 4144 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 4247 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 4276 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 4392 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 4416 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 4437 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 4461 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 4502 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 4535 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 4574 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 4612 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 4651 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4697 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4744 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4791 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 4836 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4877 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 4918 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 4972 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5005 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 5052 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5098 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5158 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5213 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5267 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5316 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5365 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5392 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 5424 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 5466 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 5500 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 5539 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 5588 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 5614 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 5639 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 5707 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 5821 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 5878 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 5915 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 6069 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 6108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 6148 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 6168 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 6229 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 6262 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 6299 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 6332 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 6362 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 6398 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 6425 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 6465 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 6501 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 6552 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 6607 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 6641 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6677 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 6699 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 6724 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 6750 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 6791 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6812 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 7040 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 7057 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 7075 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 7093 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 7112 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 7153 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 7170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 7187 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 7216 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 7235 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 7240
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 7477 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime_api.h"
}
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 108
{ 
# 109
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 124
} 
# 126
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 127
{ 
# 128
int e = (((int)sizeof(unsigned short)) * 8); 
# 130
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 131
} 
# 133
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 134
{ 
# 135
int e = (((int)sizeof(unsigned short)) * 8); 
# 137
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 138
} 
# 140
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 141
{ 
# 142
int e = (((int)sizeof(char)) * 8); 
# 145
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 194
{ 
# 195
int e = (((int)sizeof(signed char)) * 8); 
# 197
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned char)) * 8); 
# 204
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 250
{ 
# 251
int e = (((int)sizeof(short)) * 8); 
# 253
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned short)) * 8); 
# 260
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 303
} 
# 305
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 306
{ 
# 307
int e = (((int)sizeof(int)) * 8); 
# 309
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 310
} 
# 312
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 313
{ 
# 314
int e = (((int)sizeof(unsigned)) * 8); 
# 316
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 317
} 
# 379 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 391
} 
# 393
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 394
{ 
# 395
int e = (((int)sizeof(float)) * 8); 
# 397
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 398
} 
# 400
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 401
{ 
# 402
int e = (((int)sizeof(float)) * 8); 
# 404
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 405
} 
# 79 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 75 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_functions.h"
static inline char1 make_char1(signed char x); 
# 77
static inline uchar1 make_uchar1(unsigned char x); 
# 79
static inline char2 make_char2(signed char x, signed char y); 
# 81
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 83
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 85
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 87
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 89
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 91
static inline short1 make_short1(short x); 
# 93
static inline ushort1 make_ushort1(unsigned short x); 
# 95
static inline short2 make_short2(short x, short y); 
# 97
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 99
static inline short3 make_short3(short x, short y, short z); 
# 101
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 103
static inline short4 make_short4(short x, short y, short z, short w); 
# 105
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 107
static inline int1 make_int1(int x); 
# 109
static inline uint1 make_uint1(unsigned x); 
# 111
static inline int2 make_int2(int x, int y); 
# 113
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 115
static inline int3 make_int3(int x, int y, int z); 
# 117
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 119
static inline int4 make_int4(int x, int y, int z, int w); 
# 121
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 123
static inline long1 make_long1(long x); 
# 125
static inline ulong1 make_ulong1(unsigned long x); 
# 127
static inline long2 make_long2(long x, long y); 
# 129
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 131
static inline long3 make_long3(long x, long y, long z); 
# 133
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 135
static inline long4 make_long4(long x, long y, long z, long w); 
# 137
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 139
static inline float1 make_float1(float x); 
# 141
static inline float2 make_float2(float x, float y); 
# 143
static inline float3 make_float3(float x, float y, float z); 
# 145
static inline float4 make_float4(float x, float y, float z, float w); 
# 147
static inline longlong1 make_longlong1(long long x); 
# 149
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 151
static inline longlong2 make_longlong2(long long x, long long y); 
# 153
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 155
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 157
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 159
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 161
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 163
static inline double1 make_double1(double x); 
# 165
static inline double2 make_double2(double x, double y); 
# 167
static inline double3 make_double3(double x, double y, double z); 
# 169
static inline double4 make_double4(double x, double y, double z, double w); 
# 75 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 76
{ 
# 77
char1 t; (t.x) = x; return t; 
# 78
} 
# 80
static inline uchar1 make_uchar1(unsigned char x) 
# 81
{ 
# 82
uchar1 t; (t.x) = x; return t; 
# 83
} 
# 85
static inline char2 make_char2(signed char x, signed char y) 
# 86
{ 
# 87
char2 t; (t.x) = x; (t.y) = y; return t; 
# 88
} 
# 90
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 91
{ 
# 92
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 93
} 
# 95
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 96
{ 
# 97
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 98
} 
# 100
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 101
{ 
# 102
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 103
} 
# 105
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 106
{ 
# 107
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 108
} 
# 110
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 111
{ 
# 112
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 113
} 
# 115
static inline short1 make_short1(short x) 
# 116
{ 
# 117
short1 t; (t.x) = x; return t; 
# 118
} 
# 120
static inline ushort1 make_ushort1(unsigned short x) 
# 121
{ 
# 122
ushort1 t; (t.x) = x; return t; 
# 123
} 
# 125
static inline short2 make_short2(short x, short y) 
# 126
{ 
# 127
short2 t; (t.x) = x; (t.y) = y; return t; 
# 128
} 
# 130
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 131
{ 
# 132
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 133
} 
# 135
static inline short3 make_short3(short x, short y, short z) 
# 136
{ 
# 137
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 138
} 
# 140
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 141
{ 
# 142
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 143
} 
# 145
static inline short4 make_short4(short x, short y, short z, short w) 
# 146
{ 
# 147
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 148
} 
# 150
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 151
{ 
# 152
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 153
} 
# 155
static inline int1 make_int1(int x) 
# 156
{ 
# 157
int1 t; (t.x) = x; return t; 
# 158
} 
# 160
static inline uint1 make_uint1(unsigned x) 
# 161
{ 
# 162
uint1 t; (t.x) = x; return t; 
# 163
} 
# 165
static inline int2 make_int2(int x, int y) 
# 166
{ 
# 167
int2 t; (t.x) = x; (t.y) = y; return t; 
# 168
} 
# 170
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 171
{ 
# 172
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 173
} 
# 175
static inline int3 make_int3(int x, int y, int z) 
# 176
{ 
# 177
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 178
} 
# 180
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 181
{ 
# 182
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 183
} 
# 185
static inline int4 make_int4(int x, int y, int z, int w) 
# 186
{ 
# 187
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 188
} 
# 190
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 191
{ 
# 192
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 193
} 
# 195
static inline long1 make_long1(long x) 
# 196
{ 
# 197
long1 t; (t.x) = x; return t; 
# 198
} 
# 200
static inline ulong1 make_ulong1(unsigned long x) 
# 201
{ 
# 202
ulong1 t; (t.x) = x; return t; 
# 203
} 
# 205
static inline long2 make_long2(long x, long y) 
# 206
{ 
# 207
long2 t; (t.x) = x; (t.y) = y; return t; 
# 208
} 
# 210
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 211
{ 
# 212
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 213
} 
# 215
static inline long3 make_long3(long x, long y, long z) 
# 216
{ 
# 217
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 218
} 
# 220
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 221
{ 
# 222
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 223
} 
# 225
static inline long4 make_long4(long x, long y, long z, long w) 
# 226
{ 
# 227
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 228
} 
# 230
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 231
{ 
# 232
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 233
} 
# 235
static inline float1 make_float1(float x) 
# 236
{ 
# 237
float1 t; (t.x) = x; return t; 
# 238
} 
# 240
static inline float2 make_float2(float x, float y) 
# 241
{ 
# 242
float2 t; (t.x) = x; (t.y) = y; return t; 
# 243
} 
# 245
static inline float3 make_float3(float x, float y, float z) 
# 246
{ 
# 247
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 248
} 
# 250
static inline float4 make_float4(float x, float y, float z, float w) 
# 251
{ 
# 252
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 253
} 
# 255
static inline longlong1 make_longlong1(long long x) 
# 256
{ 
# 257
longlong1 t; (t.x) = x; return t; 
# 258
} 
# 260
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 261
{ 
# 262
ulonglong1 t; (t.x) = x; return t; 
# 263
} 
# 265
static inline longlong2 make_longlong2(long long x, long long y) 
# 266
{ 
# 267
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 268
} 
# 270
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 271
{ 
# 272
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 273
} 
# 275
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 276
{ 
# 277
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 278
} 
# 280
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 281
{ 
# 282
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 283
} 
# 285
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 286
{ 
# 287
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 288
} 
# 290
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 291
{ 
# 292
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 293
} 
# 295
static inline double1 make_double1(double x) 
# 296
{ 
# 297
double1 t; (t.x) = x; return t; 
# 298
} 
# 300
static inline double2 make_double2(double x, double y) 
# 301
{ 
# 302
double2 t; (t.x) = x; (t.y) = y; return t; 
# 303
} 
# 305
static inline double3 make_double3(double x, double y, double z) 
# 306
{ 
# 307
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 308
} 
# 310
static inline double4 make_double4(double x, double y, double z, double w) 
# 311
{ 
# 312
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 313
} 
# 27 "/usr/include/string.h" 3
extern "C" {
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90 "/usr/include/string.h" 3
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 39 "/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 162 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 172
extern char *strdup(const char * __s) throw()
# 173
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 180
extern char *strndup(const char * __string, size_t __n) throw()
# 181
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 210 "/usr/include/string.h" 3
extern "C++" {
# 212
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 213
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 214
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 215
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 230 "/usr/include/string.h" 3
}
# 237
extern "C++" {
# 239
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 240
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 241
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 242
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 257 "/usr/include/string.h" 3
}
# 268
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 269
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 270
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 271
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 281
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 282
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 285
extern size_t strspn(const char * __s, const char * __accept) throw()
# 286
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 289
extern "C++" {
# 291
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 292
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 293
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 294
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 309 "/usr/include/string.h" 3
}
# 316
extern "C++" {
# 318
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 319
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 320
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 321
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 336 "/usr/include/string.h" 3
}
# 344
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 345
 __attribute((__nonnull__(2))); 
# 350
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 353
 __attribute((__nonnull__(2, 3))); 
# 355
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 357
 __attribute((__nonnull__(2, 3))); 
# 363
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 364
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 365
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 367
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 378 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 380
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 384
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 386
 __attribute((__nonnull__(1, 2))); 
# 387
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 389
 __attribute((__nonnull__(1, 2))); 
# 395
extern size_t strlen(const char * __s) throw()
# 396
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 402
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 403
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 409
extern char *strerror(int __errnum) throw(); 
# 434 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 435
 __attribute((__nonnull__(2))); 
# 441
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 447
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 451
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 455
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 458
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 459
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 463
extern "C++" {
# 465
extern char *index(char * __s, int __c) throw() __asm__("index")
# 466
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 467
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 468
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 483 "/usr/include/string.h" 3
}
# 491
extern "C++" {
# 493
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 494
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 495
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 496
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 511 "/usr/include/string.h" 3
}
# 519
extern int ffs(int __i) throw() __attribute((const)); 
# 524
extern int ffsl(long __l) throw() __attribute((const)); 
# 526
__extension__ extern int ffsll(long long __ll) throw()
# 527
 __attribute((const)); 
# 532
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 533
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 536
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 537
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 543
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 545
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 547
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 549
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 555
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 557
 __attribute((__nonnull__(1, 2))); 
# 562
extern char *strsignal(int __sig) throw(); 
# 565
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 566
 __attribute((__nonnull__(1, 2))); 
# 567
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 568
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 575
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 577
 __attribute((__nonnull__(1, 2))); 
# 582
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 583
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 586
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 589
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 597
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 598
 __attribute((__nonnull__(1))); 
# 599
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 600
 __attribute((__nonnull__(1))); 
# 642 "/usr/include/string.h" 3
}
# 29 "/usr/include/time.h" 3
extern "C" {
# 30 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 133 "/usr/include/bits/types.h" 3
typedef unsigned long __dev_t; 
# 134
typedef unsigned __uid_t; 
# 135
typedef unsigned __gid_t; 
# 136
typedef unsigned long __ino_t; 
# 137
typedef unsigned long __ino64_t; 
# 138
typedef unsigned __mode_t; 
# 139
typedef unsigned long __nlink_t; 
# 140
typedef long __off_t; 
# 141
typedef long __off64_t; 
# 142
typedef int __pid_t; 
# 143
typedef struct { int __val[2]; } __fsid_t; 
# 144
typedef long __clock_t; 
# 145
typedef unsigned long __rlim_t; 
# 146
typedef unsigned long __rlim64_t; 
# 147
typedef unsigned __id_t; 
# 148
typedef long __time_t; 
# 149
typedef unsigned __useconds_t; 
# 150
typedef long __suseconds_t; 
# 152
typedef int __daddr_t; 
# 153
typedef int __key_t; 
# 156
typedef int __clockid_t; 
# 159
typedef void *__timer_t; 
# 162
typedef long __blksize_t; 
# 167
typedef long __blkcnt_t; 
# 168
typedef long __blkcnt64_t; 
# 171
typedef unsigned long __fsblkcnt_t; 
# 172
typedef unsigned long __fsblkcnt64_t; 
# 175
typedef unsigned long __fsfilcnt_t; 
# 176
typedef unsigned long __fsfilcnt64_t; 
# 179
typedef long __fsword_t; 
# 181
typedef long __ssize_t; 
# 184
typedef long __syscall_slong_t; 
# 186
typedef unsigned long __syscall_ulong_t; 
# 190
typedef __off64_t __loff_t; 
# 191
typedef __quad_t *__qaddr_t; 
# 192
typedef char *__caddr_t; 
# 195
typedef long __intptr_t; 
# 198
typedef unsigned __socklen_t; 
# 30 "/usr/include/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 25 "/usr/include/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
}; 
# 90 "/usr/include/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75 "/usr/include/time.h" 3
typedef __time_t time_t; 
# 91 "/usr/include/time.h" 3
typedef __clockid_t clockid_t; 
# 103 "/usr/include/time.h" 3
typedef __timer_t timer_t; 
# 120 "/usr/include/time.h" 3
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 133
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 174
typedef __pid_t pid_t; 
# 189 "/usr/include/time.h" 3
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403 "/usr/include/time.h" 3
extern int getdate_err; 
# 412 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 426 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 70 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern "C" {
# 73
extern clock_t clock() throw(); 
# 78 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern void *memset(void *, int, size_t) throw(); 
# 79 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
extern void *memcpy(void *, const void *, size_t) throw(); 
# 81 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/common_functions.h"
}
# 98 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern "C" {
# 182 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int abs(int) throw(); 
# 183 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long labs(long) throw(); 
# 184 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llabs(long long) throw(); 
# 234 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fabs(double x) throw(); 
# 275 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fabsf(float x) throw(); 
# 279 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline int min(int, int); 
# 281
extern inline unsigned umin(unsigned, unsigned); 
# 282
extern inline long long llmin(long long, long long); 
# 283
extern inline unsigned long long ullmin(unsigned long long, unsigned long long); 
# 304 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fminf(float x, float y) throw(); 
# 324 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmin(double x, double y) throw(); 
# 331 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline int max(int, int); 
# 333
extern inline unsigned umax(unsigned, unsigned); 
# 334
extern inline long long llmax(long long, long long); 
# 335
extern inline unsigned long long ullmax(unsigned long long, unsigned long long); 
# 356 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmaxf(float x, float y) throw(); 
# 376 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmax(double, double) throw(); 
# 420 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sin(double x) throw(); 
# 453 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cos(double x) throw(); 
# 472 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 488 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 533 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tan(double x) throw(); 
# 602 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sqrt(double x) throw(); 
# 674 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rsqrt(double x); 
# 744 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rsqrtf(float x); 
# 800 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log2(double x) throw(); 
# 825 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp2(double x) throw(); 
# 850 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float exp2f(float x) throw(); 
# 877 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp10(double x) throw(); 
# 900 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float exp10f(float x) throw(); 
# 946 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double expm1(double x) throw(); 
# 991 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float expm1f(float x) throw(); 
# 1046 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log2f(float x) throw(); 
# 1100 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log10(double x) throw(); 
# 1171 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log(double x) throw(); 
# 1265 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double log1p(double x) throw(); 
# 1362 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log1pf(float x) throw(); 
# 1437 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double floor(double x) throw(); 
# 1476 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double exp(double x) throw(); 
# 1507 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cosh(double x) throw(); 
# 1537 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sinh(double x) throw(); 
# 1567 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tanh(double x) throw(); 
# 1602 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double acosh(double x) throw(); 
# 1640 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float acoshf(float x) throw(); 
# 1656 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double asinh(double x) throw(); 
# 1672 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float asinhf(float x) throw(); 
# 1726 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atanh(double x) throw(); 
# 1780 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atanhf(float x) throw(); 
# 1839 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double ldexp(double x, int exp) throw(); 
# 1895 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ldexpf(float x, int exp) throw(); 
# 1947 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double logb(double x) throw(); 
# 2002 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float logbf(float x) throw(); 
# 2032 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int ilogb(double x) throw(); 
# 2062 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int ilogbf(float x) throw(); 
# 2138 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double scalbn(double x, int n) throw(); 
# 2214 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float scalbnf(float x, int n) throw(); 
# 2290 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double scalbln(double x, long n) throw(); 
# 2366 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float scalblnf(float x, long n) throw(); 
# 2444 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double frexp(double x, int * nptr) throw(); 
# 2519 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float frexpf(float x, int * nptr) throw(); 
# 2533 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double round(double x) throw(); 
# 2550 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float roundf(float x) throw(); 
# 2568 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lround(double x) throw(); 
# 2586 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lroundf(float x) throw(); 
# 2604 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llround(double x) throw(); 
# 2622 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llroundf(float x) throw(); 
# 2674 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rintf(float x) throw(); 
# 2691 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lrint(double x) throw(); 
# 2708 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long lrintf(float x) throw(); 
# 2725 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llrint(double x) throw(); 
# 2742 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern long long llrintf(float x) throw(); 
# 2795 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nearbyint(double x) throw(); 
# 2848 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nearbyintf(float x) throw(); 
# 2910 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double ceil(double x) throw(); 
# 2922 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double trunc(double x) throw(); 
# 2937 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float truncf(float x) throw(); 
# 2963 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fdim(double x, double y) throw(); 
# 2989 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fdimf(float x, float y) throw(); 
# 3025 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atan2(double y, double x) throw(); 
# 3056 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double atan(double x) throw(); 
# 3079 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double acos(double x) throw(); 
# 3111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double asin(double x) throw(); 
# 3157 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double hypot(double x, double y) throw(); 
# 3209 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rhypot(double x, double y) throw(); 
# 3255 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float hypotf(float x, float y) throw(); 
# 3307 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rhypotf(float x, float y) throw(); 
# 3351 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double norm3d(double a, double b, double c) throw(); 
# 3402 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rnorm3d(double a, double b, double c) throw(); 
# 3451 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double norm4d(double a, double b, double c, double d) throw(); 
# 3507 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rnorm4d(double a, double b, double c, double d) throw(); 
# 3552 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double norm(int dim, const double * t) throw(); 
# 3603 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rnorm(int dim, const double * t) throw(); 
# 3655 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rnormf(int dim, const float * a) throw(); 
# 3699 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float normf(int dim, const float * a) throw(); 
# 3744 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float norm3df(float a, float b, float c) throw(); 
# 3795 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rnorm3df(float a, float b, float c) throw(); 
# 3844 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float norm4df(float a, float b, float c, float d) throw(); 
# 3900 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rnorm4df(float a, float b, float c, float d) throw(); 
# 3987 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cbrt(double x) throw(); 
# 4073 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cbrtf(float x) throw(); 
# 4128 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double rcbrt(double x); 
# 4178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float rcbrtf(float x); 
# 4238 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double sinpi(double x); 
# 4298 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinpif(float x); 
# 4350 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cospi(double x); 
# 4402 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cospif(float x); 
# 4432 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincospi(double x, double * sptr, double * cptr); 
# 4462 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern void sincospif(float x, float * sptr, float * cptr); 
# 4774 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double pow(double x, double y) throw(); 
# 4830 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double modf(double x, double * iptr) throw(); 
# 4889 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fmod(double x, double y) throw(); 
# 4975 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double remainder(double x, double y) throw(); 
# 5065 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float remainderf(float x, float y) throw(); 
# 5119 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double remquo(double x, double y, int * quo) throw(); 
# 5173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float remquof(float x, float y, int * quo) throw(); 
# 5214 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double j0(double x) throw(); 
# 5256 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float j0f(float x) throw(); 
# 5317 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double j1(double x) throw(); 
# 5378 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float j1f(float x) throw(); 
# 5421 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double jn(int n, double x) throw(); 
# 5464 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float jnf(int n, float x) throw(); 
# 5516 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double y0(double x) throw(); 
# 5568 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float y0f(float x) throw(); 
# 5620 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double y1(double x) throw(); 
# 5672 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float y1f(float x) throw(); 
# 5725 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double yn(int n, double x) throw(); 
# 5778 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ynf(int n, float x) throw(); 
# 5805 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cyl_bessel_i0(double x) throw(); 
# 5831 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cyl_bessel_i0f(float x) throw(); 
# 5858 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double cyl_bessel_i1(double x) throw(); 
# 5884 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cyl_bessel_i1f(float x) throw(); 
# 5967 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erf(double x) throw(); 
# 6049 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erff(float x) throw(); 
# 6113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfinv(double y); 
# 6170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfinvf(float y); 
# 6209 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfc(double x) throw(); 
# 6247 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcf(float x) throw(); 
# 6375 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double lgamma(double x) throw(); 
# 6438 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfcinv(double y); 
# 6494 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcinvf(float y); 
# 6552 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double normcdfinv(double y); 
# 6610 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float normcdfinvf(float y); 
# 6653 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double normcdf(double y); 
# 6696 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float normcdff(float y); 
# 6771 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double erfcx(double x); 
# 6846 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float erfcxf(float x); 
# 6980 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float lgammaf(float x) throw(); 
# 7089 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double tgamma(double x) throw(); 
# 7198 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tgammaf(float x) throw(); 
# 7211 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double copysign(double x, double y) throw(); 
# 7224 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float copysignf(float x, float y) throw(); 
# 7261 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nextafter(double x, double y) throw(); 
# 7298 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nextafterf(float x, float y) throw(); 
# 7314 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double nan(const char * tagp) throw(); 
# 7330 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float nanf(const char * tagp) throw(); 
# 7337 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinff(float) throw(); 
# 7338 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnanf(float) throw(); 
# 7348 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finite(double) throw(); 
# 7349 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finitef(float) throw(); 
# 7350 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbit(double) throw(); 
# 7351 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnan(double) throw(); 
# 7352 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinf(double) throw(); 
# 7355 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbitf(float) throw(); 
# 7514 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern double fma(double x, double y, double z) throw(); 
# 7672 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmaf(float x, float y, float z) throw(); 
# 7683 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __signbitl(long double) throw(); 
# 7689 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __finitel(long double) throw(); 
# 7690 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isinfl(long double) throw(); 
# 7691 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern int __isnanl(long double) throw(); 
# 7741 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float acosf(float x) throw(); 
# 7781 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float asinf(float x) throw(); 
# 7821 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atanf(float x) throw(); 
# 7854 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float atan2f(float y, float x) throw(); 
# 7878 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float cosf(float x) throw(); 
# 7920 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinf(float x) throw(); 
# 7962 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tanf(float x) throw(); 
# 7986 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float coshf(float x) throw(); 
# 8027 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sinhf(float x) throw(); 
# 8057 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float tanhf(float x) throw(); 
# 8108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float logf(float x) throw(); 
# 8158 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float expf(float x) throw(); 
# 8209 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float log10f(float x) throw(); 
# 8264 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float modff(float x, float * iptr) throw(); 
# 8572 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float powf(float x, float y) throw(); 
# 8641 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float sqrtf(float x) throw(); 
# 8700 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float ceilf(float x) throw(); 
# 8772 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float floorf(float x) throw(); 
# 8831 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern float fmodf(float x, float y) throw(); 
# 8846 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
}
# 29 "/usr/include/math.h" 3
extern "C" {
# 34 "/usr/include/bits/mathdef.h" 3
typedef float float_t; 
# 35
typedef double double_t; 
# 54 "/usr/include/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 123
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 129
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 132
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 135
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 142
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 145
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 154
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 157
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 163
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 170
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 179
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 182
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 185
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 188
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 193
extern int __isinf(double __value) throw() __attribute((const)); 
# 196
extern int __finite(double __value) throw() __attribute((const)); 
# 202
extern inline int isinf(double __value) throw() __attribute((const)); 
# 205
extern int finite(double __value) throw() __attribute((const)); 
# 208
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 212
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 218
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 225
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnan(double __value) throw() __attribute((const)); 
# 235
extern inline int isnan(double __value) throw() __attribute((const)); 
# 238
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 239
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 240
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 241
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 242
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 243
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 250
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 251
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 252
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 259
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 265
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 272
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 280
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 283
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 285
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 289
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 293
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 297
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 302
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 306
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 310
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 314
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 319
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 326
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 327
extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 331
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 332
extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 336
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 339
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 342
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 346
extern int __fpclassify(double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbit(double __value) throw()
# 351
 __attribute((const)); 
# 355
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 364
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern float exp10f(float __x) throw(); 
# 123
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 129
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 132
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 135
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 142
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 145
extern float log2f(float __x) throw(); 
# 154
extern float powf(float __x, float __y) throw(); 
# 157
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 163
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 170
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 179
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 182
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 185
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 188
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 193
extern int __isinff(float __value) throw() __attribute((const)); 
# 196
extern int __finitef(float __value) throw() __attribute((const)); 
# 202
extern int isinff(float __value) throw() __attribute((const)); 
# 205
extern int finitef(float __value) throw() __attribute((const)); 
# 208
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 212
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 218
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 225
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanf(float __value) throw() __attribute((const)); 
# 235
extern int isnanf(float __value) throw() __attribute((const)); 
# 238
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 239
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 240
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 241
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 242
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 243
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 250
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 251
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 252
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 259
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 265
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 272
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 280
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 283
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 285
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 289
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 293
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 297
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 302
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 306
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 310
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 314
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 319
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 326
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 327
extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 331
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 332
extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 336
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 339
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 342
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyf(float __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitf(float __value) throw()
# 351
 __attribute((const)); 
# 355
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 364
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 123
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 129
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 132
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 135
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 142
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 145
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 154
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 157
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 163
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 170
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 179
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 182
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 185
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 188
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 193
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 196
extern int __finitel(long double __value) throw() __attribute((const)); 
# 202
extern int isinfl(long double __value) throw() __attribute((const)); 
# 205
extern int finitel(long double __value) throw() __attribute((const)); 
# 208
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 212
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 218
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 225
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 235
extern int isnanl(long double __value) throw() __attribute((const)); 
# 238
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 239
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 240
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 241
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 242
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 243
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 250
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 251
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 252
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 259
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 265
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 272
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 280
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 283
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 285
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 289
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 293
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 297
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 302
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 306
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 310
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 314
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 319
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 326
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 327
extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 331
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 332
extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 336
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 339
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 342
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyl(long double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitl(long double __value) throw()
# 351
 __attribute((const)); 
# 355
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 364
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 149 "/usr/include/math.h" 3
extern int signgam; 
# 191 "/usr/include/math.h" 3
enum { 
# 192
FP_NAN, 
# 195
FP_INFINITE, 
# 198
FP_ZERO, 
# 201
FP_SUBNORMAL, 
# 204
FP_NORMAL
# 207
}; 
# 295 "/usr/include/math.h" 3
typedef 
# 289
enum { 
# 290
_IEEE_ = (-1), 
# 291
_SVID_ = 0, 
# 292
_XOPEN_, 
# 293
_POSIX_, 
# 294
_ISOC_
# 295
} _LIB_VERSION_TYPE; 
# 300
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 311 "/usr/include/math.h" 3
struct __exception { 
# 316
int type; 
# 317
char *name; 
# 318
double arg1; 
# 319
double arg2; 
# 320
double retval; 
# 321
}; 
# 324
extern int matherr(__exception * __exc) throw(); 
# 475 "/usr/include/math.h" 3
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 44 "/usr/include/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 45
{ 
# 46
return __builtin_bswap32(__bsx); 
# 47
} 
# 75 "/usr/include/bits/byteswap.h" 3
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 76
{ 
# 77
return __builtin_bswap64(__bsx); 
# 78
} 
# 66 "/usr/include/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 104 "/usr/include/sys/types.h" 3
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 136 "/usr/include/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150 "/usr/include/sys/types.h" 3
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194 "/usr/include/sys/types.h" 3
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 23 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 31
typedef 
# 29
struct { 
# 30
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 31
} __sigset_t; 
# 37 "/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 54 "/usr/include/sys/select.h" 3
typedef long __fd_mask; 
# 75 "/usr/include/sys/select.h" 3
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96 "/usr/include/sys/select.h" 3
extern "C" {
# 106 "/usr/include/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118 "/usr/include/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131 "/usr/include/sys/select.h" 3
}
# 29 "/usr/include/sys/sysmacros.h" 3
extern "C" {
# 32
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 33
 __attribute((const)); 
# 35
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 36
 __attribute((const)); 
# 38
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 40
 __attribute((const)); 
# 63 "/usr/include/sys/sysmacros.h" 3
}
# 228 "/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262 "/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 49 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 52
union pthread_attr_t { 
# 54
char __size[56]; 
# 55
long __align; 
# 56
}; 
# 58
typedef pthread_attr_t pthread_attr_t; 
# 68
typedef 
# 64
struct __pthread_internal_list { 
# 66
__pthread_internal_list *__prev; 
# 67
__pthread_internal_list *__next; 
# 68
} __pthread_list_t; 
# 118 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 80 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 81
struct __pthread_mutex_s { 
# 83
int __lock; 
# 84
unsigned __count; 
# 85
int __owner; 
# 87
unsigned __nusers; 
# 91
int __kind; 
# 93
short __spins; 
# 94
short __elision; 
# 95
__pthread_list_t __list; 
# 115 "/usr/include/bits/pthreadtypes.h" 3
} __data; 
# 116
char __size[40]; 
# 117
long __align; 
# 118
} pthread_mutex_t; 
# 124
typedef 
# 121
union { 
# 122
char __size[4]; 
# 123
int __align; 
# 124
} pthread_mutexattr_t; 
# 144
typedef 
# 130
union { 
# 132
struct { 
# 133
int __lock; 
# 134
unsigned __futex; 
# 135
__extension__ unsigned long long __total_seq; 
# 136
__extension__ unsigned long long __wakeup_seq; 
# 137
__extension__ unsigned long long __woken_seq; 
# 138
void *__mutex; 
# 139
unsigned __nwaiters; 
# 140
unsigned __broadcast_seq; 
# 141
} __data; 
# 142
char __size[48]; 
# 143
__extension__ long long __align; 
# 144
} pthread_cond_t; 
# 150
typedef 
# 147
union { 
# 148
char __size[4]; 
# 149
int __align; 
# 150
} pthread_condattr_t; 
# 154
typedef unsigned pthread_key_t; 
# 158
typedef int pthread_once_t; 
# 203 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 165 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 168
struct { 
# 169
int __lock; 
# 170
unsigned __nr_readers; 
# 171
unsigned __readers_wakeup; 
# 172
unsigned __writer_wakeup; 
# 173
unsigned __nr_readers_queued; 
# 174
unsigned __nr_writers_queued; 
# 175
int __writer; 
# 176
int __shared; 
# 177
unsigned long __pad1; 
# 178
unsigned long __pad2; 
# 181
unsigned __flags; 
# 182
} __data; 
# 201 "/usr/include/bits/pthreadtypes.h" 3
char __size[56]; 
# 202
long __align; 
# 203
} pthread_rwlock_t; 
# 209
typedef 
# 206
union { 
# 207
char __size[8]; 
# 208
long __align; 
# 209
} pthread_rwlockattr_t; 
# 215
typedef volatile int pthread_spinlock_t; 
# 224
typedef 
# 221
union { 
# 222
char __size[32]; 
# 223
long __align; 
# 224
} pthread_barrier_t; 
# 230
typedef 
# 227
union { 
# 228
char __size[4]; 
# 229
int __align; 
# 230
} pthread_barrierattr_t; 
# 273 "/usr/include/sys/types.h" 3
}
# 321 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
unsigned long long __a; 
# 419
}; 
# 422
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 423
 __attribute((__nonnull__(1, 2))); 
# 424
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 426
 __attribute((__nonnull__(1, 2))); 
# 429
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 431
 __attribute((__nonnull__(1, 2))); 
# 432
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 435
 __attribute((__nonnull__(1, 2))); 
# 438
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 440
 __attribute((__nonnull__(1, 2))); 
# 441
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 444
 __attribute((__nonnull__(1, 2))); 
# 447
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 448
 __attribute((__nonnull__(2))); 
# 450
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 453
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 455
 __attribute((__nonnull__(1, 2))); 
# 465
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 467
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 468
 __attribute((__malloc__)); 
# 479
extern void *realloc(void * __ptr, size_t __size) throw()
# 480
 __attribute((__warn_unused_result__)); 
# 482
extern void free(void * __ptr) throw(); 
# 487
extern void cfree(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 497 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 502
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 503
 __attribute((__nonnull__(1))); 
# 508
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 509
 __attribute((__malloc__, __alloc_size__(2))); 
# 514
extern void abort() throw() __attribute((__noreturn__)); 
# 518
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 523
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 524
 __attribute((__nonnull__(1))); 
# 534
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 535
 __attribute((__nonnull__(1))); 
# 542
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 548
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 556
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 563
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 569
extern char *secure_getenv(const char * __name) throw()
# 570
 __attribute((__nonnull__(1))); 
# 577
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 583
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 584
 __attribute((__nonnull__(2))); 
# 587
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 594
extern int clearenv() throw(); 
# 605 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 760
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 761
 __attribute((__nonnull__(1, 4))); 
# 763
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 765
 __attribute((__nonnull__(1, 4))); 
# 770
extern int abs(int __x) throw() __attribute((const)); 
# 771
extern long labs(long __x) throw() __attribute((const)); 
# 775
__extension__ extern long long llabs(long long __x) throw()
# 776
 __attribute((const)); 
# 784
extern div_t div(int __numer, int __denom) throw()
# 785
 __attribute((const)); 
# 786
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 787
 __attribute((const)); 
# 792
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 794
 __attribute((const)); 
# 807 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 808
 __attribute((__nonnull__(3, 4))); 
# 813
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 814
 __attribute((__nonnull__(3, 4))); 
# 819
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 820
 __attribute((__nonnull__(3))); 
# 825
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 827
 __attribute((__nonnull__(3, 4))); 
# 828
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 830
 __attribute((__nonnull__(3, 4))); 
# 831
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 832
 __attribute((__nonnull__(3))); 
# 837
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 839
 __attribute((__nonnull__(3, 4, 5))); 
# 840
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 842
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 847
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 859
extern int mblen(const char * __s, size_t __n) throw(); 
# 862
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 866
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 870
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 873
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 884
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 895 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 898
 __attribute((__nonnull__(1, 2, 3))); 
# 904
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 912
extern int posix_openpt(int __oflag); 
# 920
extern int grantpt(int __fd) throw(); 
# 924
extern int unlockpt(int __fd) throw(); 
# 929
extern char *ptsname(int __fd) throw(); 
# 936
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 937
 __attribute((__nonnull__(2))); 
# 940
extern int getpt(); 
# 947
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 948
 __attribute((__nonnull__(1))); 
# 964 "/usr/include/stdlib.h" 3
}
# 194 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/powerpc64le-none-linux-gnu/bits/c++config.h" 3
namespace std { 
# 196
typedef unsigned long size_t; 
# 197
typedef long ptrdiff_t; 
# 202
}
# 216 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/powerpc64le-none-linux-gnu/bits/c++config.h" 3
namespace std { 
# 218
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 219
}
# 220
namespace __gnu_cxx { 
# 222
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 223
}
# 393 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/powerpc64le-none-linux-gnu/bits/c++config.h" 3
namespace std { 
# 395
inline namespace __gnu_cxx_ldbl128 { }
# 396
}
# 68 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 72
template< class _Iterator, class _Container> class __normal_iterator; 
# 76
}
# 78
namespace std __attribute((__visibility__("default"))) { 
# 82
struct __true_type { }; 
# 83
struct __false_type { }; 
# 85
template< bool > 
# 86
struct __truth_type { 
# 87
typedef __false_type __type; }; 
# 90
template<> struct __truth_type< true>  { 
# 91
typedef __true_type __type; }; 
# 95
template< class _Sp, class _Tp> 
# 96
struct __traitor { 
# 98
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 99
typedef typename __truth_type< __value> ::__type __type; 
# 100
}; 
# 103
template< class , class > 
# 104
struct __are_same { 
# 106
enum { __value}; 
# 107
typedef __false_type __type; 
# 108
}; 
# 110
template< class _Tp> 
# 111
struct __are_same< _Tp, _Tp>  { 
# 113
enum { __value = 1}; 
# 114
typedef __true_type __type; 
# 115
}; 
# 118
template< class _Tp> 
# 119
struct __is_void { 
# 121
enum { __value}; 
# 122
typedef __false_type __type; 
# 123
}; 
# 126
template<> struct __is_void< void>  { 
# 128
enum { __value = 1}; 
# 129
typedef __true_type __type; 
# 130
}; 
# 135
template< class _Tp> 
# 136
struct __is_integer { 
# 138
enum { __value}; 
# 139
typedef __false_type __type; 
# 140
}; 
# 147
template<> struct __is_integer< bool>  { 
# 149
enum { __value = 1}; 
# 150
typedef __true_type __type; 
# 151
}; 
# 154
template<> struct __is_integer< char>  { 
# 156
enum { __value = 1}; 
# 157
typedef __true_type __type; 
# 158
}; 
# 161
template<> struct __is_integer< signed char>  { 
# 163
enum { __value = 1}; 
# 164
typedef __true_type __type; 
# 165
}; 
# 168
template<> struct __is_integer< unsigned char>  { 
# 170
enum { __value = 1}; 
# 171
typedef __true_type __type; 
# 172
}; 
# 176
template<> struct __is_integer< wchar_t>  { 
# 178
enum { __value = 1}; 
# 179
typedef __true_type __type; 
# 180
}; 
# 200 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 270 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer< __int128_t>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< __uint128_t>  { enum { __value = 1}; typedef __true_type __type; }; 
# 287 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 288
struct __is_floating { 
# 290
enum { __value}; 
# 291
typedef __false_type __type; 
# 292
}; 
# 296
template<> struct __is_floating< float>  { 
# 298
enum { __value = 1}; 
# 299
typedef __true_type __type; 
# 300
}; 
# 303
template<> struct __is_floating< double>  { 
# 305
enum { __value = 1}; 
# 306
typedef __true_type __type; 
# 307
}; 
# 310
template<> struct __is_floating< long double>  { 
# 312
enum { __value = 1}; 
# 313
typedef __true_type __type; 
# 314
}; 
# 319
template< class _Tp> 
# 320
struct __is_pointer { 
# 322
enum { __value}; 
# 323
typedef __false_type __type; 
# 324
}; 
# 326
template< class _Tp> 
# 327
struct __is_pointer< _Tp *>  { 
# 329
enum { __value = 1}; 
# 330
typedef __true_type __type; 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_normal_iterator { 
# 339
enum { __value}; 
# 340
typedef __false_type __type; 
# 341
}; 
# 343
template< class _Iterator, class _Container> 
# 344
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 347
enum { __value = 1}; 
# 348
typedef __true_type __type; 
# 349
}; 
# 354
template< class _Tp> 
# 355
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 357
}; 
# 362
template< class _Tp> 
# 363
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 365
}; 
# 370
template< class _Tp> 
# 371
struct __is_char { 
# 373
enum { __value}; 
# 374
typedef __false_type __type; 
# 375
}; 
# 378
template<> struct __is_char< char>  { 
# 380
enum { __value = 1}; 
# 381
typedef __true_type __type; 
# 382
}; 
# 386
template<> struct __is_char< wchar_t>  { 
# 388
enum { __value = 1}; 
# 389
typedef __true_type __type; 
# 390
}; 
# 393
template< class _Tp> 
# 394
struct __is_byte { 
# 396
enum { __value}; 
# 397
typedef __false_type __type; 
# 398
}; 
# 401
template<> struct __is_byte< char>  { 
# 403
enum { __value = 1}; 
# 404
typedef __true_type __type; 
# 405
}; 
# 408
template<> struct __is_byte< signed char>  { 
# 410
enum { __value = 1}; 
# 411
typedef __true_type __type; 
# 412
}; 
# 415
template<> struct __is_byte< unsigned char>  { 
# 417
enum { __value = 1}; 
# 418
typedef __true_type __type; 
# 419
}; 
# 424
template< class _Tp> 
# 425
struct __is_move_iterator { 
# 427
enum { __value}; 
# 428
typedef __false_type __type; 
# 429
}; 
# 444 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/bits/cpp_type_traits.h" 3
}
# 37 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 42
template< bool , class > 
# 43
struct __enable_if { 
# 44
}; 
# 46
template< class _Tp> 
# 47
struct __enable_if< true, _Tp>  { 
# 48
typedef _Tp __type; }; 
# 52
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 53
struct __conditional_type { 
# 54
typedef _Iftrue __type; }; 
# 56
template< class _Iftrue, class _Iffalse> 
# 57
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 58
typedef _Iffalse __type; }; 
# 62
template< class _Tp> 
# 63
struct __add_unsigned { 
# 66
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 69
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 70
}; 
# 73
template<> struct __add_unsigned< char>  { 
# 74
typedef unsigned char __type; }; 
# 77
template<> struct __add_unsigned< signed char>  { 
# 78
typedef unsigned char __type; }; 
# 81
template<> struct __add_unsigned< short>  { 
# 82
typedef unsigned short __type; }; 
# 85
template<> struct __add_unsigned< int>  { 
# 86
typedef unsigned __type; }; 
# 89
template<> struct __add_unsigned< long>  { 
# 90
typedef unsigned long __type; }; 
# 93
template<> struct __add_unsigned< long long>  { 
# 94
typedef unsigned long long __type; }; 
# 98
template<> struct __add_unsigned< bool> ; 
# 101
template<> struct __add_unsigned< wchar_t> ; 
# 105
template< class _Tp> 
# 106
struct __remove_unsigned { 
# 109
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 112
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 113
}; 
# 116
template<> struct __remove_unsigned< char>  { 
# 117
typedef signed char __type; }; 
# 120
template<> struct __remove_unsigned< unsigned char>  { 
# 121
typedef signed char __type; }; 
# 124
template<> struct __remove_unsigned< unsigned short>  { 
# 125
typedef short __type; }; 
# 128
template<> struct __remove_unsigned< unsigned>  { 
# 129
typedef int __type; }; 
# 132
template<> struct __remove_unsigned< unsigned long>  { 
# 133
typedef long __type; }; 
# 136
template<> struct __remove_unsigned< unsigned long long>  { 
# 137
typedef long long __type; }; 
# 141
template<> struct __remove_unsigned< bool> ; 
# 144
template<> struct __remove_unsigned< wchar_t> ; 
# 148
template< class _Type> inline bool 
# 150
__is_null_pointer(_Type *__ptr) 
# 151
{ return __ptr == 0; } 
# 153
template< class _Type> inline bool 
# 155
__is_null_pointer(_Type) 
# 156
{ return false; } 
# 165 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/ext/type_traits.h" 3
template< class _Tp, bool  = std::__is_integer< _Tp> ::__value> 
# 166
struct __promote { 
# 167
typedef double __type; }; 
# 172
template< class _Tp> 
# 173
struct __promote< _Tp, false>  { 
# 174
}; 
# 177
template<> struct __promote< long double>  { 
# 178
typedef long double __type; }; 
# 181
template<> struct __promote< double>  { 
# 182
typedef double __type; }; 
# 185
template<> struct __promote< float>  { 
# 186
typedef float __type; }; 
# 188
template< class _Tp, class _Up, class 
# 189
_Tp2 = typename __promote< _Tp> ::__type, class 
# 190
_Up2 = typename __promote< _Up> ::__type> 
# 191
struct __promote_2 { 
# 193
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 194
}; 
# 196
template< class _Tp, class _Up, class _Vp, class 
# 197
_Tp2 = typename __promote< _Tp> ::__type, class 
# 198
_Up2 = typename __promote< _Up> ::__type, class 
# 199
_Vp2 = typename __promote< _Vp> ::__type> 
# 200
struct __promote_3 { 
# 202
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 203
}; 
# 205
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 206
_Tp2 = typename __promote< _Tp> ::__type, class 
# 207
_Up2 = typename __promote< _Up> ::__type, class 
# 208
_Vp2 = typename __promote< _Vp> ::__type, class 
# 209
_Wp2 = typename __promote< _Wp> ::__type> 
# 210
struct __promote_4 { 
# 212
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 213
}; 
# 216
}
# 75 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
inline double abs(double __x) 
# 82
{ return __builtin_fabs(__x); } 
# 87
inline float abs(float __x) 
# 88
{ return __builtin_fabsf(__x); } 
# 91
inline long double abs(long double __x) 
# 92
{ return __builtin_fabsl(__x); } 
# 95
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
abs(_Tp __x) 
# 100
{ return __builtin_fabs(__x); } 
# 102
using ::acos;
# 106
inline float acos(float __x) 
# 107
{ return __builtin_acosf(__x); } 
# 110
inline long double acos(long double __x) 
# 111
{ return __builtin_acosl(__x); } 
# 114
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
acos(_Tp __x) 
# 119
{ return __builtin_acos(__x); } 
# 121
using ::asin;
# 125
inline float asin(float __x) 
# 126
{ return __builtin_asinf(__x); } 
# 129
inline long double asin(long double __x) 
# 130
{ return __builtin_asinl(__x); } 
# 133
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
asin(_Tp __x) 
# 138
{ return __builtin_asin(__x); } 
# 140
using ::atan;
# 144
inline float atan(float __x) 
# 145
{ return __builtin_atanf(__x); } 
# 148
inline long double atan(long double __x) 
# 149
{ return __builtin_atanl(__x); } 
# 152
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 156
atan(_Tp __x) 
# 157
{ return __builtin_atan(__x); } 
# 159
using ::atan2;
# 163
inline float atan2(float __y, float __x) 
# 164
{ return __builtin_atan2f(__y, __x); } 
# 167
inline long double atan2(long double __y, long double __x) 
# 168
{ return __builtin_atan2l(__y, __x); } 
# 171
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 174
atan2(_Tp __y, _Up __x) 
# 175
{ 
# 176
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 177
return atan2((__type)__y, (__type)__x); 
# 178
} 
# 180
using ::ceil;
# 184
inline float ceil(float __x) 
# 185
{ return __builtin_ceilf(__x); } 
# 188
inline long double ceil(long double __x) 
# 189
{ return __builtin_ceill(__x); } 
# 192
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
ceil(_Tp __x) 
# 197
{ return __builtin_ceil(__x); } 
# 199
using ::cos;
# 203
inline float cos(float __x) 
# 204
{ return __builtin_cosf(__x); } 
# 207
inline long double cos(long double __x) 
# 208
{ return __builtin_cosl(__x); } 
# 211
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cos(_Tp __x) 
# 216
{ return __builtin_cos(__x); } 
# 218
using ::cosh;
# 222
inline float cosh(float __x) 
# 223
{ return __builtin_coshf(__x); } 
# 226
inline long double cosh(long double __x) 
# 227
{ return __builtin_coshl(__x); } 
# 230
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
cosh(_Tp __x) 
# 235
{ return __builtin_cosh(__x); } 
# 237
using ::exp;
# 241
inline float exp(float __x) 
# 242
{ return __builtin_expf(__x); } 
# 245
inline long double exp(long double __x) 
# 246
{ return __builtin_expl(__x); } 
# 249
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
exp(_Tp __x) 
# 254
{ return __builtin_exp(__x); } 
# 256
using ::fabs;
# 260
inline float fabs(float __x) 
# 261
{ return __builtin_fabsf(__x); } 
# 264
inline long double fabs(long double __x) 
# 265
{ return __builtin_fabsl(__x); } 
# 268
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
fabs(_Tp __x) 
# 273
{ return __builtin_fabs(__x); } 
# 275
using ::floor;
# 279
inline float floor(float __x) 
# 280
{ return __builtin_floorf(__x); } 
# 283
inline long double floor(long double __x) 
# 284
{ return __builtin_floorl(__x); } 
# 287
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 291
floor(_Tp __x) 
# 292
{ return __builtin_floor(__x); } 
# 294
using ::fmod;
# 298
inline float fmod(float __x, float __y) 
# 299
{ return __builtin_fmodf(__x, __y); } 
# 302
inline long double fmod(long double __x, long double __y) 
# 303
{ return __builtin_fmodl(__x, __y); } 
# 306
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 309
fmod(_Tp __x, _Up __y) 
# 310
{ 
# 311
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 312
return fmod((__type)__x, (__type)__y); 
# 313
} 
# 315
using ::frexp;
# 319
inline float frexp(float __x, int *__exp) 
# 320
{ return __builtin_frexpf(__x, __exp); } 
# 323
inline long double frexp(long double __x, int *__exp) 
# 324
{ return __builtin_frexpl(__x, __exp); } 
# 327
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
frexp(_Tp __x, int *__exp) 
# 332
{ return __builtin_frexp(__x, __exp); } 
# 334
using ::ldexp;
# 338
inline float ldexp(float __x, int __exp) 
# 339
{ return __builtin_ldexpf(__x, __exp); } 
# 342
inline long double ldexp(long double __x, int __exp) 
# 343
{ return __builtin_ldexpl(__x, __exp); } 
# 346
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
ldexp(_Tp __x, int __exp) 
# 351
{ return __builtin_ldexp(__x, __exp); } 
# 353
using ::log;
# 357
inline float log(float __x) 
# 358
{ return __builtin_logf(__x); } 
# 361
inline long double log(long double __x) 
# 362
{ return __builtin_logl(__x); } 
# 365
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log(_Tp __x) 
# 370
{ return __builtin_log(__x); } 
# 372
using ::log10;
# 376
inline float log10(float __x) 
# 377
{ return __builtin_log10f(__x); } 
# 380
inline long double log10(long double __x) 
# 381
{ return __builtin_log10l(__x); } 
# 384
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 388
log10(_Tp __x) 
# 389
{ return __builtin_log10(__x); } 
# 391
using ::modf;
# 395
inline float modf(float __x, float *__iptr) 
# 396
{ return __builtin_modff(__x, __iptr); } 
# 399
inline long double modf(long double __x, long double *__iptr) 
# 400
{ return __builtin_modfl(__x, __iptr); } 
# 403
using ::pow;
# 407
inline float pow(float __x, float __y) 
# 408
{ return __builtin_powf(__x, __y); } 
# 411
inline long double pow(long double __x, long double __y) 
# 412
{ return __builtin_powl(__x, __y); } 
# 418
inline double pow(double __x, int __i) 
# 419
{ return __builtin_powi(__x, __i); } 
# 422
inline float pow(float __x, int __n) 
# 423
{ return __builtin_powif(__x, __n); } 
# 426
inline long double pow(long double __x, int __n) 
# 427
{ return __builtin_powil(__x, __n); } 
# 431
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 434
pow(_Tp __x, _Up __y) 
# 435
{ 
# 436
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 437
return pow((__type)__x, (__type)__y); 
# 438
} 
# 440
using ::sin;
# 444
inline float sin(float __x) 
# 445
{ return __builtin_sinf(__x); } 
# 448
inline long double sin(long double __x) 
# 449
{ return __builtin_sinl(__x); } 
# 452
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sin(_Tp __x) 
# 457
{ return __builtin_sin(__x); } 
# 459
using ::sinh;
# 463
inline float sinh(float __x) 
# 464
{ return __builtin_sinhf(__x); } 
# 467
inline long double sinh(long double __x) 
# 468
{ return __builtin_sinhl(__x); } 
# 471
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sinh(_Tp __x) 
# 476
{ return __builtin_sinh(__x); } 
# 478
using ::sqrt;
# 482
inline float sqrt(float __x) 
# 483
{ return __builtin_sqrtf(__x); } 
# 486
inline long double sqrt(long double __x) 
# 487
{ return __builtin_sqrtl(__x); } 
# 490
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
sqrt(_Tp __x) 
# 495
{ return __builtin_sqrt(__x); } 
# 497
using ::tan;
# 501
inline float tan(float __x) 
# 502
{ return __builtin_tanf(__x); } 
# 505
inline long double tan(long double __x) 
# 506
{ return __builtin_tanl(__x); } 
# 509
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tan(_Tp __x) 
# 514
{ return __builtin_tan(__x); } 
# 516
using ::tanh;
# 520
inline float tanh(float __x) 
# 521
{ return __builtin_tanhf(__x); } 
# 524
inline long double tanh(long double __x) 
# 525
{ return __builtin_tanhl(__x); } 
# 528
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 532
tanh(_Tp __x) 
# 533
{ return __builtin_tanh(__x); } 
# 536
}
# 555 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 831 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cmath" 3
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 834
fpclassify(_Tp __f) 
# 835
{ 
# 836
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 837
return __builtin_fpclassify(0, 1, 4, 3, 2, (__type)__f); 
# 839
} 
# 841
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 844
isfinite(_Tp __f) 
# 845
{ 
# 846
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 847
return __builtin_isfinite((__type)__f); 
# 848
} 
# 850
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 853
isinf(_Tp __f) 
# 854
{ 
# 855
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 856
return __builtin_isinf((__type)__f); 
# 857
} 
# 859
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 862
isnan(_Tp __f) 
# 863
{ 
# 864
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 865
return __builtin_isnan((__type)__f); 
# 866
} 
# 868
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 871
isnormal(_Tp __f) 
# 872
{ 
# 873
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 874
return __builtin_isnormal((__type)__f); 
# 875
} 
# 877
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 880
signbit(_Tp __f) 
# 881
{ 
# 882
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 883
return (sizeof(__type) == sizeof(float)) ? __builtin_signbitf((__type)__f) : ((sizeof(__type) == sizeof(double)) ? __builtin_signbit((__type)__f) : __builtin_signbitl((__type)__f)); 
# 888
} 
# 890
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 893
isgreater(_Tp __f1, _Tp __f2) 
# 894
{ 
# 895
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 896
return __builtin_isgreater((__type)__f1, (__type)__f2); 
# 897
} 
# 899
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 902
isgreaterequal(_Tp __f1, _Tp __f2) 
# 903
{ 
# 904
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 905
return __builtin_isgreaterequal((__type)__f1, (__type)__f2); 
# 906
} 
# 908
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 911
isless(_Tp __f1, _Tp __f2) 
# 912
{ 
# 913
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 914
return __builtin_isless((__type)__f1, (__type)__f2); 
# 915
} 
# 917
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 920
islessequal(_Tp __f1, _Tp __f2) 
# 921
{ 
# 922
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 923
return __builtin_islessequal((__type)__f1, (__type)__f2); 
# 924
} 
# 926
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 929
islessgreater(_Tp __f1, _Tp __f2) 
# 930
{ 
# 931
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 932
return __builtin_islessgreater((__type)__f1, (__type)__f2); 
# 933
} 
# 935
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 938
isunordered(_Tp __f1, _Tp __f2) 
# 939
{ 
# 940
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 941
return __builtin_isunordered((__type)__f1, (__type)__f2); 
# 942
} 
# 947
}
# 114 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cstdlib" 3
namespace std __attribute((__visibility__("default"))) { 
# 118
using ::div_t;
# 119
using ::ldiv_t;
# 121
using ::abort;
# 122
using ::abs;
# 123
using ::atexit;
# 129
using ::atof;
# 130
using ::atoi;
# 131
using ::atol;
# 132
using ::bsearch;
# 133
using ::calloc;
# 134
using ::div;
# 135
using ::exit;
# 136
using ::free;
# 137
using ::getenv;
# 138
using ::labs;
# 139
using ::ldiv;
# 140
using ::malloc;
# 142
using ::mblen;
# 143
using ::mbstowcs;
# 144
using ::mbtowc;
# 146
using ::qsort;
# 152
using ::rand;
# 153
using ::realloc;
# 154
using ::srand;
# 155
using ::strtod;
# 156
using ::strtol;
# 157
using ::strtoul;
# 158
using ::system;
# 160
using ::wcstombs;
# 161
using ::wctomb;
# 166
inline long abs(long __i) { return __builtin_labs(__i); } 
# 169
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 174
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 179
inline __int128_t abs(__int128_t __x) { return (__x >= (0)) ? __x : (-__x); } 
# 196 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cstdlib" 3
}
# 209 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 214
using ::lldiv_t;
# 220
using ::_Exit;
# 224
using ::llabs;
# 227
inline lldiv_t div(long long __n, long long __d) 
# 228
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 230
using ::lldiv;
# 241 "/autofs/nccs-svm1_sw/summitdev/gcc/5.4.0new/include/c++/5.4.0/cstdlib" 3
using ::atoll;
# 242
using ::strtoll;
# 243
using ::strtoull;
# 245
using ::strtof;
# 246
using ::strtold;
# 249
}
# 251
namespace std { 
# 254
using __gnu_cxx::lldiv_t;
# 256
using __gnu_cxx::_Exit;
# 258
using __gnu_cxx::llabs;
# 259
using __gnu_cxx::div;
# 260
using __gnu_cxx::lldiv;
# 262
using __gnu_cxx::atoll;
# 263
using __gnu_cxx::strtof;
# 264
using __gnu_cxx::strtoll;
# 265
using __gnu_cxx::strtoull;
# 266
using __gnu_cxx::strtold;
# 267
}
# 8960 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
__attribute((always_inline)) inline int signbit(float x); 
# 8964
__attribute((always_inline)) inline int signbit(double x); 
# 8966
__attribute((always_inline)) inline int signbit(long double x); 
# 8968
__attribute((always_inline)) inline int isfinite(float x); 
# 8972
__attribute((always_inline)) inline int isfinite(double x); 
# 8974
__attribute((always_inline)) inline int isfinite(long double x); 
# 8976
__attribute((always_inline)) inline int isnan(float x); 
# 8983
extern "C" __attribute((always_inline)) inline int isnan(double x) throw(); 
# 8985
__attribute((always_inline)) inline int isnan(long double x); 
# 8987
__attribute((always_inline)) inline int isinf(float x); 
# 8994
extern "C" __attribute((always_inline)) inline int isinf(double x) throw(); 
# 8996
__attribute((always_inline)) inline int isinf(long double x); 
# 9053 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 9055
template< class T> extern T __pow_helper(T, int); 
# 9056
template< class T> extern T __cmath_power(T, unsigned); 
# 9057
}
# 9059
using std::abs;
# 9060
using std::fabs;
# 9061
using std::ceil;
# 9062
using std::floor;
# 9063
using std::sqrt;
# 9065
using std::pow;
# 9067
using std::log;
# 9068
using std::log10;
# 9069
using std::fmod;
# 9070
using std::modf;
# 9071
using std::exp;
# 9072
using std::frexp;
# 9073
using std::ldexp;
# 9074
using std::asin;
# 9075
using std::sin;
# 9076
using std::sinh;
# 9077
using std::acos;
# 9078
using std::cos;
# 9079
using std::cosh;
# 9080
using std::atan;
# 9081
using std::atan2;
# 9082
using std::tan;
# 9083
using std::tanh;
# 9448 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
namespace std { 
# 9457 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline long long abs(long long); 
# 9467 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline long abs(long); 
# 9468
extern inline float abs(float); 
# 9469
extern inline double abs(double); 
# 9470
extern inline float fabs(float); 
# 9471
extern inline float ceil(float); 
# 9472
extern inline float floor(float); 
# 9473
extern inline float sqrt(float); 
# 9474
extern inline float pow(float, float); 
# 9483 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
extern inline float pow(float, int); 
# 9484
extern inline double pow(double, int); 
# 9489
extern inline float log(float); 
# 9490
extern inline float log10(float); 
# 9491
extern inline float fmod(float, float); 
# 9492
extern inline float modf(float, float *); 
# 9493
extern inline float exp(float); 
# 9494
extern inline float frexp(float, int *); 
# 9495
extern inline float ldexp(float, int); 
# 9496
extern inline float asin(float); 
# 9497
extern inline float sin(float); 
# 9498
extern inline float sinh(float); 
# 9499
extern inline float acos(float); 
# 9500
extern inline float cos(float); 
# 9501
extern inline float cosh(float); 
# 9502
extern inline float atan(float); 
# 9503
extern inline float atan2(float, float); 
# 9504
extern inline float tan(float); 
# 9505
extern inline float tanh(float); 
# 9579 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
}
# 9722 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline float logb(float a); 
# 9724
static inline int ilogb(float a); 
# 9726
static inline float scalbn(float a, int b); 
# 9728
static inline float scalbln(float a, long b); 
# 9730
static inline float exp2(float a); 
# 9732
static inline float expm1(float a); 
# 9734
static inline float log2(float a); 
# 9736
static inline float log1p(float a); 
# 9738
static inline float acosh(float a); 
# 9740
static inline float asinh(float a); 
# 9742
static inline float atanh(float a); 
# 9744
static inline float hypot(float a, float b); 
# 9746
static inline float norm3d(float a, float b, float c); 
# 9748
static inline float norm4d(float a, float b, float c, float d); 
# 9750
static inline float cbrt(float a); 
# 9752
static inline float erf(float a); 
# 9754
static inline float erfc(float a); 
# 9756
static inline float lgamma(float a); 
# 9758
static inline float tgamma(float a); 
# 9760
static inline float copysign(float a, float b); 
# 9762
static inline float nextafter(float a, float b); 
# 9764
static inline float remainder(float a, float b); 
# 9766
static inline float remquo(float a, float b, int * quo); 
# 9768
static inline float round(float a); 
# 9770
static inline long lround(float a); 
# 9772
static inline long long llround(float a); 
# 9774
static inline float trunc(float a); 
# 9776
static inline float rint(float a); 
# 9778
static inline long lrint(float a); 
# 9780
static inline long long llrint(float a); 
# 9782
static inline float nearbyint(float a); 
# 9784
static inline float fdim(float a, float b); 
# 9786
static inline float fma(float a, float b, float c); 
# 9788
static inline float fmax(float a, float b); 
# 9790
static inline float fmin(float a, float b); 
# 9831 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.h"
static inline float exp10(float a); 
# 9833
static inline float rsqrt(float a); 
# 9835
static inline float rcbrt(float a); 
# 9837
static inline float sinpi(float a); 
# 9839
static inline float cospi(float a); 
# 9841
static inline void sincospi(float a, float * sptr, float * cptr); 
# 9843
static inline void sincos(float a, float * sptr, float * cptr); 
# 9845
static inline float j0(float a); 
# 9847
static inline float j1(float a); 
# 9849
static inline float jn(int n, float a); 
# 9851
static inline float y0(float a); 
# 9853
static inline float y1(float a); 
# 9855
static inline float yn(int n, float a); 
# 9857
static inline float cyl_bessel_i0(float a); 
# 9859
static inline float cyl_bessel_i1(float a); 
# 9861
static inline float erfinv(float a); 
# 9863
static inline float erfcinv(float a); 
# 9865
static inline float normcdfinv(float a); 
# 9867
static inline float normcdf(float a); 
# 9869
static inline float erfcx(float a); 
# 9871
static inline double copysign(double a, float b); 
# 9873
static inline double copysign(float a, double b); 
# 9875
static inline unsigned min(unsigned a, unsigned b); 
# 9877
static inline unsigned min(int a, unsigned b); 
# 9879
static inline unsigned min(unsigned a, int b); 
# 9881
static inline long min(long a, long b); 
# 9883
static inline unsigned long min(unsigned long a, unsigned long b); 
# 9885
static inline unsigned long min(long a, unsigned long b); 
# 9887
static inline unsigned long min(unsigned long a, long b); 
# 9889
static inline long long min(long long a, long long b); 
# 9891
static inline unsigned long long min(unsigned long long a, unsigned long long b); 
# 9893
static inline unsigned long long min(long long a, unsigned long long b); 
# 9895
static inline unsigned long long min(unsigned long long a, long long b); 
# 9897
static inline float min(float a, float b); 
# 9899
static inline double min(double a, double b); 
# 9901
static inline double min(float a, double b); 
# 9903
static inline double min(double a, float b); 
# 9905
static inline unsigned max(unsigned a, unsigned b); 
# 9907
static inline unsigned max(int a, unsigned b); 
# 9909
static inline unsigned max(unsigned a, int b); 
# 9911
static inline long max(long a, long b); 
# 9913
static inline unsigned long max(unsigned long a, unsigned long b); 
# 9915
static inline unsigned long max(long a, unsigned long b); 
# 9917
static inline unsigned long max(unsigned long a, long b); 
# 9919
static inline long long max(long long a, long long b); 
# 9921
static inline unsigned long long max(unsigned long long a, unsigned long long b); 
# 9923
static inline unsigned long long max(long long a, unsigned long long b); 
# 9925
static inline unsigned long long max(unsigned long long a, long long b); 
# 9927
static inline float max(float a, float b); 
# 9929
static inline double max(double a, double b); 
# 9931
static inline double max(float a, double b); 
# 9933
static inline double max(double a, float b); 
# 316 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
__attribute((always_inline)) inline int signbit(float x) { return __signbitf(x); } 
# 320
__attribute((always_inline)) inline int signbit(double x) { return __signbit(x); } 
# 322
__attribute((always_inline)) inline int signbit(long double x) { return __signbitl(x); } 
# 333 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(float x) { return __finitef(x); } 
# 348 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(double x) { return __finite(x); } 
# 361 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(long double x) { return __finitel(x); } 
# 364
__attribute((always_inline)) inline int isnan(float x) { return __isnanf(x); } 
# 368
__attribute((always_inline)) inline int isnan(double x) throw() { return __isnan(x); } 
# 370
__attribute((always_inline)) inline int isnan(long double x) { return __isnanl(x); } 
# 372
__attribute((always_inline)) inline int isinf(float x) { return __isinff(x); } 
# 376
__attribute((always_inline)) inline int isinf(double x) throw() { return __isinf(x); } 
# 378
__attribute((always_inline)) inline int isinf(long double x) { return __isinfl(x); } 
# 584 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
static inline float logb(float a) 
# 585
{ 
# 586
return logbf(a); 
# 587
} 
# 589
static inline int ilogb(float a) 
# 590
{ 
# 591
return ilogbf(a); 
# 592
} 
# 594
static inline float scalbn(float a, int b) 
# 595
{ 
# 596
return scalbnf(a, b); 
# 597
} 
# 599
static inline float scalbln(float a, long b) 
# 600
{ 
# 601
return scalblnf(a, b); 
# 602
} 
# 604
static inline float exp2(float a) 
# 605
{ 
# 606
return exp2f(a); 
# 607
} 
# 609
static inline float expm1(float a) 
# 610
{ 
# 611
return expm1f(a); 
# 612
} 
# 614
static inline float log2(float a) 
# 615
{ 
# 616
return log2f(a); 
# 617
} 
# 619
static inline float log1p(float a) 
# 620
{ 
# 621
return log1pf(a); 
# 622
} 
# 624
static inline float acosh(float a) 
# 625
{ 
# 626
return acoshf(a); 
# 627
} 
# 629
static inline float asinh(float a) 
# 630
{ 
# 631
return asinhf(a); 
# 632
} 
# 634
static inline float atanh(float a) 
# 635
{ 
# 636
return atanhf(a); 
# 637
} 
# 639
static inline float hypot(float a, float b) 
# 640
{ 
# 641
return hypotf(a, b); 
# 642
} 
# 644
static inline float norm3d(float a, float b, float c) 
# 645
{ 
# 646
return norm3df(a, b, c); 
# 647
} 
# 649
static inline float norm4d(float a, float b, float c, float d) 
# 650
{ 
# 651
return norm4df(a, b, c, d); 
# 652
} 
# 654
static inline float cbrt(float a) 
# 655
{ 
# 656
return cbrtf(a); 
# 657
} 
# 659
static inline float erf(float a) 
# 660
{ 
# 661
return erff(a); 
# 662
} 
# 664
static inline float erfc(float a) 
# 665
{ 
# 666
return erfcf(a); 
# 667
} 
# 669
static inline float lgamma(float a) 
# 670
{ 
# 671
return lgammaf(a); 
# 672
} 
# 674
static inline float tgamma(float a) 
# 675
{ 
# 676
return tgammaf(a); 
# 677
} 
# 679
static inline float copysign(float a, float b) 
# 680
{ 
# 681
return copysignf(a, b); 
# 682
} 
# 684
static inline float nextafter(float a, float b) 
# 685
{ 
# 686
return nextafterf(a, b); 
# 687
} 
# 689
static inline float remainder(float a, float b) 
# 690
{ 
# 691
return remainderf(a, b); 
# 692
} 
# 694
static inline float remquo(float a, float b, int *quo) 
# 695
{ 
# 696
return remquof(a, b, quo); 
# 697
} 
# 699
static inline float round(float a) 
# 700
{ 
# 701
return roundf(a); 
# 702
} 
# 704
static inline long lround(float a) 
# 705
{ 
# 706
return lroundf(a); 
# 707
} 
# 709
static inline long long llround(float a) 
# 710
{ 
# 711
return llroundf(a); 
# 712
} 
# 714
static inline float trunc(float a) 
# 715
{ 
# 716
return truncf(a); 
# 717
} 
# 719
static inline float rint(float a) 
# 720
{ 
# 721
return rintf(a); 
# 722
} 
# 724
static inline long lrint(float a) 
# 725
{ 
# 726
return lrintf(a); 
# 727
} 
# 729
static inline long long llrint(float a) 
# 730
{ 
# 731
return llrintf(a); 
# 732
} 
# 734
static inline float nearbyint(float a) 
# 735
{ 
# 736
return nearbyintf(a); 
# 737
} 
# 739
static inline float fdim(float a, float b) 
# 740
{ 
# 741
return fdimf(a, b); 
# 742
} 
# 744
static inline float fma(float a, float b, float c) 
# 745
{ 
# 746
return fmaf(a, b, c); 
# 747
} 
# 749
static inline float fmax(float a, float b) 
# 750
{ 
# 751
return fmaxf(a, b); 
# 752
} 
# 754
static inline float fmin(float a, float b) 
# 755
{ 
# 756
return fminf(a, b); 
# 757
} 
# 765
static inline float exp10(float a) 
# 766
{ 
# 767
return exp10f(a); 
# 768
} 
# 770
static inline float rsqrt(float a) 
# 771
{ 
# 772
return rsqrtf(a); 
# 773
} 
# 775
static inline float rcbrt(float a) 
# 776
{ 
# 777
return rcbrtf(a); 
# 778
} 
# 780
static inline float sinpi(float a) 
# 781
{ 
# 782
return sinpif(a); 
# 783
} 
# 785
static inline float cospi(float a) 
# 786
{ 
# 787
return cospif(a); 
# 788
} 
# 790
static inline void sincospi(float a, float *sptr, float *cptr) 
# 791
{ 
# 792
sincospif(a, sptr, cptr); 
# 793
} 
# 795
static inline void sincos(float a, float *sptr, float *cptr) 
# 796
{ 
# 797
sincosf(a, sptr, cptr); 
# 798
} 
# 800
static inline float j0(float a) 
# 801
{ 
# 802
return j0f(a); 
# 803
} 
# 805
static inline float j1(float a) 
# 806
{ 
# 807
return j1f(a); 
# 808
} 
# 810
static inline float jn(int n, float a) 
# 811
{ 
# 812
return jnf(n, a); 
# 813
} 
# 815
static inline float y0(float a) 
# 816
{ 
# 817
return y0f(a); 
# 818
} 
# 820
static inline float y1(float a) 
# 821
{ 
# 822
return y1f(a); 
# 823
} 
# 825
static inline float yn(int n, float a) 
# 826
{ 
# 827
return ynf(n, a); 
# 828
} 
# 830
static inline float cyl_bessel_i0(float a) 
# 831
{ 
# 832
return cyl_bessel_i0f(a); 
# 833
} 
# 835
static inline float cyl_bessel_i1(float a) 
# 836
{ 
# 837
return cyl_bessel_i1f(a); 
# 838
} 
# 840
static inline float erfinv(float a) 
# 841
{ 
# 842
return erfinvf(a); 
# 843
} 
# 845
static inline float erfcinv(float a) 
# 846
{ 
# 847
return erfcinvf(a); 
# 848
} 
# 850
static inline float normcdfinv(float a) 
# 851
{ 
# 852
return normcdfinvf(a); 
# 853
} 
# 855
static inline float normcdf(float a) 
# 856
{ 
# 857
return normcdff(a); 
# 858
} 
# 860
static inline float erfcx(float a) 
# 861
{ 
# 862
return erfcxf(a); 
# 863
} 
# 865
static inline double copysign(double a, float b) 
# 866
{ 
# 867
return copysign(a, (double)b); 
# 868
} 
# 870
static inline double copysign(float a, double b) 
# 871
{ 
# 872
return copysign((double)a, b); 
# 873
} 
# 875
static inline unsigned min(unsigned a, unsigned b) 
# 876
{ 
# 877
return umin(a, b); 
# 878
} 
# 880
static inline unsigned min(int a, unsigned b) 
# 881
{ 
# 882
return umin((unsigned)a, b); 
# 883
} 
# 885
static inline unsigned min(unsigned a, int b) 
# 886
{ 
# 887
return umin(a, (unsigned)b); 
# 888
} 
# 890
static inline long min(long a, long b) 
# 891
{ 
# 897
if (sizeof(long) == sizeof(int)) { 
# 901
return (long)min((int)a, (int)b); 
# 902
} else { 
# 903
return (long)llmin((long long)a, (long long)b); 
# 904
}  
# 905
} 
# 907
static inline unsigned long min(unsigned long a, unsigned long b) 
# 908
{ 
# 912
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 916
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 917
} else { 
# 918
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 919
}  
# 920
} 
# 922
static inline unsigned long min(long a, unsigned long b) 
# 923
{ 
# 927
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 931
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 932
} else { 
# 933
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 934
}  
# 935
} 
# 937
static inline unsigned long min(unsigned long a, long b) 
# 938
{ 
# 942
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 946
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 947
} else { 
# 948
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 949
}  
# 950
} 
# 952
static inline long long min(long long a, long long b) 
# 953
{ 
# 954
return llmin(a, b); 
# 955
} 
# 957
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 958
{ 
# 959
return ullmin(a, b); 
# 960
} 
# 962
static inline unsigned long long min(long long a, unsigned long long b) 
# 963
{ 
# 964
return ullmin((unsigned long long)a, b); 
# 965
} 
# 967
static inline unsigned long long min(unsigned long long a, long long b) 
# 968
{ 
# 969
return ullmin(a, (unsigned long long)b); 
# 970
} 
# 972
static inline float min(float a, float b) 
# 973
{ 
# 974
return fminf(a, b); 
# 975
} 
# 977
static inline double min(double a, double b) 
# 978
{ 
# 979
return fmin(a, b); 
# 980
} 
# 982
static inline double min(float a, double b) 
# 983
{ 
# 984
return fmin((double)a, b); 
# 985
} 
# 987
static inline double min(double a, float b) 
# 988
{ 
# 989
return fmin(a, (double)b); 
# 990
} 
# 992
static inline unsigned max(unsigned a, unsigned b) 
# 993
{ 
# 994
return umax(a, b); 
# 995
} 
# 997
static inline unsigned max(int a, unsigned b) 
# 998
{ 
# 999
return umax((unsigned)a, b); 
# 1000
} 
# 1002
static inline unsigned max(unsigned a, int b) 
# 1003
{ 
# 1004
return umax(a, (unsigned)b); 
# 1005
} 
# 1007
static inline long max(long a, long b) 
# 1008
{ 
# 1013
if (sizeof(long) == sizeof(int)) { 
# 1017
return (long)max((int)a, (int)b); 
# 1018
} else { 
# 1019
return (long)llmax((long long)a, (long long)b); 
# 1020
}  
# 1021
} 
# 1023
static inline unsigned long max(unsigned long a, unsigned long b) 
# 1024
{ 
# 1028
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1032
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1033
} else { 
# 1034
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1035
}  
# 1036
} 
# 1038
static inline unsigned long max(long a, unsigned long b) 
# 1039
{ 
# 1043
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1047
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1048
} else { 
# 1049
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1050
}  
# 1051
} 
# 1053
static inline unsigned long max(unsigned long a, long b) 
# 1054
{ 
# 1058
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1062
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1063
} else { 
# 1064
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1065
}  
# 1066
} 
# 1068
static inline long long max(long long a, long long b) 
# 1069
{ 
# 1070
return llmax(a, b); 
# 1071
} 
# 1073
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 1074
{ 
# 1075
return ullmax(a, b); 
# 1076
} 
# 1078
static inline unsigned long long max(long long a, unsigned long long b) 
# 1079
{ 
# 1080
return ullmax((unsigned long long)a, b); 
# 1081
} 
# 1083
static inline unsigned long long max(unsigned long long a, long long b) 
# 1084
{ 
# 1085
return ullmax(a, (unsigned long long)b); 
# 1086
} 
# 1088
static inline float max(float a, float b) 
# 1089
{ 
# 1090
return fmaxf(a, b); 
# 1091
} 
# 1093
static inline double max(double a, double b) 
# 1094
{ 
# 1095
return fmax(a, b); 
# 1096
} 
# 1098
static inline double max(float a, double b) 
# 1099
{ 
# 1100
return fmax((double)a, b); 
# 1101
} 
# 1103
static inline double max(double a, float b) 
# 1104
{ 
# 1105
return fmax(a, (double)b); 
# 1106
} 
# 1117 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/math_functions.hpp"
inline int min(int a, int b) 
# 1118
{ 
# 1119
return (a < b) ? a : b; 
# 1120
} 
# 1122
inline unsigned umin(unsigned a, unsigned b) 
# 1123
{ 
# 1124
return (a < b) ? a : b; 
# 1125
} 
# 1127
inline long long llmin(long long a, long long b) 
# 1128
{ 
# 1129
return (a < b) ? a : b; 
# 1130
} 
# 1132
inline unsigned long long ullmin(unsigned long long a, unsigned long long 
# 1133
b) 
# 1134
{ 
# 1135
return (a < b) ? a : b; 
# 1136
} 
# 1138
inline int max(int a, int b) 
# 1139
{ 
# 1140
return (a > b) ? a : b; 
# 1141
} 
# 1143
inline unsigned umax(unsigned a, unsigned b) 
# 1144
{ 
# 1145
return (a > b) ? a : b; 
# 1146
} 
# 1148
inline long long llmax(long long a, long long b) 
# 1149
{ 
# 1150
return (a > b) ? a : b; 
# 1151
} 
# 1153
inline unsigned long long ullmax(unsigned long long a, unsigned long long 
# 1154
b) 
# 1155
{ 
# 1156
return (a > b) ? a : b; 
# 1157
} 
# 77 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 78
struct surface : public surfaceReference { 
# 81
surface() 
# 82
{ 
# 83
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 84
} 
# 86
surface(cudaChannelFormatDesc desc) 
# 87
{ 
# 88
(channelDesc) = desc; 
# 89
} 
# 91
}; 
# 93
template< int dim> 
# 94
struct surface< void, dim>  : public surfaceReference { 
# 97
surface() 
# 98
{ 
# 99
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 100
} 
# 102
}; 
# 77 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 78
struct texture : public textureReference { 
# 81
texture(int norm = 0, cudaTextureFilterMode 
# 82
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 83
aMode = cudaAddressModeClamp) 
# 84
{ 
# 85
(normalized) = norm; 
# 86
(filterMode) = fMode; 
# 87
((addressMode)[0]) = aMode; 
# 88
((addressMode)[1]) = aMode; 
# 89
((addressMode)[2]) = aMode; 
# 90
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 91
(sRGB) = 0; 
# 92
} 
# 94
texture(int norm, cudaTextureFilterMode 
# 95
fMode, cudaTextureAddressMode 
# 96
aMode, cudaChannelFormatDesc 
# 97
desc) 
# 98
{ 
# 99
(normalized) = norm; 
# 100
(filterMode) = fMode; 
# 101
((addressMode)[0]) = aMode; 
# 102
((addressMode)[1]) = aMode; 
# 103
((addressMode)[2]) = aMode; 
# 104
(channelDesc) = desc; 
# 105
(sRGB) = 0; 
# 106
} 
# 108
}; 
# 79 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
extern "C" {
# 3201 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
}
# 3209
__attribute__((unused)) static inline int mulhi(int a, int b); 
# 3211
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b); 
# 3213
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b); 
# 3215
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b); 
# 3217
__attribute__((unused)) static inline long long mul64hi(long long a, long long b); 
# 3219
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b); 
# 3221
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b); 
# 3223
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b); 
# 3225
__attribute__((unused)) static inline int float_as_int(float a); 
# 3227
__attribute__((unused)) static inline float int_as_float(int a); 
# 3229
__attribute__((unused)) static inline unsigned float_as_uint(float a); 
# 3231
__attribute__((unused)) static inline float uint_as_float(unsigned a); 
# 3233
__attribute__((unused)) static inline float saturate(float a); 
# 3235
__attribute__((unused)) static inline int mul24(int a, int b); 
# 3237
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b); 
# 3239
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
# 3241
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
# 3243
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
# 3245
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 80 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 81
{int volatile ___ = 1;(void)a;(void)b;
# 83
::exit(___);}
#if 0
# 81
{ 
# 82
return __mulhi(a, b); 
# 83
} 
#endif
# 85 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 86
{int volatile ___ = 1;(void)a;(void)b;
# 88
::exit(___);}
#if 0
# 86
{ 
# 87
return __umulhi(a, b); 
# 88
} 
#endif
# 90 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 91
{int volatile ___ = 1;(void)a;(void)b;
# 93
::exit(___);}
#if 0
# 91
{ 
# 92
return __umulhi((unsigned)a, b); 
# 93
} 
#endif
# 95 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 96
{int volatile ___ = 1;(void)a;(void)b;
# 98
::exit(___);}
#if 0
# 96
{ 
# 97
return __umulhi(a, (unsigned)b); 
# 98
} 
#endif
# 100 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 101
{int volatile ___ = 1;(void)a;(void)b;
# 103
::exit(___);}
#if 0
# 101
{ 
# 102
return __mul64hi(a, b); 
# 103
} 
#endif
# 105 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 106
{int volatile ___ = 1;(void)a;(void)b;
# 108
::exit(___);}
#if 0
# 106
{ 
# 107
return __umul64hi(a, b); 
# 108
} 
#endif
# 110 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 111
{int volatile ___ = 1;(void)a;(void)b;
# 113
::exit(___);}
#if 0
# 111
{ 
# 112
return __umul64hi((unsigned long long)a, b); 
# 113
} 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 116
{int volatile ___ = 1;(void)a;(void)b;
# 118
::exit(___);}
#if 0
# 116
{ 
# 117
return __umul64hi(a, (unsigned long long)b); 
# 118
} 
#endif
# 120 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float_as_int(float a) 
# 121
{int volatile ___ = 1;(void)a;
# 123
::exit(___);}
#if 0
# 121
{ 
# 122
return __float_as_int(a); 
# 123
} 
#endif
# 125 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int_as_float(int a) 
# 126
{int volatile ___ = 1;(void)a;
# 128
::exit(___);}
#if 0
# 126
{ 
# 127
return __int_as_float(a); 
# 128
} 
#endif
# 130 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float_as_uint(float a) 
# 131
{int volatile ___ = 1;(void)a;
# 133
::exit(___);}
#if 0
# 131
{ 
# 132
return __float_as_uint(a); 
# 133
} 
#endif
# 135 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint_as_float(unsigned a) 
# 136
{int volatile ___ = 1;(void)a;
# 138
::exit(___);}
#if 0
# 136
{ 
# 137
return __uint_as_float(a); 
# 138
} 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float saturate(float a) 
# 140
{int volatile ___ = 1;(void)a;
# 142
::exit(___);}
#if 0
# 140
{ 
# 141
return __saturatef(a); 
# 142
} 
#endif
# 144 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 145
{int volatile ___ = 1;(void)a;(void)b;
# 147
::exit(___);}
#if 0
# 145
{ 
# 146
return __mul24(a, b); 
# 147
} 
#endif
# 149 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 150
{int volatile ___ = 1;(void)a;(void)b;
# 152
::exit(___);}
#if 0
# 150
{ 
# 151
return __umul24(a, b); 
# 152
} 
#endif
# 154 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode) 
# 155
{int volatile ___ = 1;(void)a;(void)mode;
# 160
::exit(___);}
#if 0
# 155
{ 
# 156
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 160
} 
#endif
# 162 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode) 
# 163
{int volatile ___ = 1;(void)a;(void)mode;
# 168
::exit(___);}
#if 0
# 163
{ 
# 164
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 168
} 
#endif
# 170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode) 
# 171
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 171
{ 
# 172
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 176
} 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 184
::exit(___);}
#if 0
# 179
{ 
# 180
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 184
} 
#endif
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 121 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 121
{ } 
#endif
# 123 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 125 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 125
{ } 
#endif
# 127 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 131 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 131
{ } 
#endif
# 133 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 133
{ } 
#endif
# 135 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 135
{ } 
#endif
# 137 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 141
{ } 
#endif
# 143 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 143
{ } 
#endif
# 145 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 145
{ } 
#endif
# 147 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 147
{ } 
#endif
# 173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
extern "C" {
# 182
}
# 191 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 199 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_atomic_functions.h"
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 199
{ } 
#endif
# 77 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.h"
extern "C" {
# 1129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.h"
}
# 1137
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1139
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1141
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1143
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1145
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1147
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1149
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1151
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1153
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1155
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1157
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1159
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1161
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 83 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 84
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 89
::exit(___);}
#if 0
# 84
{ 
# 85
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 89
} 
#endif
# 91 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 92
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 97
::exit(___);}
#if 0
# 92
{ 
# 93
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 97
} 
#endif
# 99 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 100
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 105
::exit(___);}
#if 0
# 100
{ 
# 101
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 105
} 
#endif
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 108
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 113
::exit(___);}
#if 0
# 108
{ 
# 109
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 113
} 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 116
{int volatile ___ = 1;(void)a;(void)mode;
# 121
::exit(___);}
#if 0
# 116
{ 
# 117
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 121
} 
#endif
# 123 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 124
{int volatile ___ = 1;(void)a;(void)mode;
# 129
::exit(___);}
#if 0
# 124
{ 
# 125
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 129
} 
#endif
# 131 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 132
{int volatile ___ = 1;(void)a;(void)mode;
# 137
::exit(___);}
#if 0
# 132
{ 
# 133
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 137
} 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 140
{int volatile ___ = 1;(void)a;(void)mode;
# 145
::exit(___);}
#if 0
# 140
{ 
# 141
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 145
} 
#endif
# 147 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 148
{int volatile ___ = 1;(void)a;(void)mode;
# 153
::exit(___);}
#if 0
# 148
{ 
# 149
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 153
} 
#endif
# 155 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 156
{int volatile ___ = 1;(void)a;(void)mode;
# 161
::exit(___);}
#if 0
# 156
{ 
# 157
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 161
} 
#endif
# 163 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 164
{int volatile ___ = 1;(void)a;(void)mode;
# 166
::exit(___);}
#if 0
# 164
{ 
# 165
return (double)a; 
# 166
} 
#endif
# 168 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 169
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 169
{ 
# 170
return (double)a; 
# 171
} 
#endif
# 173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 90 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 90
{ } 
#endif
# 101 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 304 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 304
{ } 
#endif
# 307 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 307
{ } 
#endif
# 310 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 310
{ } 
#endif
# 313 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 313
{ } 
#endif
# 316 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 316
{ } 
#endif
# 319 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 319
{ } 
#endif
# 322 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 322
{ } 
#endif
# 325 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 325
{ } 
#endif
# 328 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 328
{ } 
#endif
# 331 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 331
{ } 
#endif
# 334 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 334
{ } 
#endif
# 337 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 337
{ } 
#endif
# 340 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 340
{ } 
#endif
# 343 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 343
{ } 
#endif
# 346 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 346
{ } 
#endif
# 349 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 349
{ } 
#endif
# 352 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 352
{ } 
#endif
# 355 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 355
{ } 
#endif
# 358 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 358
{ } 
#endif
# 361 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 361
{ } 
#endif
# 364 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 364
{ } 
#endif
# 367 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 367
{ } 
#endif
# 370 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 370
{ } 
#endif
# 373 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 373
{ } 
#endif
# 376 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 376
{ } 
#endif
# 379 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 379
{ } 
#endif
# 382 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 382
{ } 
#endif
# 385 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 385
{ } 
#endif
# 388 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 388
{ } 
#endif
# 391 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 391
{ } 
#endif
# 394 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 394
{ } 
#endif
# 397 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 397
{ } 
#endif
# 400 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 400
{ } 
#endif
# 403 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 403
{ } 
#endif
# 406 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 406
{ } 
#endif
# 409 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 409
{ } 
#endif
# 412 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 412
{ } 
#endif
# 415 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 415
{ } 
#endif
# 418 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 418
{ } 
#endif
# 421 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 421
{ } 
#endif
# 424 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 424
{ } 
#endif
# 427 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 427
{ } 
#endif
# 430 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 430
{ } 
#endif
# 433 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 433
{ } 
#endif
# 436 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 436
{ } 
#endif
# 439 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 440
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 440
{ } 
#endif
# 443 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 444
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 444
{ } 
#endif
# 447 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 448
compare, unsigned long long 
# 449
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 449
{ } 
#endif
# 452 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 453
compare, unsigned long long 
# 454
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 454
{ } 
#endif
# 457 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 457
{ } 
#endif
# 460 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 460
{ } 
#endif
# 463 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 463
{ } 
#endif
# 466 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 466
{ } 
#endif
# 469 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 469
{ } 
#endif
# 472 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 472
{ } 
#endif
# 475 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 475
{ } 
#endif
# 478 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 478
{ } 
#endif
# 481 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 481
{ } 
#endif
# 484 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 484
{ } 
#endif
# 487 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 487
{ } 
#endif
# 490 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 490
{ } 
#endif
# 493 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 493
{ } 
#endif
# 496 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 496
{ } 
#endif
# 499 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 499
{ } 
#endif
# 502 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 502
{ } 
#endif
# 505 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 505
{ } 
#endif
# 508 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 508
{ } 
#endif
# 511 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 511
{ } 
#endif
# 514 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 514
{ } 
#endif
# 517 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 517
{ } 
#endif
# 520 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 520
{ } 
#endif
# 523 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 523
{ } 
#endif
# 526 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 526
{ } 
#endif
# 92 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
extern "C" {
# 1477 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
}
# 1484
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1484
{ } 
#endif
# 1486 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1486
{ } 
#endif
# 1488 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1488
{ } 
#endif
# 1490 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1490
{ } 
#endif
# 1497 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1497
{ } 
#endif
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 115
{ } 
#endif
# 123 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 135 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 145
{ } 
#endif
# 147 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 150 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 153 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 156 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 160 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 160
{ } 
#endif
# 161 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 161
{ } 
#endif
# 163 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 166 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 169 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 172 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 176
{ } 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 181 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 184 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 190 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 198 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 199
{ } 
#endif
# 201 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 202
{ } 
#endif
# 204 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 205
{ } 
#endif
# 207 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 208
{ } 
#endif
# 210 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 211
{ } 
#endif
# 213 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 214
{ } 
#endif
# 216 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 217
{ } 
#endif
# 219 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 220
{ } 
#endif
# 89 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 121
{ } 
#endif
# 125 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 153 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 157
{ } 
#endif
# 161 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 161
{ } 
#endif
# 162 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 164 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 177 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 189 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 193
{ } 
#endif
# 197 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 197
{ } 
#endif
# 198 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 200 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 213 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 222 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 222
{ } 
#endif
# 223 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 225 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 228 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 228
{ } 
#endif
# 229 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 229
{ } 
#endif
# 246 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 246
{ } 
#endif
# 258 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 258
{ } 
#endif
# 271 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 271
{ } 
#endif
# 283 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 283
{ } 
#endif
# 91 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 100 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 101
{ } 
#endif
# 108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 112
{ } 
#endif
# 83 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 83
{ } 
#endif
# 84 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 84
{ } 
#endif
# 85 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 85
{ } 
#endif
# 86 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 86
{ } 
#endif
# 87 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 88
{ } 
#endif
# 89 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 101
{ } 
#endif
# 116 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 117
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 118
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 122
::exit(___);}
#if 0
# 118
{ 
# 122
} 
#endif
# 124 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 125
__attribute((always_inline)) __attribute__((unused)) static inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 126
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 132
::exit(___);}
#if 0
# 126
{ 
# 132
} 
#endif
# 134 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 135
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 136
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 140
::exit(___);}
#if 0
# 136
{ 
# 140
} 
#endif
# 143 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 144
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 145
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 149
::exit(___);}
#if 0
# 145
{ 
# 149
} 
#endif
# 151 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 152
__attribute((always_inline)) __attribute__((unused)) static inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 153
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 159
::exit(___);}
#if 0
# 153
{ 
# 159
} 
#endif
# 161 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 162
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 163
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 167
::exit(___);}
#if 0
# 163
{ 
# 167
} 
#endif
# 170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 171
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 172
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 176
::exit(___);}
#if 0
# 172
{ 
# 176
} 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 179
__attribute((always_inline)) __attribute__((unused)) static inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 180
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 186
::exit(___);}
#if 0
# 180
{ 
# 186
} 
#endif
# 188 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 189
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 190
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 194
::exit(___);}
#if 0
# 190
{ 
# 194
} 
#endif
# 198 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 199
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 200
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 204
::exit(___);}
#if 0
# 200
{ 
# 204
} 
#endif
# 206 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 207
__attribute((always_inline)) __attribute__((unused)) static inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 208
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 214
::exit(___);}
#if 0
# 208
{ 
# 214
} 
#endif
# 217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 218
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 219
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 223
::exit(___);}
#if 0
# 219
{ 
# 223
} 
#endif
# 226 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 227
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 228
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 232
::exit(___);}
#if 0
# 228
{ 
# 232
} 
#endif
# 234 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 235
__attribute((always_inline)) __attribute__((unused)) static inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 236
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 242
::exit(___);}
#if 0
# 236
{ 
# 242
} 
#endif
# 245 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 246
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 247
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 251
::exit(___);}
#if 0
# 247
{ 
# 251
} 
#endif
# 254 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 255
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 256
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 260
::exit(___);}
#if 0
# 256
{ 
# 260
} 
#endif
# 262 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 263
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 264
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 271
::exit(___);}
#if 0
# 264
{ 
# 271
} 
#endif
# 273 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 274
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 275
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 279
::exit(___);}
#if 0
# 275
{ 
# 279
} 
#endif
# 282 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 283
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 284
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 288
::exit(___);}
#if 0
# 284
{ 
# 288
} 
#endif
# 290 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 291
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 292
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 298
::exit(___);}
#if 0
# 292
{ 
# 298
} 
#endif
# 300 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 301
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 302
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 306
::exit(___);}
#if 0
# 302
{ 
# 306
} 
#endif
# 309 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 310
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 311
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 315
::exit(___);}
#if 0
# 311
{ 
# 315
} 
#endif
# 317 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 318
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 319
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 323
::exit(___);}
#if 0
# 319
{ 
# 323
} 
#endif
# 327 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 328
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 329
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 333
::exit(___);}
#if 0
# 329
{ 
# 333
} 
#endif
# 335 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 336
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 337
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 341
::exit(___);}
#if 0
# 337
{ 
# 341
} 
#endif
# 344 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 345
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 346
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 350
::exit(___);}
#if 0
# 346
{ 
# 350
} 
#endif
# 352 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 353
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 354
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 358
::exit(___);}
#if 0
# 354
{ 
# 358
} 
#endif
# 361 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 362
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 363
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 367
::exit(___);}
#if 0
# 363
{ 
# 367
} 
#endif
# 369 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 370
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 371
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 375
::exit(___);}
#if 0
# 371
{ 
# 375
} 
#endif
# 378 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 379
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 380
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 384
::exit(___);}
#if 0
# 380
{ 
# 384
} 
#endif
# 386 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 387
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 388
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 392
::exit(___);}
#if 0
# 388
{ 
# 392
} 
#endif
# 395 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 396
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 397
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 401
::exit(___);}
#if 0
# 397
{ 
# 401
} 
#endif
# 403 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 404
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 405
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 409
::exit(___);}
#if 0
# 405
{ 
# 409
} 
#endif
# 413 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 414
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 415
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 419
::exit(___);}
#if 0
# 415
{ 
# 419
} 
#endif
# 421 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_functions.h"
template< class T> 
# 422
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 423
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 427
::exit(___);}
#if 0
# 423
{ 
# 427
} 
#endif
# 68 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 69
struct __nv_tex_rmet_ret { }; 
# 71
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
# 72
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
# 73
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
# 74
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
# 75
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
# 76
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
# 77
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
# 78
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
# 79
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
# 81
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
# 82
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
# 83
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
# 84
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
# 85
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
# 86
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
# 87
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
# 88
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
# 90
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
# 91
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
# 92
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
# 93
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
# 94
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
# 95
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
# 96
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
# 97
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
# 109 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 110
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 111
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 112
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 115
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 127 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 128
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
# 129
{int volatile ___ = 1;(void)t;(void)x;
# 135
::exit(___);}
#if 0
# 129
{ 
# 135
} 
#endif
# 137 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 138
struct __nv_tex_rmnf_ret { }; 
# 140
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 141
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 142
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 143
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 144
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 145
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 146
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 147
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 148
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 149
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 150
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 151
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 152
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 153
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 154
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 155
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 156
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 158
template< class T> 
# 159
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 160
{int volatile ___ = 1;(void)t;(void)x;
# 167
::exit(___);}
#if 0
# 160
{ 
# 167
} 
#endif
# 170 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 171
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
# 172
{int volatile ___ = 1;(void)t;(void)x;
# 178
::exit(___);}
#if 0
# 172
{ 
# 178
} 
#endif
# 180 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 181
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 182
{int volatile ___ = 1;(void)t;(void)x;
# 189
::exit(___);}
#if 0
# 182
{ 
# 189
} 
#endif
# 193 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 194
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
# 195
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 202
::exit(___);}
#if 0
# 195
{ 
# 202
} 
#endif
# 204 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 205
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 206
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 213
::exit(___);}
#if 0
# 206
{ 
# 213
} 
#endif
# 217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 218
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
# 219
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 225
::exit(___);}
#if 0
# 219
{ 
# 225
} 
#endif
# 227 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 228
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 229
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 236
::exit(___);}
#if 0
# 229
{ 
# 236
} 
#endif
# 240 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 241
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 242
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 248
::exit(___);}
#if 0
# 242
{ 
# 248
} 
#endif
# 250 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 251
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 252
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 259
::exit(___);}
#if 0
# 252
{ 
# 259
} 
#endif
# 262 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 263
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 264
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 270
::exit(___);}
#if 0
# 264
{ 
# 270
} 
#endif
# 272 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 273
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 274
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 281
::exit(___);}
#if 0
# 274
{ 
# 281
} 
#endif
# 284 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 285
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 286
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 292
::exit(___);}
#if 0
# 286
{ 
# 292
} 
#endif
# 294 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 295
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 296
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 303
::exit(___);}
#if 0
# 296
{ 
# 303
} 
#endif
# 306 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 307
struct __nv_tex2dgather_ret { }; 
# 308
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 309
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 310
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 311
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 312
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 313
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 314
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 315
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 316
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 317
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 318
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 320
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 321
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 322
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 323
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 324
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 325
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 326
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 327
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 328
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 329
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 331
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 332
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 333
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 334
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 335
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 336
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 337
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 338
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 339
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 340
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 342
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 343
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 344
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 345
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 346
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 348
template< class T> 
# 349
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 350
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 357
::exit(___);}
#if 0
# 350
{ 
# 357
} 
#endif
# 360 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
# 361
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
# 362
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
# 363
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
# 364
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
# 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
# 366
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
# 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
# 368
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
# 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
# 370
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
# 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 372
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
# 373
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
# 374
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
# 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
# 376
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
# 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
# 378
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
# 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
# 380
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
# 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 383
template< class T> 
# 384
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_rmnf_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 385
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 392
::exit(___);}
#if 0
# 385
{ 
# 392
} 
#endif
# 396 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 397
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
# 398
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 404
::exit(___);}
#if 0
# 398
{ 
# 404
} 
#endif
# 406 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 407
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
# 408
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 415
::exit(___);}
#if 0
# 408
{ 
# 415
} 
#endif
# 418 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 419
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
# 420
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 426
::exit(___);}
#if 0
# 420
{ 
# 426
} 
#endif
# 428 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 429
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
# 430
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 437
::exit(___);}
#if 0
# 430
{ 
# 437
} 
#endif
# 440 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 441
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
# 442
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 448
::exit(___);}
#if 0
# 442
{ 
# 448
} 
#endif
# 450 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 451
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
# 452
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 459
::exit(___);}
#if 0
# 452
{ 
# 459
} 
#endif
# 462 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 463
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
# 464
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 470
::exit(___);}
#if 0
# 464
{ 
# 470
} 
#endif
# 472 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 473
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
# 474
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 481
::exit(___);}
#if 0
# 474
{ 
# 481
} 
#endif
# 484 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 485
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 486
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 492
::exit(___);}
#if 0
# 486
{ 
# 492
} 
#endif
# 494 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 495
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 496
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 503
::exit(___);}
#if 0
# 496
{ 
# 503
} 
#endif
# 506 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 507
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 508
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 514
::exit(___);}
#if 0
# 508
{ 
# 514
} 
#endif
# 516 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 517
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 518
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 525
::exit(___);}
#if 0
# 518
{ 
# 525
} 
#endif
# 529 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 530
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 531
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 537
::exit(___);}
#if 0
# 531
{ 
# 537
} 
#endif
# 539 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 540
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 541
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 548
::exit(___);}
#if 0
# 541
{ 
# 548
} 
#endif
# 552 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 553
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
# 554
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 560
::exit(___);}
#if 0
# 554
{ 
# 560
} 
#endif
# 562 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 563
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
# 564
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 571
::exit(___);}
#if 0
# 564
{ 
# 571
} 
#endif
# 575 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 576
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 577
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 583
::exit(___);}
#if 0
# 577
{ 
# 583
} 
#endif
# 585 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 586
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 587
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 594
::exit(___);}
#if 0
# 587
{ 
# 594
} 
#endif
# 598 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 599
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 600
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 606
::exit(___);}
#if 0
# 600
{ 
# 606
} 
#endif
# 608 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 609
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 610
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 617
::exit(___);}
#if 0
# 610
{ 
# 617
} 
#endif
# 621 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 622
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
# 623
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 629
::exit(___);}
#if 0
# 623
{ 
# 629
} 
#endif
# 631 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 632
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
# 633
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 640
::exit(___);}
#if 0
# 633
{ 
# 640
} 
#endif
# 644 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 645
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 646
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 652
::exit(___);}
#if 0
# 646
{ 
# 652
} 
#endif
# 654 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 655
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 656
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 663
::exit(___);}
#if 0
# 656
{ 
# 663
} 
#endif
# 666 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 667
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
# 668
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 674
::exit(___);}
#if 0
# 668
{ 
# 674
} 
#endif
# 676 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 677
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
# 678
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 685
::exit(___);}
#if 0
# 678
{ 
# 685
} 
#endif
# 688 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 689
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 690
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 696
::exit(___);}
#if 0
# 690
{ 
# 696
} 
#endif
# 698 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 699
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 700
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 707
::exit(___);}
#if 0
# 700
{ 
# 707
} 
#endif
# 710 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 711
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 712
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 718
::exit(___);}
#if 0
# 712
{ 
# 718
} 
#endif
# 720 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_fetch_functions.h"
template< class T> 
# 721
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 722
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 729
::exit(___);}
#if 0
# 722
{ 
# 729
} 
#endif
# 61 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
# 62
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 63
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 64
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 65
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 66
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 97 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 98
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 99
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 100
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 104
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 105
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 106
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 110
::exit(___);}
#if 0
# 106
{ 
# 110
} 
#endif
# 112 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 113
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 114
{int volatile ___ = 1;(void)texObject;(void)x;
# 120
::exit(___);}
#if 0
# 114
{ 
# 120
} 
#endif
# 122 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 123
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 124
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 128
::exit(___);}
#if 0
# 124
{ 
# 128
} 
#endif
# 131 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 132
tex1D(cudaTextureObject_t texObject, float x) 
# 133
{int volatile ___ = 1;(void)texObject;(void)x;
# 139
::exit(___);}
#if 0
# 133
{ 
# 139
} 
#endif
# 142 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 143
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 144
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 148
::exit(___);}
#if 0
# 144
{ 
# 148
} 
#endif
# 150 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 151
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 152
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 158
::exit(___);}
#if 0
# 152
{ 
# 158
} 
#endif
# 160 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 161
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 162
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 166
::exit(___);}
#if 0
# 162
{ 
# 166
} 
#endif
# 168 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 169
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 170
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 176
::exit(___);}
#if 0
# 170
{ 
# 176
} 
#endif
# 178 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 179
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 180
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 184
::exit(___);}
#if 0
# 180
{ 
# 184
} 
#endif
# 186 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 187
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 188
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 194
::exit(___);}
#if 0
# 188
{ 
# 194
} 
#endif
# 196 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 197
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 198
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 202
::exit(___);}
#if 0
# 198
{ 
# 202
} 
#endif
# 204 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 205
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 206
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 212
::exit(___);}
#if 0
# 206
{ 
# 212
} 
#endif
# 215 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 216
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 217
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 221
::exit(___);}
#if 0
# 217
{ 
# 221
} 
#endif
# 224 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 225
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 226
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 232
::exit(___);}
#if 0
# 226
{ 
# 232
} 
#endif
# 235 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 236
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 237
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 241
::exit(___);}
#if 0
# 237
{ 
# 241
} 
#endif
# 243 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 244
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 245
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 251
::exit(___);}
#if 0
# 245
{ 
# 251
} 
#endif
# 253 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 254
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 255
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 259
::exit(___);}
#if 0
# 255
{ 
# 259
} 
#endif
# 261 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 262
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 263
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 269
::exit(___);}
#if 0
# 263
{ 
# 269
} 
#endif
# 273 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 274
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 275
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 279
::exit(___);}
#if 0
# 275
{ 
# 279
} 
#endif
# 281 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 282
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 283
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 289
::exit(___);}
#if 0
# 283
{ 
# 289
} 
#endif
# 292 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 293
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 294
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 298
::exit(___);}
#if 0
# 294
{ 
# 298
} 
#endif
# 300 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 301
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 302
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 308
::exit(___);}
#if 0
# 302
{ 
# 308
} 
#endif
# 311 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 312
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 313
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 317
::exit(___);}
#if 0
# 313
{ 
# 317
} 
#endif
# 319 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 320
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 321
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 327
::exit(___);}
#if 0
# 321
{ 
# 327
} 
#endif
# 330 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 331
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 332
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 336
::exit(___);}
#if 0
# 332
{ 
# 336
} 
#endif
# 338 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 339
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 340
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 346
::exit(___);}
#if 0
# 340
{ 
# 346
} 
#endif
# 349 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 350
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 351
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 355
::exit(___);}
#if 0
# 351
{ 
# 355
} 
#endif
# 357 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 358
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 359
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 365
::exit(___);}
#if 0
# 359
{ 
# 365
} 
#endif
# 368 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 369
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 370
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 374
::exit(___);}
#if 0
# 370
{ 
# 374
} 
#endif
# 376 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 377
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 378
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 384
::exit(___);}
#if 0
# 378
{ 
# 384
} 
#endif
# 387 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 388
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 389
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 393
::exit(___);}
#if 0
# 389
{ 
# 393
} 
#endif
# 395 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 396
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 397
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 403
::exit(___);}
#if 0
# 397
{ 
# 403
} 
#endif
# 405 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 406
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 407
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 411
::exit(___);}
#if 0
# 407
{ 
# 411
} 
#endif
# 413 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 414
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 415
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 421
::exit(___);}
#if 0
# 415
{ 
# 421
} 
#endif
# 423 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 424
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 425
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 429
::exit(___);}
#if 0
# 425
{ 
# 429
} 
#endif
# 431 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 432
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 433
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 439
::exit(___);}
#if 0
# 433
{ 
# 439
} 
#endif
# 442 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 443
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 444
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 449
::exit(___);}
#if 0
# 444
{ 
# 449
} 
#endif
# 451 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 452
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 453
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 459
::exit(___);}
#if 0
# 453
{ 
# 459
} 
#endif
# 462 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 463
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 464
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 468
::exit(___);}
#if 0
# 464
{ 
# 468
} 
#endif
# 470 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 471
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 472
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 478
::exit(___);}
#if 0
# 472
{ 
# 478
} 
#endif
# 481 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 482
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 483
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 487
::exit(___);}
#if 0
# 483
{ 
# 487
} 
#endif
# 489 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 490
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 491
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 497
::exit(___);}
#if 0
# 491
{ 
# 497
} 
#endif
# 500 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 501
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 502
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 506
::exit(___);}
#if 0
# 502
{ 
# 506
} 
#endif
# 508 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 509
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 510
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 516
::exit(___);}
#if 0
# 510
{ 
# 516
} 
#endif
# 519 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 520
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 521
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 525
::exit(___);}
#if 0
# 521
{ 
# 525
} 
#endif
# 527 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 528
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 529
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 535
::exit(___);}
#if 0
# 529
{ 
# 535
} 
#endif
# 60 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
# 61
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 78
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 79
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 88
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 89
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 96
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 97
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 100
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 101
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 102
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 106
::exit(___);}
#if 0
# 102
{ 
# 106
} 
#endif
# 108 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 109
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 110
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 116
::exit(___);}
#if 0
# 110
{ 
# 116
} 
#endif
# 118 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 119
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 124
::exit(___);}
#if 0
# 120
{ 
# 124
} 
#endif
# 126 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 127
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 128
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 134
::exit(___);}
#if 0
# 128
{ 
# 134
} 
#endif
# 137 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 138
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 139
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 143
::exit(___);}
#if 0
# 139
{ 
# 143
} 
#endif
# 145 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 146
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 147
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 153
::exit(___);}
#if 0
# 147
{ 
# 153
} 
#endif
# 155 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 156
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 157
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 161
::exit(___);}
#if 0
# 157
{ 
# 161
} 
#endif
# 163 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 164
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 165
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 171
::exit(___);}
#if 0
# 165
{ 
# 171
} 
#endif
# 173 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 174
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 175
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 179
::exit(___);}
#if 0
# 175
{ 
# 179
} 
#endif
# 181 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 182
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 183
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 189
::exit(___);}
#if 0
# 183
{ 
# 189
} 
#endif
# 191 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 192
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 193
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 197
::exit(___);}
#if 0
# 193
{ 
# 197
} 
#endif
# 199 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 200
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 201
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 207
::exit(___);}
#if 0
# 201
{ 
# 207
} 
#endif
# 209 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 210
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 211
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 215
::exit(___);}
#if 0
# 211
{ 
# 215
} 
#endif
# 217 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 218
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 219
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 225
::exit(___);}
#if 0
# 219
{ 
# 225
} 
#endif
# 227 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 228
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 229
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 233
::exit(___);}
#if 0
# 229
{ 
# 233
} 
#endif
# 235 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 236
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 237
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 241
::exit(___);}
#if 0
# 237
{ 
# 241
} 
#endif
# 243 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 244
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 245
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 249
::exit(___);}
#if 0
# 245
{ 
# 249
} 
#endif
# 251 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 252
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 253
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 257
::exit(___);}
#if 0
# 253
{ 
# 257
} 
#endif
# 259 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 260
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 261
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 265
::exit(___);}
#if 0
# 261
{ 
# 265
} 
#endif
# 267 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 268
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 269
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 273
::exit(___);}
#if 0
# 269
{ 
# 273
} 
#endif
# 275 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 276
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 277
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 281
::exit(___);}
#if 0
# 277
{ 
# 281
} 
#endif
# 3280 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/crt/device_functions.h"
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, void * stream = 0); 
# 68 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 185 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 186
cudaLaunchKernel(const T *
# 187
func, dim3 
# 188
gridDim, dim3 
# 189
blockDim, void **
# 190
args, size_t 
# 191
sharedMem = 0, cudaStream_t 
# 192
stream = 0) 
# 194
{ 
# 195
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 196
} 
# 245 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 246
cudaLaunchCooperativeKernel(const T *
# 247
func, dim3 
# 248
gridDim, dim3 
# 249
blockDim, void **
# 250
args, size_t 
# 251
sharedMem = 0, cudaStream_t 
# 252
stream = 0) 
# 254
{ 
# 255
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 256
} 
# 283 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 284
cudaSetupArgument(T 
# 285
arg, size_t 
# 286
offset) 
# 288
{ 
# 289
return ::cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 290
} 
# 322 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 323
event, unsigned 
# 324
flags) 
# 326
{ 
# 327
return ::cudaEventCreateWithFlags(event, flags); 
# 328
} 
# 385 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 386
ptr, size_t 
# 387
size, unsigned 
# 388
flags) 
# 390
{ 
# 391
return ::cudaHostAlloc(ptr, size, flags); 
# 392
} 
# 394
template< class T> static inline cudaError_t 
# 395
cudaHostAlloc(T **
# 396
ptr, size_t 
# 397
size, unsigned 
# 398
flags) 
# 400
{ 
# 401
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 402
} 
# 404
template< class T> static inline cudaError_t 
# 405
cudaHostGetDevicePointer(T **
# 406
pDevice, void *
# 407
pHost, unsigned 
# 408
flags) 
# 410
{ 
# 411
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 412
} 
# 512 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 513
cudaMallocManaged(T **
# 514
devPtr, size_t 
# 515
size, unsigned 
# 516
flags = 1) 
# 518
{ 
# 519
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 520
} 
# 600 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 601
cudaStreamAttachMemAsync(cudaStream_t 
# 602
stream, T *
# 603
devPtr, size_t 
# 604
length = 0, unsigned 
# 605
flags = 4) 
# 607
{ 
# 608
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 609
} 
# 611
template< class T> inline cudaError_t 
# 612
cudaMalloc(T **
# 613
devPtr, size_t 
# 614
size) 
# 616
{ 
# 617
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 618
} 
# 620
template< class T> static inline cudaError_t 
# 621
cudaMallocHost(T **
# 622
ptr, size_t 
# 623
size, unsigned 
# 624
flags = 0) 
# 626
{ 
# 627
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 628
} 
# 630
template< class T> static inline cudaError_t 
# 631
cudaMallocPitch(T **
# 632
devPtr, size_t *
# 633
pitch, size_t 
# 634
width, size_t 
# 635
height) 
# 637
{ 
# 638
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 639
} 
# 676 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 677
cudaMemcpyToSymbol(const T &
# 678
symbol, const void *
# 679
src, size_t 
# 680
count, size_t 
# 681
offset = 0, cudaMemcpyKind 
# 682
kind = cudaMemcpyHostToDevice) 
# 684
{ 
# 685
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 686
} 
# 728 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 729
cudaMemcpyToSymbolAsync(const T &
# 730
symbol, const void *
# 731
src, size_t 
# 732
count, size_t 
# 733
offset = 0, cudaMemcpyKind 
# 734
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 735
stream = 0) 
# 737
{ 
# 738
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 739
} 
# 774 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 775
cudaMemcpyFromSymbol(void *
# 776
dst, const T &
# 777
symbol, size_t 
# 778
count, size_t 
# 779
offset = 0, cudaMemcpyKind 
# 780
kind = cudaMemcpyDeviceToHost) 
# 782
{ 
# 783
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 784
} 
# 826 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 827
cudaMemcpyFromSymbolAsync(void *
# 828
dst, const T &
# 829
symbol, size_t 
# 830
count, size_t 
# 831
offset = 0, cudaMemcpyKind 
# 832
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 833
stream = 0) 
# 835
{ 
# 836
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 837
} 
# 860 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 861
cudaGetSymbolAddress(void **
# 862
devPtr, const T &
# 863
symbol) 
# 865
{ 
# 866
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 867
} 
# 890 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 891
cudaGetSymbolSize(size_t *
# 892
size, const T &
# 893
symbol) 
# 895
{ 
# 896
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 897
} 
# 932 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 933
cudaBindTexture(size_t *
# 934
offset, const texture< T, dim, readMode>  &
# 935
tex, const void *
# 936
devPtr, const cudaChannelFormatDesc &
# 937
desc, size_t 
# 938
size = ((2147483647) * 2U) + 1U) 
# 940 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
{ 
# 941
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 942
} 
# 976 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 977
cudaBindTexture(size_t *
# 978
offset, const texture< T, dim, readMode>  &
# 979
tex, const void *
# 980
devPtr, size_t 
# 981
size = ((2147483647) * 2U) + 1U) 
# 983 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
{ 
# 984
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 985
} 
# 1031 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1032
cudaBindTexture2D(size_t *
# 1033
offset, const texture< T, dim, readMode>  &
# 1034
tex, const void *
# 1035
devPtr, const cudaChannelFormatDesc &
# 1036
desc, size_t 
# 1037
width, size_t 
# 1038
height, size_t 
# 1039
pitch) 
# 1041
{ 
# 1042
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 1043
} 
# 1088 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1089
cudaBindTexture2D(size_t *
# 1090
offset, const texture< T, dim, readMode>  &
# 1091
tex, const void *
# 1092
devPtr, size_t 
# 1093
width, size_t 
# 1094
height, size_t 
# 1095
pitch) 
# 1097
{ 
# 1098
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1099
} 
# 1129 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1130
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1131
tex, cudaArray_const_t 
# 1132
array, const cudaChannelFormatDesc &
# 1133
desc) 
# 1135
{ 
# 1136
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1137
} 
# 1166 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1167
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1168
tex, cudaArray_const_t 
# 1169
array) 
# 1171
{ 
# 1172
cudaChannelFormatDesc desc; 
# 1173
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1175
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1176
} 
# 1206 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1207
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1208
tex, cudaMipmappedArray_const_t 
# 1209
mipmappedArray, const cudaChannelFormatDesc &
# 1210
desc) 
# 1212
{ 
# 1213
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1214
} 
# 1243 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1244
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1245
tex, cudaMipmappedArray_const_t 
# 1246
mipmappedArray) 
# 1248
{ 
# 1249
cudaChannelFormatDesc desc; 
# 1250
cudaArray_t levelArray; 
# 1251
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1253
if (err != (cudaSuccess)) { 
# 1254
return err; 
# 1255
}  
# 1256
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1258
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1259
} 
# 1284 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1285
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1286
tex) 
# 1288
{ 
# 1289
return ::cudaUnbindTexture(&tex); 
# 1290
} 
# 1318 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1319
cudaGetTextureAlignmentOffset(size_t *
# 1320
offset, const texture< T, dim, readMode>  &
# 1321
tex) 
# 1323
{ 
# 1324
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1325
} 
# 1370 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1371
cudaFuncSetCacheConfig(T *
# 1372
func, cudaFuncCache 
# 1373
cacheConfig) 
# 1375
{ 
# 1376
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1377
} 
# 1379
template< class T> static inline cudaError_t 
# 1380
cudaFuncSetSharedMemConfig(T *
# 1381
func, cudaSharedMemConfig 
# 1382
config) 
# 1384
{ 
# 1385
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1386
} 
# 1415 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1416
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1417
numBlocks, T 
# 1418
func, int 
# 1419
blockSize, size_t 
# 1420
dynamicSMemSize) 
# 1421
{ 
# 1422
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1423
} 
# 1466 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1467
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1468
numBlocks, T 
# 1469
func, int 
# 1470
blockSize, size_t 
# 1471
dynamicSMemSize, unsigned 
# 1472
flags) 
# 1473
{ 
# 1474
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1475
} 
# 1480
class __cudaOccupancyB2DHelper { 
# 1481
size_t n; 
# 1483
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1484
size_t operator()(int) 
# 1485
{ 
# 1486
return n; 
# 1487
} 
# 1488
}; 
# 1535 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1536
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1537
minGridSize, int *
# 1538
blockSize, T 
# 1539
func, UnaryFunction 
# 1540
blockSizeToDynamicSMemSize, int 
# 1541
blockSizeLimit = 0, unsigned 
# 1542
flags = 0) 
# 1543
{ 
# 1544
cudaError_t status; 
# 1547
int device; 
# 1548
cudaFuncAttributes attr; 
# 1551
int maxThreadsPerMultiProcessor; 
# 1552
int warpSize; 
# 1553
int devMaxThreadsPerBlock; 
# 1554
int multiProcessorCount; 
# 1555
int funcMaxThreadsPerBlock; 
# 1556
int occupancyLimit; 
# 1557
int granularity; 
# 1560
int maxBlockSize = 0; 
# 1561
int numBlocks = 0; 
# 1562
int maxOccupancy = 0; 
# 1565
int blockSizeToTryAligned; 
# 1566
int blockSizeToTry; 
# 1567
int blockSizeLimitAligned; 
# 1568
int occupancyInBlocks; 
# 1569
int occupancyInThreads; 
# 1570
size_t dynamicSMemSize; 
# 1576
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1577
return cudaErrorInvalidValue; 
# 1578
}  
# 1584
status = ::cudaGetDevice(&device); 
# 1585
if (status != (cudaSuccess)) { 
# 1586
return status; 
# 1587
}  
# 1589
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1593
if (status != (cudaSuccess)) { 
# 1594
return status; 
# 1595
}  
# 1597
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1601
if (status != (cudaSuccess)) { 
# 1602
return status; 
# 1603
}  
# 1605
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1609
if (status != (cudaSuccess)) { 
# 1610
return status; 
# 1611
}  
# 1613
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1617
if (status != (cudaSuccess)) { 
# 1618
return status; 
# 1619
}  
# 1621
status = cudaFuncGetAttributes(&attr, func); 
# 1622
if (status != (cudaSuccess)) { 
# 1623
return status; 
# 1624
}  
# 1626
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1632
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1633
granularity = warpSize; 
# 1635
if (blockSizeLimit == 0) { 
# 1636
blockSizeLimit = devMaxThreadsPerBlock; 
# 1637
}  
# 1639
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1640
blockSizeLimit = devMaxThreadsPerBlock; 
# 1641
}  
# 1643
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1644
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1645
}  
# 1647
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1649
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1653
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1654
blockSizeToTry = blockSizeLimit; 
# 1655
} else { 
# 1656
blockSizeToTry = blockSizeToTryAligned; 
# 1657
}  
# 1659
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1661
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1668
if (status != (cudaSuccess)) { 
# 1669
return status; 
# 1670
}  
# 1672
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1674
if (occupancyInThreads > maxOccupancy) { 
# 1675
maxBlockSize = blockSizeToTry; 
# 1676
numBlocks = occupancyInBlocks; 
# 1677
maxOccupancy = occupancyInThreads; 
# 1678
}  
# 1682
if (occupancyLimit == maxOccupancy) { 
# 1683
break; 
# 1684
}  
# 1685
}  
# 1693
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1694
(*blockSize) = maxBlockSize; 
# 1696
return status; 
# 1697
} 
# 1730 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1731
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1732
minGridSize, int *
# 1733
blockSize, T 
# 1734
func, UnaryFunction 
# 1735
blockSizeToDynamicSMemSize, int 
# 1736
blockSizeLimit = 0) 
# 1737
{ 
# 1738
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1739
} 
# 1775 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1776
cudaOccupancyMaxPotentialBlockSize(int *
# 1777
minGridSize, int *
# 1778
blockSize, T 
# 1779
func, size_t 
# 1780
dynamicSMemSize = 0, int 
# 1781
blockSizeLimit = 0) 
# 1782
{ 
# 1783
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 1784
} 
# 1834 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1835
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 1836
minGridSize, int *
# 1837
blockSize, T 
# 1838
func, size_t 
# 1839
dynamicSMemSize = 0, int 
# 1840
blockSizeLimit = 0, unsigned 
# 1841
flags = 0) 
# 1842
{ 
# 1843
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 1844
} 
# 1885 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1886
cudaLaunch(T *
# 1887
func) 
# 1889
{ 
# 1890
return ::cudaLaunch((const void *)func); 
# 1891
} 
# 1922 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1923
cudaFuncGetAttributes(cudaFuncAttributes *
# 1924
attr, T *
# 1925
entry) 
# 1927
{ 
# 1928
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 1929
} 
# 1967 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1968
cudaFuncSetAttribute(T *
# 1969
entry, cudaFuncAttribute 
# 1970
attr, int 
# 1971
value) 
# 1973
{ 
# 1974
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 1975
} 
# 1997 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim> static inline cudaError_t 
# 1998
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1999
surf, cudaArray_const_t 
# 2000
array, const cudaChannelFormatDesc &
# 2001
desc) 
# 2003
{ 
# 2004
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 2005
} 
# 2026 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
template< class T, int dim> static inline cudaError_t 
# 2027
cudaBindSurfaceToArray(const surface< T, dim>  &
# 2028
surf, cudaArray_const_t 
# 2029
array) 
# 2031
{ 
# 2032
cudaChannelFormatDesc desc; 
# 2033
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 2035
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 2036
} 
# 2047 "/sw/summitdev/cuda/9.2.148/bin/../targets/ppc64le-linux/include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 41 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
# 220 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((9 / 10000000) % 10)), (('0') + ((9 / 1000000) % 10)), (('0') + ((9 / 100000) % 10)), (('0') + ((9 / 10000) % 10)), (('0') + ((9 / 1000) % 10)), (('0') + ((9 / 100) % 10)), (('0') + ((9 / 10) % 10)), (('0') + (9 % 10)), '.', (('0') + ((2 / 10000000) % 10)), (('0') + ((2 / 1000000) % 10)), (('0') + ((2 / 100000) % 10)), (('0') + ((2 / 10000) % 10)), (('0') + ((2 / 1000) % 10)), (('0') + ((2 / 100) % 10)), (('0') + ((2 / 10) % 10)), (('0') + (2 % 10)), '.', (('0') + ((148 / 10000000) % 10)), (('0') + ((148 / 1000000) % 10)), (('0') + ((148 / 100000) % 10)), (('0') + ((148 / 10000) % 10)), (('0') + ((148 / 1000) % 10)), (('0') + ((148 / 100) % 10)), (('0') + ((148 / 10) % 10)), (('0') + (148 % 10)), ']', '\000'}; 
# 258 "CMakeCUDACompilerId.cu"
const char *info_platform = ("INFO:platform[Linux]"); 
# 259
const char *info_arch = ("INFO:arch[]"); 
# 264
const char *info_language_dialect_default = ("INFO:dialect_default[98]"); 
# 278
int main(int argc, char *argv[]) 
# 279
{ 
# 280
int require = 0; 
# 281
require += (info_compiler[argc]); 
# 282
require += (info_platform[argc]); 
# 284
require += (info_version[argc]); 
# 292
require += (info_language_dialect_default[argc]); 
# 293
(void)argv; 
# 294
return require; 
# 295
} 

# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__27_CMakeCUDACompilerId_cpp1_ii_bd57c623
#define __NV_USE_NEW_KERNEL_LAUNCH 1
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
