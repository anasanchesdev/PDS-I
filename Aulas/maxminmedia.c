#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n;
	int maior = 20;
	int menor = 35;
	float media = 0;

	// int aleatorio;
	printf("Digite um numero inteiro:\n > ");
	scanf("%d", &n);
	float temperaturas[n];

	// inicializando gerador de numero aleatorio
	srand((unsigned)time(NULL));
	
	printf("[");
	// gerando numero aleatorio
	for (int i = 0; i < n; i++){
		temperaturas[i] = 20 + rand() %16; // comeca em 20 e gera mais 16 - 1 numeros aleatorios 
		printf("%.2f, ", temperaturas[i]);
	}
	printf("]\n");

	// verificando valores minimos e maximos
	for (int j = 0; j < n; j++){
		media += temperaturas[j]; // a cada iteracao soma valores do vetor temperaturas
		if (temperaturas[j] > maior){
			maior = temperaturas[j];
		}
		if (temperaturas[j] < menor){
			menor = temperaturas[j];
		}
	}
	media = media / n; // obtem media
	printf("Maior: %d\nMenor: %d\nMedia: %.2f\n", maior, menor, media);
	return 0;
}
