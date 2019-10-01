#include <stdio.h>
#include <windows.h>

void contagemRegresiva();

int main(){
	
	int codigo, i, senha = 564;
	printf("Digite a senha\n");
	scanf("%i", &codigo);
	
	if (codigo == senha){
		printf("Bomba desarmada\n");
	}
	else {
		printf("Codigo errado\a\n");
		contagemRegresiva();
	}
	return 0;
}

void contagemRegresiva(void){
	int i;
	for (i = 523; i<= 613; i+=30){
		Beep(i, 500);
	}
	sleep(1);
	printf("BUUUUUUMMMMM!!!!");
	Beep(700, 500);
}
