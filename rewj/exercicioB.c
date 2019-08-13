#include <stdio.h>

int main(){
	int numero, soma = 0, execucoes = 0;
	float media;
	
	do{
		printf("\nEscreva um numero:");
		scanf("%i", &numero);
		
		if (numero%2 == 0){
			soma = numero + soma;
			execucoes++;
		}
		
		else{
			printf("Apenas numeros pares\n");
		}
		
	}while(numero > 0);
	execucoes--;
	media = soma / execucoes;
	printf("A media eh: %.2f", media);
	
	return 0;
}
