/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_Dynamics_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

#ifndef _CODER_DYNAMICS_API_H
#define _CODER_DYNAMICS_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Dynamics_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Dynamics(real_T T_data[], int32_T T_size[1], real_T omega[3], real_T
                     J[9], real_T wdot[3]);
extern void Dynamics_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1]);
extern void Dynamics_atexit(void);
extern void Dynamics_initialize(void);
extern void Dynamics_terminate(void);
extern void Dynamics_xil_terminate(void);
extern void eulerKinematics(real_T omega[3], real_T euler[3], real_T eulerdot[3]);
extern void eulerKinematics_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void gimballock(real_T euler0[3], real_T euler[3], real_T Vin[3], real_T
  eulerset[3], real_T Vout[3]);
extern void gimballock_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[2]);
extern void transform(real_T euler[3], real_T Vin[3], real_T Vout[3]);
extern void transform_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1]);

#endif

/*
 * File trailer for _coder_Dynamics_api.h
 *
 * [EOF]
 */
