
// OBESO.c- informa se uma pessoa está ou não obesa
#include <stdio.h>
#include <math.h>


int main() {
  int LIMITE = 30;
  float peso, altura, imc;


  printf("\n Qual o seu peso e altura? ");
  scanf("%f %f", &peso, &altura);

  imc = peso/pow(altura, 2);

  printf("\n Seu i.m.c. é %.1f", imc);

  if (imc <= LIMITE ) {
    printf("\n Você não está obeso!");
  }

  else {
    printf("\n Você está obeso!");
  }




return 0;
}
