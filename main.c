#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

int sol (int a, int b, int c, double complex* x1, double complex* x2);
void print( int n, double complex* x1, double complex* x2);

int main(int argc, char *argv[]){
	
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;
	double complex x1 = 0;
	double  = 0;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	n = sol(a, b, c, &x1, &x2);
	printf("If you want to print solution, press 'p'\n");
	char p = getchar();
	if (p == 'p')
		print(n, &x1, &x2);

	return 0;
}

int sol (int a, int b, int c, double complex* x1, double complex* x2){
	
	double d = 0;
	int n = 0;

	d = b * b - 4 * a * c;
	
	if (d < 0){

		n = -1;
		*x1 = ( -b + I * sqrt(-d))/(2 * a);
		*x2 = ( -b - I * sqrt(-d))/(2 * a);

	}
	else{
		if (d > 0){
		
			n = 1;
			*x1 = ( -b + sqrt(d))/(2 * a);
			*x2 = ( -b - sqrt(d))/(2 * a);

		}
		else{
			
			n = 0;
			*x1 = *x2 = -b/(2 * a);
	
		}
	} 

	return n;
}

void print(int n, double complex* x1, double complex* x2){

	if (n >= 0){
		printf("x1 = %.2f\n", crealf(*x1));
		printf("x2 = %.2f\n", crealf(*x2));       
	}
	else{
		printf("x1 = %.2f + i*%.2f\n", crealf(*x1), cimagf(*x1));
		printf("x2 = %.2f + i*%.2f\n", crealf(*x2), cimagf(*x2));
	}
		
}

