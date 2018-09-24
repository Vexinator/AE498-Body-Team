/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: gimballock.c
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
#include "inv.h"

/* Function Definitions */

/*
 * %%reset euler angle, when euler(2) = k*pi
 *  reset euler angle
 * Arguments    : const double euler0[3]
 *                const double euler[3]
 *                const double Vin[3]
 *                double eulerset[3]
 *                double Vout[3]
 * Return Type  : void
 */
void gimballock(const double euler0[3], const double euler[3], const double Vin
                [3], double eulerset[3], double Vout[3])
{
  double c10;
  double s10;
  double c20;
  double s20;
  double c30;
  double s30;
  double c1;
  double s1;
  double c2;
  double s2;
  double c3;
  double s3;
  double b_c30[9];
  double dv1[9];
  int i;
  int i2;
  double dv2[9];
  int i3;
  c10 = cos(euler0[0]);
  s10 = sin(euler0[0]);
  c20 = cos(euler0[1]);
  s20 = sin(euler0[1]);
  c30 = cos(euler0[2]);
  s30 = sin(euler0[2]);

  /*  current euler angle */
  c1 = cos(euler[0]);
  s1 = sin(euler[0]);
  c2 = cos(euler[1]);
  s2 = sin(euler[1]);
  c3 = cos(euler[2]);
  s3 = sin(euler[2]);

  /*  reset 3-1-3 Rotation Matrix */
  /*  Current 3-1-3 Rotation Matrix */
  /* reset euler angle */
  /*  reset critical vector(under new body frame) */
  b_c30[0] = c30 * c10 - s30 * c20 * s10;
  b_c30[3] = c30 * s10 + s30 * c20 * c10;
  b_c30[6] = s30 * s20;
  b_c30[1] = -s30 * c10 - c30 * c20 * s10;
  b_c30[4] = -s30 * s10 + c30 * c20 * c10;
  b_c30[7] = c30 * s20;
  b_c30[2] = s20 * s10;
  b_c30[5] = -s20 * c10;
  b_c30[8] = c20;
  inv(b_c30, dv1);
  b_c30[0] = c3 * c1 - s3 * c2 * s1;
  b_c30[3] = c3 * s1 + s3 * c2 * c1;
  b_c30[6] = s3 * s2;
  b_c30[1] = -s3 * c1 - c3 * c2 * s1;
  b_c30[4] = -s3 * s1 + c3 * c2 * c1;
  b_c30[7] = c3 * s2;
  b_c30[2] = s2 * s1;
  b_c30[5] = -s2 * c1;
  b_c30[8] = c2;
  for (i = 0; i < 3; i++) {
    eulerset[i] = euler0[i];
    Vout[i] = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      dv2[i + 3 * i2] = 0.0;
      for (i3 = 0; i3 < 3; i3++) {
        dv2[i + 3 * i2] += dv1[i + 3 * i3] * b_c30[i3 + 3 * i2];
      }

      Vout[i] += dv2[i + 3 * i2] * Vin[i2];
    }
  }
}

/*
 * File trailer for gimballock.c
 *
 * [EOF]
 */
