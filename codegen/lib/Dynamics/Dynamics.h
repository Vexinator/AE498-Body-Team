/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Dynamics.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

#ifndef DYNAMICS_H
#define DYNAMICS_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Dynamics_types.h"

/* Function Declarations */
extern void Dynamics(const double T_data[], const int T_size[1], const double
                     omega[3], const double J[9], double wdot[3]);

#endif

/*
 * File trailer for Dynamics.h
 *
 * [EOF]
 */
