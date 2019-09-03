#include <stdio.h>

int main(){
	int idade, velho=0, novo=250;
	
	do{
		printf("Escreva uma idade:\n");
		scanf("%i", &idade);
	
		if (idade > velho){
			velho = idade;
		}
		
		else {
			if (idade < novo && idade > 0){
				novo = idade;
			}
			
		}
	}while(idade > 0);
	
	printf("A pessoa mais velha tem %i e a mais nova %i\n", velho, novo);
	
	return 0;
}
