#include <stdio.h>

int main(){
	float dividendo, divisor;
	
	printf("Informe o valor do dividendo");
	scanf("%f", &dividendo);
	
	printf("Informe o valor do divisor: ");
	scanf("%f", &divisor);
	while(divisor == 0.0){
		printf("Informe o valor do divisor: ");
		scanf("%f", &divisor);
	}	
	printf("\n\nO valor da diviso %.2f/%.2f eh: %.2f", dividendo, divisor, dividendo/divisor);
	
	return 0;
}
