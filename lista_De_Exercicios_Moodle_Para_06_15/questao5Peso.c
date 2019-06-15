#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char sexo;
	float alturaMetro;
	
	printf("Escreva a letra M para Masculino ou a letra F para Feminimo\n");
	scanf("%c", &sexo);
	
	printf("Escreva sua altura em metro utilizando o ponto para separar as casas decimais. Ex.: Um metro e setenta: 1.70\n");
	scanf("%f", &alturaMetro);
	
	switch (sexo){
		case 'm':
		case 'M': printf("O seu peso ideal eh: %.3f\n", 72.7 * alturaMetro - 58); break;
		
		case 'f':
		case 'F': printf("O seu peso ideal eh: %.3f Kg\n",  62.1 * alturaMetro - 44.7); break;	
	}
		
	return 0;
}

