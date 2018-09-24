/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Dynamics.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Dynamics.h"
#include "eulerKinematics.h"
#include "gimballock.h"
#include "transform.h"
#include "inv.h"

/* Function Definitions */

/*
 * T = torque
 *  omega = angular velcotity
 *  J = moment of inertial
 * Arguments    : const double T_data[]
 *                const int T_size[1]
 *                const double omega[3]
 *                const double J[9]
 *                double wdot[3]
 * Return Type  : void
 */
void Dynamics(const double T_data[], const int T_size[1], const double omega[3],
              const double J[9], double wdot[3])
{
  int i0;
  double dv0[9];
  double y[3];
  double b_omega[3];
  int i1;
  (void)T_size;
  for (i0 = 0; i0 < 3; i0++) {
    y[i0] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      y[i0] += J[i0 + 3 * i1] * omega[i1];
    }
  }

  inv(J, dv0);
  b_omega[0] = omega[1] * y[2] - omega[2] * y[1];
  b_omega[1] = omega[2] * y[0] - omega[0] * y[2];
  b_omega[2] = omega[0] * y[1] - omega[1] * y[0];
  for (i0 = 0; i0 < 3; i0++) {
    y[i0] = T_data[i0] - b_omega[i0];
  }

  for (i0 = 0; i0 < 3; i0++) {
    wdot[i0] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      wdot[i0] += dv0[i0 + 3 * i1] * y[i1];
    }
  }
}

/*
 * File trailer for Dynamics.c
 *
 * [EOF]
 */
