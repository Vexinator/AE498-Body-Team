/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 23-Sep-2018 19:29:51
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "Dynamics.h"
#include "eulerKinematics.h"
#include "gimballock.h"
#include "transform.h"
#include "main.h"
#include "Dynamics_terminate.h"
#include "Dynamics_initialize.h"

/* Function Declarations */
static void argInit_3x1_real_T(double result[3]);
static void argInit_3x3_real_T(double result[9]);
static void argInit_d3x1_real_T(double result_data[], int result_size[1]);
static double argInit_real_T(void);
static void main_Dynamics(void);
static void main_eulerKinematics(void);
static void main_gimballock(void);
static void main_transform(void);

/* Function Definitions */

/*
 * Arguments    : double result[3]
 * Return Type  : void
 */
static void argInit_3x1_real_T(double result[3])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[9]
 * Return Type  : void
 */
static void argInit_3x3_real_T(double result[9])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    for (idx1 = 0; idx1 < 3; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 3 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : double result_data[]
 *                int result_size[1]
 * Return Type  : void
 */
static void argInit_d3x1_real_T(double result_data[], int result_size[1])
{
  int idx0;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result_size[0] = 2;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result_data[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_Dynamics(void)
{
  double T_data[3];
  int T_size[1];
  double dv4[3];
  double dv5[9];
  double wdot[3];

  /* Initialize function 'Dynamics' input arguments. */
  /* Initialize function input argument 'T'. */
  argInit_d3x1_real_T(T_data, T_size);

  /* Initialize function input argument 'omega'. */
  /* Initialize function input argument 'J'. */
  /* Call the entry-point 'Dynamics'. */
  argInit_3x1_real_T(dv4);
  argInit_3x3_real_T(dv5);
  Dynamics(T_data, T_size, dv4, dv5, wdot);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_eulerKinematics(void)
{
  double dv6[3];
  double dv7[3];
  double eulerdot[3];

  /* Initialize function 'eulerKinematics' input arguments. */
  /* Initialize function input argument 'omega'. */
  /* Initialize function input argument 'euler'. */
  /* Call the entry-point 'eulerKinematics'. */
  argInit_3x1_real_T(dv6);
  argInit_3x1_real_T(dv7);
  eulerKinematics(dv6, dv7, eulerdot);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_gimballock(void)
{
  double dv8[3];
  double dv9[3];
  double dv10[3];
  double eulerset[3];
  double Vout[3];

  /* Initialize function 'gimballock' input arguments. */
  /* Initialize function input argument 'euler0'. */
  /* Initialize function input argument 'euler'. */
  /* Initialize function input argument 'Vin'. */
  /* Call the entry-point 'gimballock'. */
  argInit_3x1_real_T(dv8);
  argInit_3x1_real_T(dv9);
  argInit_3x1_real_T(dv10);
  gimballock(dv8, dv9, dv10, eulerset, Vout);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_transform(void)
{
  double dv11[3];
  double dv12[3];
  double Vout[3];

  /* Initialize function 'transform' input arguments. */
  /* Initialize function input argument 'euler'. */
  /* Initialize function input argument 'Vin'. */
  /* Call the entry-point 'transform'. */
  argInit_3x1_real_T(dv11);
  argInit_3x1_real_T(dv12);
  transform(dv11, dv12, Vout);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  Dynamics_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_Dynamics();
  main_eulerKinematics();
  main_gimballock();
  main_transform();

  /* Terminate the application.
     You do not need to do this more than one time. */
  Dynamics_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
