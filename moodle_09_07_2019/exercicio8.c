#include <stdio.h>

int main(){
	int numero, contador = 0;
	
	printf("Escreva um numero:\n");
	scanf("%i", &numero);
	
	if (numero <= 1000 && numero >= 1){
		printf("\nOs numeros impares de 1 a %i sao:\n", numero);
		for (contador; contador <= numero; contador++){
			if(contador%2 != 0){
				printf("%i\n", contador);
			}
		}
	}
	else {
		printf("Numero Invalido (1-1000)");
	}
	return 0;
}
