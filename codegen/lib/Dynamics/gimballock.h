/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: gimballock.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

#ifndef GIMBALLOCK_H
#define GIMBALLOCK_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Dynamics_types.h"

/* Function Declarations */
extern void gimballock(const double euler0[3], const double euler[3], const
  double Vin[3], double eulerset[3], double Vout[3]);

#endif

/*
 * File trailer for gimballock.h
 *
 * [EOF]
 */
