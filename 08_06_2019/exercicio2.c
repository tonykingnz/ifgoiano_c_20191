#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n;
	float numero = 1, soma;
	
	printf("Escreva n:\n");
	scanf("%i", &n);
	
	if (n>0){		
		while(numero <=n){
			soma = ((1/numero) + soma);
			numero++;
		}
		printf("\nA resposta da soma eh:%.2f\n", soma);
	}
	else {
		printf("O n nao pode ser 0 e nem um numero muiuot grande");
	}
	
	return 0;
}

