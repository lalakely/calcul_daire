#include "head.h"

int main(){
	double a = 0;
	double b = 100;
	double surface = 0;
	double epsilon = 0.001;

	surface = calcul_surface(a , b , surface , epsilon);
	display(surface);
	return 0;
}
