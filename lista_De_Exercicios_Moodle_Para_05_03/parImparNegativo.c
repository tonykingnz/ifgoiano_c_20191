#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva um n�mero: ");
	scanf("%i", &numero);
	

	if (numero > 0){
		if (numero % 2 == 0){
			
			printf("\nO n�mero %i � par. \n", numero);
			
		}
		
		else if (numero % 2 != 0){
			
			printf("O n�mero %i � impar. \n", numero);
			
		}
	}
		
	else {
		
		printf("\n\nN�mero Invalido!\n\n");
		
	}
	
	return 0;
}
