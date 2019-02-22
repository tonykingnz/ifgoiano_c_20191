#include <stdio.h>
#include <stdlib.h>

int main () {
  int nota1, nota2, nota3, nota4, mediaFinal;
  printf("Escreva suas 4 notas separadas por espaco e em numeros inteiros sem virgula, apenas 1 a 10.\n");
  scanf("%i %i %i %i", &nota1, &nota2, &nota3, &nota4);
  mediaFinal = (nota1 + nota2 + nota3 + nota4)/4;
  printf("Sua media final eh %i \n", mediaFinal);
  return 0;
}
