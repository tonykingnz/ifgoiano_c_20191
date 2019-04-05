#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float combustivelLitros, distanciaKm, media;

printf("Qual distancia voce percorreu?\n");
scanf("%f", &distanciaKm);

printf("Quanto de combustivel voce gastou?\n");
scanf("%f", &combustivelLitros);

media = distanciaKm / combustivelLitros;

printf("O consumo por litro eh de %.2f km por litro", media);

  return 0;
}
