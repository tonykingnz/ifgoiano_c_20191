#include <stdio.h>
#include <stdlib.h>

int main (){
	int ano;
	
	printf("Escreva o ano:\n");
	scanf("%i", &ano);
	
	if (ano % 4 == 0 ) {
		printf("O ano %i eh bissexto\n", ano);
	}
	
	else {
		printf("O ano %i nao eh bissexto\n", ano);
	}
	
	return 0;

}
