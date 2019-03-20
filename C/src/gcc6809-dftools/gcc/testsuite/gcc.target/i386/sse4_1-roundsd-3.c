/* { dg-do run } */
/* { dg-require-effective-target sse4 } */
/* { dg-options "-O2 -msse4.1" } */

#include "sse4_1-check.h"

#define VEC_T __m128d
#define FP_T double
#define ASM_SUFFIX "l"

#define ROUND_INTRIN(x, mode) _mm_floor_sd(x, x)
#define ROUND_MODE _MM_FROUND_FLOOR
#define CHECK_ROUND_MODE 0x01

#define LOOP_INCREMENT 2
#define CHECK_LOOP_INCREMENT 2

#include "sse4_1-round.h"
