//
// auto-generated by ops.py
//
#include "./OpenACC/OpenSBLI_common.h"

#define OPS_GPU

int xdim0_taylor_green_vortex_block0_14_kernel;
int ydim0_taylor_green_vortex_block0_14_kernel;
int xdim1_taylor_green_vortex_block0_14_kernel;
int ydim1_taylor_green_vortex_block0_14_kernel;
int xdim2_taylor_green_vortex_block0_14_kernel;
int ydim2_taylor_green_vortex_block0_14_kernel;
int xdim3_taylor_green_vortex_block0_14_kernel;
int ydim3_taylor_green_vortex_block0_14_kernel;
int xdim4_taylor_green_vortex_block0_14_kernel;
int ydim4_taylor_green_vortex_block0_14_kernel;
int xdim5_taylor_green_vortex_block0_14_kernel;
int ydim5_taylor_green_vortex_block0_14_kernel;
int xdim6_taylor_green_vortex_block0_14_kernel;
int ydim6_taylor_green_vortex_block0_14_kernel;
int xdim7_taylor_green_vortex_block0_14_kernel;
int ydim7_taylor_green_vortex_block0_14_kernel;
int xdim8_taylor_green_vortex_block0_14_kernel;
int ydim8_taylor_green_vortex_block0_14_kernel;
int xdim9_taylor_green_vortex_block0_14_kernel;
int ydim9_taylor_green_vortex_block0_14_kernel;


#undef OPS_ACC0
#undef OPS_ACC1
#undef OPS_ACC2
#undef OPS_ACC3
#undef OPS_ACC4
#undef OPS_ACC5
#undef OPS_ACC6
#undef OPS_ACC7
#undef OPS_ACC8
#undef OPS_ACC9


#define OPS_ACC0(x,y,z) (x+xdim0_taylor_green_vortex_block0_14_kernel*(y)+xdim0_taylor_green_vortex_block0_14_kernel*ydim0_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC1(x,y,z) (x+xdim1_taylor_green_vortex_block0_14_kernel*(y)+xdim1_taylor_green_vortex_block0_14_kernel*ydim1_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC2(x,y,z) (x+xdim2_taylor_green_vortex_block0_14_kernel*(y)+xdim2_taylor_green_vortex_block0_14_kernel*ydim2_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC3(x,y,z) (x+xdim3_taylor_green_vortex_block0_14_kernel*(y)+xdim3_taylor_green_vortex_block0_14_kernel*ydim3_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC4(x,y,z) (x+xdim4_taylor_green_vortex_block0_14_kernel*(y)+xdim4_taylor_green_vortex_block0_14_kernel*ydim4_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC5(x,y,z) (x+xdim5_taylor_green_vortex_block0_14_kernel*(y)+xdim5_taylor_green_vortex_block0_14_kernel*ydim5_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC6(x,y,z) (x+xdim6_taylor_green_vortex_block0_14_kernel*(y)+xdim6_taylor_green_vortex_block0_14_kernel*ydim6_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC7(x,y,z) (x+xdim7_taylor_green_vortex_block0_14_kernel*(y)+xdim7_taylor_green_vortex_block0_14_kernel*ydim7_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC8(x,y,z) (x+xdim8_taylor_green_vortex_block0_14_kernel*(y)+xdim8_taylor_green_vortex_block0_14_kernel*ydim8_taylor_green_vortex_block0_14_kernel*(z))
#define OPS_ACC9(x,y,z) (x+xdim9_taylor_green_vortex_block0_14_kernel*(y)+xdim9_taylor_green_vortex_block0_14_kernel*ydim9_taylor_green_vortex_block0_14_kernel*(z))

//user function
inline
void taylor_green_vortex_block0_14_kernel(const double *wk11 , const double *wk12 , const double *wk10 , const double *wk9 , const double *wk13 , double *rhou1_old , double *rhou2_old , double *rhou0_old , double *rho_old , double *rhoE_old , const double *rkold)
{
rho_old[OPS_ACC8(0,0,0)] = deltat*rkold[0]*wk9[OPS_ACC3(0,0,0)] + rho_old[OPS_ACC8(0,0,0)];
rhou0_old[OPS_ACC7(0,0,0)] = deltat*rkold[0]*wk10[OPS_ACC2(0,0,0)] + rhou0_old[OPS_ACC7(0,0,0)];
rhou1_old[OPS_ACC5(0,0,0)] = deltat*rkold[0]*wk11[OPS_ACC0(0,0,0)] + rhou1_old[OPS_ACC5(0,0,0)];
rhou2_old[OPS_ACC6(0,0,0)] = deltat*rkold[0]*wk12[OPS_ACC1(0,0,0)] + rhou2_old[OPS_ACC6(0,0,0)];
rhoE_old[OPS_ACC9(0,0,0)] = deltat*rkold[0]*wk13[OPS_ACC4(0,0,0)] + rhoE_old[OPS_ACC9(0,0,0)];
}


#undef OPS_ACC0
#undef OPS_ACC1
#undef OPS_ACC2
#undef OPS_ACC3
#undef OPS_ACC4
#undef OPS_ACC5
#undef OPS_ACC6
#undef OPS_ACC7
#undef OPS_ACC8
#undef OPS_ACC9



void taylor_green_vortex_block0_14_kernel_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  double *p_a9,
  double p_a10,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9)
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
        taylor_green_vortex_block0_14_kernel(  p_a0 + n_x*1*1 + n_y*xdim0_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim0_taylor_green_vortex_block0_14_kernel*ydim0_taylor_green_vortex_block0_14_kernel*1,
           p_a1 + n_x*1*1 + n_y*xdim1_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim1_taylor_green_vortex_block0_14_kernel*ydim1_taylor_green_vortex_block0_14_kernel*1,
           p_a2 + n_x*1*1 + n_y*xdim2_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim2_taylor_green_vortex_block0_14_kernel*ydim2_taylor_green_vortex_block0_14_kernel*1,
           p_a3 + n_x*1*1 + n_y*xdim3_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim3_taylor_green_vortex_block0_14_kernel*ydim3_taylor_green_vortex_block0_14_kernel*1,
           p_a4 + n_x*1*1 + n_y*xdim4_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim4_taylor_green_vortex_block0_14_kernel*ydim4_taylor_green_vortex_block0_14_kernel*1,
           p_a5 + n_x*1*1 + n_y*xdim5_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim5_taylor_green_vortex_block0_14_kernel*ydim5_taylor_green_vortex_block0_14_kernel*1,
           p_a6 + n_x*1*1 + n_y*xdim6_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim6_taylor_green_vortex_block0_14_kernel*ydim6_taylor_green_vortex_block0_14_kernel*1,
           p_a7 + n_x*1*1 + n_y*xdim7_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim7_taylor_green_vortex_block0_14_kernel*ydim7_taylor_green_vortex_block0_14_kernel*1,
           p_a8 + n_x*1*1 + n_y*xdim8_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim8_taylor_green_vortex_block0_14_kernel*ydim8_taylor_green_vortex_block0_14_kernel*1,
           p_a9 + n_x*1*1 + n_y*xdim9_taylor_green_vortex_block0_14_kernel*1*1 + n_z*xdim9_taylor_green_vortex_block0_14_kernel*ydim9_taylor_green_vortex_block0_14_kernel*1,
           &p_a10 );

      }
    }
  }
}
