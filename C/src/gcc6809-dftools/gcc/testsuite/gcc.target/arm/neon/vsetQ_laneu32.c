/* Test the `vsetQ_laneu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vsetQ_laneu32 (void)
{
  uint32x4_t out_uint32x4_t;
  uint32_t arg0_uint32_t;
  uint32x4_t arg1_uint32x4_t;

  out_uint32x4_t = vsetq_lane_u32 (arg0_uint32_t, arg1_uint32x4_t, 1);
}

/* { dg-final { scan-assembler "vmov\.32\[ 	\]+\[dD\]\[0-9\]+\\\[\[0-9\]+\\\], \[rR\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
