#include <stdio.h>

int main(){
	int conta, resto, soma, n, operacao;
	printf("O digite a parte do numero da cont para ser verificado:\n");
	scanf("%i", &conta);
	n = conta;
	
	while (conta > 0){
    	resto = conta % 10;
    	conta = (conta - resto)/10;
	    soma = soma + resto;
	}
	
	operacao = soma%10;
	printf("O numero da conta eh: %i-%i\n", n, operacao);
	
}
