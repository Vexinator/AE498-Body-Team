/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: transform.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Dynamics.h"
#include "eulerKinematics.h"
#include "gimballock.h"
#include "transform.h"

/* Function Definitions */

/*
 * Arguments    : const double euler[3]
 *                const double Vin[3]
 *                double Vout[3]
 * Return Type  : void
 */
void transform(const double euler[3], const double Vin[3], double Vout[3])
{
  double c1;
  double s1;
  double c2;
  double s2;
  double c3;
  double s3;
  double b_c3[9];
  int i4;
  double dv3[9];
  static const signed char iv0[3] = { 0, 0, 1 };

  static const signed char iv1[3] = { 1, 0, 0 };

  double b_c1[9];
  int i5;
  double c_c3[9];
  int i6;
  c1 = cos(euler[0]);
  s1 = sin(euler[0]);
  c2 = cos(euler[1]);
  s2 = sin(euler[1]);
  c3 = cos(euler[2]);
  s3 = sin(euler[2]);

  /* critical vector in inertial frame */
  b_c3[0] = c3;
  b_c3[3] = s3;
  b_c3[6] = 0.0;
  b_c3[1] = -s3;
  b_c3[4] = c3;
  b_c3[7] = 0.0;
  for (i4 = 0; i4 < 3; i4++) {
    b_c3[2 + 3 * i4] = iv0[i4];
    dv3[3 * i4] = iv1[i4];
  }

  dv3[1] = 0.0;
  dv3[4] = c2;
  dv3[7] = s2;
  dv3[2] = 0.0;
  dv3[5] = -s2;
  dv3[8] = c2;
  b_c1[0] = c1;
  b_c1[3] = s1;
  b_c1[6] = 0.0;
  b_c1[1] = -s1;
  b_c1[4] = c1;
  b_c1[7] = 0.0;
  for (i4 = 0; i4 < 3; i4++) {
    for (i5 = 0; i5 < 3; i5++) {
      c_c3[i4 + 3 * i5] = 0.0;
      for (i6 = 0; i6 < 3; i6++) {
        c_c3[i4 + 3 * i5] += b_c3[i4 + 3 * i6] * dv3[i6 + 3 * i5];
      }
    }

    b_c1[2 + 3 * i4] = iv0[i4];
  }

  for (i4 = 0; i4 < 3; i4++) {
    Vout[i4] = 0.0;
    for (i5 = 0; i5 < 3; i5++) {
      b_c3[i4 + 3 * i5] = 0.0;
      for (i6 = 0; i6 < 3; i6++) {
        b_c3[i4 + 3 * i5] += c_c3[i4 + 3 * i6] * b_c1[i6 + 3 * i5];
      }

      Vout[i4] += b_c3[i4 + 3 * i5] * Vin[i5];
    }
  }
}

/*
 * File trailer for transform.c
 *
 * [EOF]
 */
