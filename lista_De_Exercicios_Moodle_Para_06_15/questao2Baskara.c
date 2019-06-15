#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float bhaskara(float a, float b, float c);

int main() {
	
	bhaskara(2, -16, -18);
	
	return 0;
}

float bhaskara(float a, float b, float c){
	
	
	float x1, x2, delta;
	
	
	if (a == 0){
		printf("O coefieciente a nao pode ser 0.");
	}
	
	
	else {

		delta= (b*b)-4*a*c;
		
		if (delta < 0){
			printf("Equacao imposivel pois o delta eh negativo.");
		}
		
		else {
			
			x1= (-b+sqrt(delta)) / (2*a);
			x2= (-b-sqrt(delta)) / (2*a);
			
			printf("x1= %.4f\n", x1);
			printf("x2= %.4f\n", x2);			
		}
	}
}
