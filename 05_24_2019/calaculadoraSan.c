#include "stdio.h"
int main(void) {
	char chosenOperation;
	int a, b;
	system("color 8B");
	printf("Escolha uma operacao ( + - * / ): \n");
	scanf("%c",&chosenOperation);
	printf("Escreva dois numero inteiros\n");
	scanf("%d %d", &a, &b);
	switch (chosenOperation) {
		case '+' : 
			system("color 1F");
			printf("\n\n\n%d + %d = %d\n", a, b, a + b);
			break;
		case '-' :
			system("color BF");
			printf("\n\n\n%d - %d = %d\n", a, b, a - b);
			break;
		case '*' :
			system("color DF");
			printf("\n\n\n%d * %d = %d\n", a, b, a * b);
			break;
		case '/' :
			if ( b == 0) {
				system("color CF");
				printf("Nao da para dividir por 0\n");
				exit(1);
			}
			system("color 5F");
			printf("\n\n\n%d / %d = %d\n", a, b, a / b);
			break;
		default:
			system("color CF");
			printf("Opercao Invalida\n");
			return 1;
	}
	return 0;
}

