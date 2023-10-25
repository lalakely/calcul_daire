#include "head.h"

double resolution(int parties, double min , double max , double solution){
	double a = 0;
	double b = 0;
	a = min;
	while(b < max){
		a=b;
		b = a + ((max-min) / parties);
		solution+=calcul_surface(a , b , fonction(a));
	}
	printf("%f",solution);
	return solution;
}

double fonction(double nombre){
	return nombre;
}

double calcul_surface(double a , double b , double f_a){
	return (fabs(b)-fabs(a)) * (fabs(f_a));
}
