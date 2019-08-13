#include <stdio.h>

int main(){
	int idade, pessoaMaisNova = 100, pessoaMaisVelha = 1;
	
	do{
		printf("\nEscreva uma idade:");
		scanf("%i", &idade);
		
		if (idade < pessoaMaisNova){
			idade = pessoaMaisNova;
			}
		else if (idade < pessoaMaisVelha){
			idade = pessoaMaisVelha;
			}
		
	}while(idade%2 == 0);


	printf("A pessoa mais velha tem %i anos de idade e a mais nova %i anos de idade", pessoaMaisVelha, pessoaMaisNova);
	
	return 0;
}
