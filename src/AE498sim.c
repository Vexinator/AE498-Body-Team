//#include <AE498Sim.h>
#include <stdio.h>
#include <math.h>
//#include <gsl/gsl_math.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_block.h>

int main(){
	printf("Hello World \n");
	double a[3] = {1,2,3};
	double b[3][1] = {{1},{2},{3}};
	double c[3][3];
	print_matrix(b);
	printf((int)sizeof(a));
	//transform(a,b,c);
	//printf(sizeof(c[0]),"\n");
	//print_matrix(c);
	return 0;
}

void transform(double euler[], double V_in[][1], double result[][1]){
	double c1 = cos(euler[0]);
	double s1 = sin(euler[0]);
	double c2 = cos(euler[1]);
	double s2 = sin(euler[1]);
	double c3 = cos(euler[2]);
	double s3 = sin(euler[2]);

	double R1[3][3] = {{c1,s1,0},{-s1,c1,0},{0,0,1}};
	double R2[3][3] = {{1,0,0},{0,c2,s2},{0,-s2,c2}};
	double R3[3][3] = {{c3,s3,0},{-s3,c3,0},{0,0,1}};
	
	//print_matrix(R1);
	double temp1[3][3];
	double temp2[3][3];

	multiply_matrix(R1,R2,temp1);
	multiply_matrix(temp1,R3,temp2);
	mult_matrix_vert(temp2,V_in,result);
}


void multiply_matrix(double a[][3], double b[][1], double result[][1]){
	int n = 3;
	for(int i = 0; i<n ; i++){
		for(int j = 0 ; j<n ; j++){
			for(int k = 0 ; k<n ; k++){
				result[i][j] += a[i][k]*b[k][j];
			}
		}
	}
}

void mult_matrix_vert(double a[][3], double b[][3], double result[][3]){
	for(int i = 0 ; i<3 ; i++){
		for(int j = 0 ; j<3 ; j++){
			result[i][0] += a[i][j]*b[j][0];
		}
	}
}

void print_matrix(double a[][3]){
	for(int i = 0 ; i < (int)sizeof(a) ; i++){
		for(int j = 0 ; j < (int)sizeof(a[0]) ; j++){
			printf("%f ", a[i][j]);
		}
		printf("\n");
	}
	return;
}


