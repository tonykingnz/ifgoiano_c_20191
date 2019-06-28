#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b, c, d, A;	
	
	printf("Escreva a, b, c e d:");
	
	scanf("\n%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
				
	
	
	if ( (b > c) && (d > a) && ((c + d) > (a +b)) && (c > 0) && (d > 0) && ((a % 2)== 0) ) {
		printf("\nValores aceitos\n");
		}
		
	else {
		printf("\nValores nao aceitos\n");
		}
		
	return 0;
}

