#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float cateto1, cateto2, hipotenusa;

  printf("Escreva o primeiro cateto\n");
  scanf("%f", &cateto1);
  printf("Escreva o segundo cateto\n");
  scanf("%f", &cateto2);

  hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);

  printf("Sua hipotenusa eh: %.3f", hipotenusa);

  return 0;
}
