#include <stdio.h>

int main(){

	int nota, frequencia;

	printf("Digite sua nota (0-100):\n > ");
	scanf("%d", &nota);

	printf("Digite sua frequencia (0-100):\n > ");
	scanf("%d", &frequencia);

	if ((nota >= 60) && (frequencia >= 75)){
		printf("Aprovado!!\n");
	}

	else {
		printf("Reprovado :(\n");
	}

	return 0;
}
