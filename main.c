#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>



void sol (int a, int b, int c, double complex* x1, double complex* x2);

int main(int argc, char *argv[]){
	
	int a,b,c;
	double complex x1, x2;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	sol(a, b, c, &x1, &x2);
		
	return 0;
}

void sol (int a, int b, int c, double complex* x1, double complex* x2){
	
	double d;

	d = b * b - 4 * a * c;
	
	if (d < 0){

		*x1 = ( -b + I * sqrt(-d))/(2 * a);
		*x2 = ( -b - I * sqrt(-d))/(2 * a);
		printf("x1 = %.2f + i*%.2f\n", crealf(*x1), cimagf(*x1));
		printf("x2 = %.2f + i*%.2f\n", crealf(*x2), cimagf(*x2));

	}
	else{
		if (d > 0){
		
			*x1 = ( -b + sqrt(d))/(2 * a);
			*x2 = ( -b - sqrt(d))/(2 * a);
			printf("x1 = %.2f\n", crealf(*x1));
			printf("x2 = %.2f\n", crealf(*x2));

		}
		else{
			
			*x1 = *x2 = -b/(2 * a);
			printf("x1 = x2 = %.2f\n", crealf(*x1));
	
		}
	}
}

