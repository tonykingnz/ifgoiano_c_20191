#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float ladoA, ladoB, ladoC;
	
	int verificacao1, verificacao2, verificacao3;
	
	printf("Informe o lado A:");
	scanf("%f", &ladoA);
	printf("Informe o lado B:");
	scanf("%f", &ladoB);
	printf("Informe o lado C:");
	scanf("%f", &ladoC);
	
	if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB){
			if (ladoA == ladoB && ladoB == ladoC ){
				
				printf("Os valores %.1f, %.1f e %.1f representam um triangulo equilatero.", ladoA, ladoB, ladoC);
			}
			else if (ladoA == ladoB || ladoC == ladoB || ladoC == ladoA){
			
				printf("Os valores %.1f, %.1f e %.1f representam um triangulo isosceles.", ladoA, ladoB, ladoC);
			}
			else {
				
				printf("Os valores %.1f, %.1f e %.1f representam um triangulo escaleno.", ladoA, ladoB, ladoC);
			}
}
	else {
		printf("Os valores %.1f, %.1f e %.1f nao representam um triangulo.", ladoA, ladoB, ladoC);
	}
	

	return 0;
}

