#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva um número: ");
	scanf("%i", &numero);
	

	if (numero > 0){
		if (numero % 2 == 0){
			
			printf("\nO número %i é par. \n", numero);
			
		}
		
		else if (numero % 2 != 0){
			
			printf("O número %i é impar. \n", numero);
			
		}
	}
		
	else {
		
		printf("\n\nNúmero Invalido!\n\n");
		
	}
	
	return 0;
}
