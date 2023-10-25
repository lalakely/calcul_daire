#include "head.h"

double f(double x){
	return x;
}

double calcul_surface(double a , double b , double surface,double epsilon){
	double x = 0;
	for(double i = a ; i < b ; i+=epsilon){
		x  = i + epsilon;
		surface+=operation_surface(i , x , f(i) , f(x));
	}
	return surface;
}

double operation_surface(double a , double b , double f_a , double f_b){
	return (fabs(b) - fabs(a)) * (f_a + f_b)/2;
}

void display(double surface){
	printf("%f" , surface);	
}
