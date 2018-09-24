/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Dynamics_initialize.c
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
#include "Dynamics_initialize.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void Dynamics_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * File trailer for Dynamics_initialize.c
 *
 * [EOF]
 */
