#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	switch( n ) {
		case 1: putchar('A'); break;
		case 3: putchar('B');
		case 4: putchar('C'); break;
		default: printf("*");
		case 5: putchar('D');
	
	}
	
	putchar ('.');
} 
