#include <stdio.h>

int main(){
	float real, resultado = 1;
	int natural, numero;
	
	printf("Digite um numero real:\n");
	scanf("%f", &real);
	printf("Digite um numero natuaral:\n");
	scanf("%i", &natural);
	
	for(numero = 0; numero < natural; numero++){
		resultado = real * resultado;
	}
	
	printf("O resultado eh %.2f\n", resultado);
	return 0;
}

