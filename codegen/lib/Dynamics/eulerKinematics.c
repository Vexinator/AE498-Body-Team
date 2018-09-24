/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: eulerKinematics.c
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
 * Arguments    : const double omega[3]
 *                const double euler[3]
 *                double eulerdot[3]
 * Return Type  : void
 */
void eulerKinematics(const double omega[3], const double euler[3], double
                     eulerdot[3])
{
  double c2;
  double s2;
  double c3;
  double s3;
  c2 = cos(euler[1]);
  s2 = sin(euler[1]);
  c3 = cos(euler[2]);
  s3 = sin(euler[2]);

  /* Euler Kinematic Equation */
  eulerdot[0] = s3 / s2 * omega[0] + c3 / s2 * omega[1];
  eulerdot[1] = c3 * omega[0] - s3 * omega[1];
  eulerdot[2] = (-(c2 * s3 / s2) * omega[0] - c2 * c3 / s2 * omega[1]) + omega[2];
}

/*
 * File trailer for eulerKinematics.c
 *
 * [EOF]
 */
