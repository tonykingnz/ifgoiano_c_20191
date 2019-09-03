#include <stdio.h>
 
int main(){
   int n, reverso = 0;
 
   printf("Escreva um numeor para inverter\n");
   scanf("%i", &n);
 
   while (n != 0){
      reverso = reverso * 10;
      reverso = reverso + n%10;
      n = n/10;
   }
 
   printf("O reverso do numero escrito eh: %i\n", reverso);
 
   return 0;
}
