#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int dia, mes, ano, passo1A3, passo4, passo5, numeroPerfil;
	
	printf("Escreva o dia do seu nascimento. (Apenas o dia, no modelo dd)\n");
	scanf("%d", &dia);
	
	printf("Escreva o mes do seu nascimento. (Apenas o mes, no modelo mm)\n");
	scanf("%d", &mes);
	
	printf("Escreva o ano do seu nascimento. (Apenas o ano no modelo aaaa)\n");
	scanf("%d", &ano);
	
	passo1A3 = (((dia*100) + mes) + ano);
	passo4 = passo1A3/100;
	passo5 = passo1A3%100;
	numeroPerfil = ((passo4 + passo5)%5);
	
	switch (numeroPerfil){
		case 0: printf("\nVoce eh Timido\n"); break;
		case 1: printf("\nVoce eh Sonhador\n"); break;	
		case 2: printf("\nVoce eh Paquerador\n"); break;
		case 3: printf("\nVoce eh Atraente\n"); break;
		case 4: printf("\nVoce eh Irresistivel\n"); break;
		defaut: printf("\nOuve um erro inesperado.\nTente novamente.\nInsira seus dados novamente, como orientado\n");
	}
	
	return 0;
}

