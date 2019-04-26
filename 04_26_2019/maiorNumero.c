#include <stdio.h>
#include <stdlib.h>

int main (){
	float numero1, numero2;
	
	printf("Escreva o primeiro numero:\n");
	scanf("%f", &numero1);
	printf("Escreva o segundo numero:\n");
	scanf("%f", &numero1);
	
	if (numero1 > numero2) {
		printf("O maior numero eh o numero 1, que eh o %.1f\n", numero1);
	}
	
	if (numero2 > numero1) {
		printf("O maior numero eh o numero 2, que eh o %.1f\n", numero2);
	}
	
	return 0;

}
