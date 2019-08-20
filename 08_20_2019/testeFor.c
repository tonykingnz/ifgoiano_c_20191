#include <stdio.h>

int main(){
	int contagemRegresiva, numero;
	
	printf("Digite um numero para iniciar a contagem:\n");
	scanf("%i", &numero);
	for(contagemRegresiva = numero ; contagemRegresiva > 0; contagemRegresiva--){
		printf("%i\n", contagemRegresiva);
	}
	
	printf("Fim!\n");
	
	return 0;
}
