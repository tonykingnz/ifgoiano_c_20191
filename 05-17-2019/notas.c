#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
	float nota1, nota2, media;
	
	printf("Informe a nota 1:\n");
	scanf("%f", &nota1);
	printf("Informe a nota 2:\n");
	scanf("%f", &nota2);

	
	media= (nota1 + nota2) / 2;
	
	if (media >= 7.0){
		system("color 17");
		printf("\nCategoria do aluno: Aprovado\n");
	}
	else if (media <= 3.0){	
		system("color 47");
		printf("\nCategoria do aluno: Reprovado\n");
	}
	else {
		system("color 67");
		printf("\nCategoria do aluno: Recuperacao\n");
	}	

	return 0;
}
