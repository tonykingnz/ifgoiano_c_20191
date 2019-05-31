#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a = 10;
	float b = 2;
		

	// Forma nao compacta:

	printf("Forma nao compacta:\n");

	printf("\n %.2f", a = a + b);
	a = 10;
	printf("\n %.2f", a = a - b);
	a = 10;	
	printf("\n %.2f", a = a / b);
	a = 10;
	printf("\n %.2f", a = a * b);
	a = 10;
	//Forma compacta:

	printf("\n\nForma compacta:\n");

	printf("\n %.2f", a += b);
	a = 10;
	printf("\n %.2f", a -= b);
	a = 10;
	printf("\n %.2f", a /= b);
	a = 10;
	printf("\n %.2f\n\n", a*= b);
	a = 10;
	
	return 0;
}

