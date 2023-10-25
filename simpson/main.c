#include "head.h"

int main(){
	double a = 1;
	double b = 3;
	double eps = 0.00001;
	double surface = 0;

	display(calcul_surface(a , b , eps , surface));
	return 0;
}
