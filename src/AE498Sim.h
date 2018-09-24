#ifndef AE498SIM_H
#define AE498SIM_H
 
#include <stdio.h>
#include <math.h>

double[] J;
double mass;

int main{};

//Function for vector transformation
double transform(double euler[], double V_in[]);

//Multiplies matrices a and b, with the result put in c
//Currently only works for 3x3 matrices
void multiply_matrix(double a[][], double b[][], double[][]);

//Prints 3x3 matrices
void print_matrix(double a[][]);

#endif
