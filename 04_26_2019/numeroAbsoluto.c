#include <stdio.h>
#include <stdlib.h>

int main (){
	float numero, absoluto;
	
	printf("Escreva um numero para saber ele na sua forma absoluta:");
	scanf("%f", &numero);
	
	if (numero > 0){
		printf("O numero %.3f em sua forma absoluta eh %.3f, pois ele eh positivo, logo eh ele mesmo.\n", numero, numero);
	}
	if (numero < 0){
		absoluto = numero * -1;
		printf("O numero %.3f em sua forma absoluta eh %.3f, pois ele eh positivo, logo eh ele mesmo.\n", numero, absoluto);
	}
	if (numero == 0){
		printf("O numero digitado eh 0.\n");
	}

	return 0;

}
