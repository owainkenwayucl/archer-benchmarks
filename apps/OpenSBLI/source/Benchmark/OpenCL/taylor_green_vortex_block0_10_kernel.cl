//
// auto-generated by ops.py
//

#ifdef OCL_FMA
#pragma OPENCL FP_CONTRACT ON
#else
#pragma OPENCL FP_CONTRACT OFF
#endif
#pragma OPENCL EXTENSION cl_khr_fp64:enable

#include "ops_opencl_reduction.h"

#ifndef MIN
#define MIN(a,b) ((a<b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a,b) ((a>b) ? (a) : (b))
#endif
#ifndef SIGN
#define SIGN(a,b) ((b<0.0) ? (a*(-1)) : (a))
#endif
#define OPS_READ 0
#define OPS_WRITE 1
#define OPS_RW 2
#define OPS_INC 3
#define OPS_MIN 4
#define OPS_MAX 5
#define ZERO_double 0.0;
#define INFINITY_double INFINITY;
#define ZERO_float 0.0f;
#define INFINITY_float INFINITY;
#define ZERO_int 0;
#define INFINITY_int INFINITY;
#define ZERO_uint 0;
#define INFINITY_uint INFINITY;
#define ZERO_ll 0;
#define INFINITY_ll INFINITY;
#define ZERO_ull 0;
#define INFINITY_ull INFINITY;
#define ZERO_bool 0;

#undef OPS_ACC0
#undef OPS_ACC1


#define OPS_ACC0(x,y,z) (x+xdim0_taylor_green_vortex_block0_10_kernel*(y)+xdim0_taylor_green_vortex_block0_10_kernel*ydim0_taylor_green_vortex_block0_10_kernel*(z))
#define OPS_ACC1(x,y,z) (x+xdim1_taylor_green_vortex_block0_10_kernel*(y)+xdim1_taylor_green_vortex_block0_10_kernel*ydim1_taylor_green_vortex_block0_10_kernel*(z))


//user function
void taylor_green_vortex_block0_10_kernel(const __global double * restrict u2,__global double * restrict wk7,
  const double rinv1,
const double rc2,
const double rc3)


{
wk7[OPS_ACC1(0,0,0)] = rinv1*((rc2)*u2[OPS_ACC0(0,0,-2)] - rc3*u2[OPS_ACC0(0,0,-1)] + (rc3)*u2[OPS_ACC0(0,0,1)] - rc2*u2[OPS_ACC0(0,0,2)]);
}



__kernel void ops_taylor_green_vortex_block0_10_kernel(
__global const double* restrict arg0,
__global double* restrict arg1,
const double rinv1,
const double rc2,
const double rc3,
const int base0,
const int base1,
const int size0,
const int size1,
const int size2 ){


  int idx_y = get_global_id(1);
  int idx_z = get_global_id(2);
  int idx_x = get_global_id(0);

  if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
    taylor_green_vortex_block0_10_kernel(&arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_taylor_green_vortex_block0_10_kernel + idx_z * 1*1 * xdim0_taylor_green_vortex_block0_10_kernel * ydim0_taylor_green_vortex_block0_10_kernel],
                                         &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_taylor_green_vortex_block0_10_kernel + idx_z * 1*1 * xdim1_taylor_green_vortex_block0_10_kernel * ydim1_taylor_green_vortex_block0_10_kernel],
                                         rinv1,
                                         rc2,
                                         rc3);
  }

}
