#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float bhaskara(float a, float b, float c);

int main() {
	float valorA, valorB, valorC;
	printf("Escreva o valor numerico de 'a'\n");
	scanf("%f", &valorA);
	printf("Escreva o valor numerico de 'b'\n");
	scanf("%f", &valorB);
	printf("Escreva o valor numerico de 'c'\n");
	scanf("%f", &valorC);
	bhaskara(valorA, valorB, valorC);
	
	return 0;
}

float bhaskara(float a, float b, float c){
	
	
	float x1, x2, delta;
	
	
	if (a == 0){
		printf("O coefieciente a nao pode ser 0.\n");
	}
	
	
	else {

		delta= (b*b)-4*a*c;
		
		if (delta < 0){
			printf("Equacao imposivel pois o delta eh negativo.\n");
		}
		
		else {
			
			x1= (-b+sqrt(delta)) / (2*a);
			x2= (-b-sqrt(delta)) / (2*a);
			
			printf("\nx1= %.4f\n", x1);
			printf("x2= %.4f\n", x2);			
		}
	}
}
