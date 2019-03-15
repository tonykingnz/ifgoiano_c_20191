/* PERIM.C - informa o perímetro de uma circunferência */
#include <stdio.h>
#define pi 3.1415

int main() {
 float raio;
 printf("\n Qual a medida do raio? ");
 scanf("%f", &raio);
 float perim;
 perim = 2*pi*raio;
 printf("\n O perímetro é %f", perim);
 return 0;
}
