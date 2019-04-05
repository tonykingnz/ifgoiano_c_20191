#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float tempFahrenheit, tempCelsius;

printf("Escreva sua temperatura em Fahrenheit\n");
scanf("%f", &tempFahrenheit);

tempCelsius = (tempFahrenheit - 32) / 1.8;

printf("Sua temperatura convertida de Fahrenheit para Celsius eh: %.1f \n", tempCelsius);


  return 0;
}
