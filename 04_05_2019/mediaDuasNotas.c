#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float nota1, nota2, media;

printf("Escreva a primeira nota:\n");
scanf("%f", &nota1);

printf("Escreva a segunda nota:\n");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

printf("Sua media eh: %.1f\n", media);



  return 0;
}
