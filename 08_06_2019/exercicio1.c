#include <stdio.h>
int main (){
	int numero = 1000;
	
	while(numero <= 2000){
		if (numero%11 == 5){
			printf("%d\n", numero);
			numero++;
		}
		else {
			numero++;
		}
	}
 
	return 0;
}
