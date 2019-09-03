#include <stdio.h>

int main(){
	int senha = 2002, input;
		do{
			printf("Digite sua senha:\n");
			scanf("%i", &input);
			
			if (senha == input){
				printf("Acesso Permitido\n");
			}
			
			else{
				printf("Senha Invalida\n\n");
			}
			
		}while(senha != input);
		
	return 0;
}
