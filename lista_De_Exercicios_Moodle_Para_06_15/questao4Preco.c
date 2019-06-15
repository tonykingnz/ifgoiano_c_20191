#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int codigoProduto, quantidadeProduto;
	float cachorroQuentePreco = 4.00, xSaladaPreco = 4.50, xBaconPreco = 5.00, torradaSimplesPreco = 2.00, refrigeranteCodigoPreco = 1.50;	 
	
	printf("Escreva o codigo do produto:\n");
	scanf("%i", &codigoProduto);
	
	printf("Escreva a quantidade do produto:\n");
	scanf("%i", &quantidadeProduto);
	
	switch(codigoProduto){
		case 1: printf("\nO preco total eh: R$ %.2f\n", quantidadeProduto * cachorroQuentePreco); break;
		case 2: printf("\nO preco total eh: R$ %.2f\n", quantidadeProduto * xSaladaPreco); break;
		case 3: printf("\nO preco total eh: R$ %.2f\n", quantidadeProduto * xBaconPreco); break;
		case 4: printf("\nO preco total eh: R$ %.2f\n", quantidadeProduto * torradaSimplesPreco); break;
		case 5: printf("\nO preco total eh: R$ %.2f\n", quantidadeProduto * refrigeranteCodigoPreco); break;
		default: printf("\nO codigo inserido eh invalido. Tente novamente;)\n");
		
	}
		
	return 0;
}

