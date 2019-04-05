#include <stdio.h>

int main(){

char caracter;

printf("Escreva apenas um caracter\n");
scanf("%c", &caracter );

printf("Esse digito em octal eh %o\n", caracter);
printf("Esse digito em decimal eh %d\n", caracter);
printf("Esse digito em hexadecimal eh %x\n", caracter);

  return 0;
}


/*Especificador Representa
%c um único caracter
%o, %d, %x um número inteiro em octal, decimal ou hexadecimal
%u um número inteiro em base decimal sem sinal
%ld um número inteiro longo em base decimal
%f, %lf um número real de precisão simples ou dupla
%s uma cadeia de caracteres (string)
%% um único sinal de porcentagem
*/
