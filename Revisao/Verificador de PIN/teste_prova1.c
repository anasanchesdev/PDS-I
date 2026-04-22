#include "prova1.h"
#include <stdio.h>

int main(){
	char a, b, c;
	
	printf("Digite o PIN separado por espacos: ");
	scanf("%c %c %c", &a, &b, &c);
	if(!(contemApenasNumero(a, b, c))){
		printf("\nErro!");
		return -1;
	}
	colocaMaiuscula(&a);
	colocaMaiuscula(&b);
	colocaMaiuscula(&c);
	
	printf("PIN aceito: %c%c%c\n", a, b, c);
	return 0;
}

