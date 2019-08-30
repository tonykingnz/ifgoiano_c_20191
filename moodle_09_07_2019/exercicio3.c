#include <stdio.h>

int main(){
	float polegada;
	
	for(polegada = 0; polegada < 10; polegada++){
		printf("|%i polegada = %.2f  |\n", polegada, polegada*2.54);
	}
	
	return 0;
}
