#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int pessoas;
	float pesoPessoa, pesoTotal;
	
	for(pesoTotal=0; pesoTotal<700; pesoTotal + pesoPessoa){
		printf("Digite seu peso:\n");
		scanf("%f", &pesoPessoa);
		pesoTotal = pesoPessoa + pesoTotal;
	}
	printf("\nO peso limite foi atingido\n");
	Beep(7000, 1000);
	
	return 0;
}
