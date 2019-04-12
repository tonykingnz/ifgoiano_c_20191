#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int num1, num2, mult, sum, less, divide;
  char choise;

  while (1 == 1) {
  printf("Escreva S para soma, L para subtracao, M para multiplicacao e D para divisao\n",choise );
  /*scanf("%c", &choise);*/
/**/  choise = getchar();
  printf("Letra %c selecioinado\n", choise);


    if (choise == 'S') {
    printf("Escreva dois numero para sumar um com o outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    sum = num1 + num2;

    printf("\nO numero %i menos %i eh %i\n\n", num1, num2, sum);
  }
  else if (choise == 'L') {
    printf("Escreva dois numero para subtrair um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    less = num1 - num2;

    printf("\nO numero %i menos %i eh %i\n\n", num1, num2, less);

  }
  else if (choise == 'M') {
    printf("Escreva dois numero para multiplicar um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    mult = num1 * num2;

    printf("\nO numero %i vezes %i eh %i\n\n", num1, num2, mult);

  }
  else if (choise == 'D') {
    printf("Escreva dois numero para subtrair um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    less = num1 / num2;

    printf("\nO numero %i divido por %i eh %i\n\n", num1, num2, divide);

  }

  else {
    printf("\nEntrada errada tente novamente\n\n\n");
  }

}
  return 0;
}
