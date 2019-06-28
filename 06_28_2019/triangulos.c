#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c, maior, meio, menor;
	
	printf("Informe o lado A:");
	scanf("%f", &a);
	printf("Informe o lado B:");
	scanf("%f", &b);
	printf("Informe o lado C:");
	scanf("%f", &c);
	/*if (a>b){
		if (a > c){
			maior = a;
			else {
					if (b>c){
						if (b>a){
							maior = b;
						}
						else {
							if (c>b){
								if (c>a){
								maior = c;
							}
						}
					}	
				}
			}
		}
	}*/

	if ((a*a) == (b*b) + (c*c)) {
		printf("\nTRIANGULO RETANGULO");
		}
	if ((a*a) > (b*b) + (c*c)) {
		printf("\nTRIANGULO OBTUSANGULO");
		}
	if ((a*a) < (b*b) + (c*c)) {
		printf("\nTRIANGULO ACUTANGULO");
		}
	if (a == b && b == c) {
		printf("\nTRIANGULO EQUILATERO");
		}
	if (a == b || b == c) {
		printf("\nTRIANGULO ISOSCELES");
		}
	else {
		printf("\nNAO FORMA TRIANGULO");
		}	

	return 0;
}
