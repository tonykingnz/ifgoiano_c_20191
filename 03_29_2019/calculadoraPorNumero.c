#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int num1, num2, mult, sum, less, divide, choise;
  printf("Escreva 1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao\n",choise );
  scanf("%i", &choise);
  printf("Letra %i selecioinad@\n", choise);

  if (choise = 1) {
    printf("Escreva dois numero para sumar um com o outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    sum = num1 + num2;

    printf("\nO numero %i menos %i eh %i\n\n", num1, num2, sum);
  }
  else if (choise = 2) {
    printf("Escreva dois numero para subtrair um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    less = num1 - num2;

    printf("\nO numero %i menos %i eh %i\n\n", num1, num2, less);

  }
  else if (choise = 3) {
    printf("Escreva dois numero para multiplicar um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    mult = num1 * num2;

    printf("\nO numero %i vezes %i eh %i\n\n", num1, num2, mult);

  }
  else if (choise = 4) {
    printf("Escreva dois numero para dividir um pelo outro\n\n");
    scanf("%i" "%i",&num1, &num2);

    divide = num1 / num2;

    printf("\nO numero %i divido por %i eh %i\n\n", num1, num2, divide);

  }
  return 0;
}
