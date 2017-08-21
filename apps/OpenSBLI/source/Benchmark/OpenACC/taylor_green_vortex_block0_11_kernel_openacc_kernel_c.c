//
// auto-generated by ops.py
//
#include "./OpenACC/OpenSBLI_common.h"

#define OPS_GPU

int xdim0_taylor_green_vortex_block0_11_kernel;
int ydim0_taylor_green_vortex_block0_11_kernel;
int xdim1_taylor_green_vortex_block0_11_kernel;
int ydim1_taylor_green_vortex_block0_11_kernel;


#undef OPS_ACC0
#undef OPS_ACC1


#define OPS_ACC0(x,y,z) (x+xdim0_taylor_green_vortex_block0_11_kernel*(y)+xdim0_taylor_green_vortex_block0_11_kernel*ydim0_taylor_green_vortex_block0_11_kernel*(z))
#define OPS_ACC1(x,y,z) (x+xdim1_taylor_green_vortex_block0_11_kernel*(y)+xdim1_taylor_green_vortex_block0_11_kernel*ydim1_taylor_green_vortex_block0_11_kernel*(z))

//user function
inline
void taylor_green_vortex_block0_11_kernel(const double *u1 , double *wk8)
{
wk8[OPS_ACC1(0,0,0)] = rinv1*((rc2)*u1[OPS_ACC0(0,0,-2)] - rc3*u1[OPS_ACC0(0,0,-1)] + (rc3)*u1[OPS_ACC0(0,0,1)] - rc2*u1[OPS_ACC0(0,0,2)]);
}


#undef OPS_ACC0
#undef OPS_ACC1



void taylor_green_vortex_block0_11_kernel_c_wrapper(
  double *p_a0,
  double *p_a1,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1)
  #pragma acc loop
  #endif
  for ( int n_z=0; n_z<z_size; n_z++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_y=0; n_y<y_size; n_y++ ){
      #ifdef OPS_GPU
      #pragma acc loop
      #endif
      for ( int n_x=0; n_x<x_size; n_x++ ){
        taylor_green_vortex_block0_11_kernel(  p_a0 + n_x*1*1 + n_y*xdim0_taylor_green_vortex_block0_11_kernel*1*1 + n_z*xdim0_taylor_green_vortex_block0_11_kernel*ydim0_taylor_green_vortex_block0_11_kernel*1,
           p_a1 + n_x*1*1 + n_y*xdim1_taylor_green_vortex_block0_11_kernel*1*1 + n_z*xdim1_taylor_green_vortex_block0_11_kernel*ydim1_taylor_green_vortex_block0_11_kernel*1 );

      }
    }
  }
}
