#include <stdio.h>
#include <stdlib.h>

int main(){
	float valorDividendo = 1, valorDivisor, divisao;
	
	printf("Insira 2 valores:\n");
	printf("Insira o primeiro valor:\n");
	scanf("%f", &valorDividendo);
	
	while(valorDivisor == 0){
		printf("Insira o segundo valor: Caso ""0"" iremos pedir novamente.\n");
		scanf("%f", &valorDivisor);
	}
	
	divisao = valorDividendo/valorDivisor;
	printf("O resultado da divisao eh:%.2f\n", divisao);
	
	return 0;
}
