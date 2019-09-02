#include <stdio.h>

int main(){
	int idade, pessoaMaisNova = 0, pessoaMaisVelha = 0;
	
	do{
		printf("\nEscreva uma idade:");
		scanf("%i", &idade);
		
		if (idade < pessoaMaisNova){
			pessoaMaisVelha = idade;
			}
		else if (idade < pessoaMaisVelha){
			pessoaMaisVelha = idade;
			}
		printf("Idade digitada %i\n", idade);
	}while(idade > 0);


	printf("A pessoa mais velha tem %i anos de idade e a mais nova %i anos de idade", pessoaMaisVelha, pessoaMaisNova);
	
	return 0;
}
