#include <stdio.h>
#define TAMANHO 5

float calculamedia(int, float *);

float calculamedia(int n, float *v){
	float soma = 0;

	for (int i = 0; i < n; i++){
		soma += v[i];
	}


	return soma / n;
}


int main(){

	int tamanho = TAMANHO;
	float numeros[TAMANHO] = {1, 2, 3, 4, 5};

	float media = calculamedia(tamanho, numeros);
	printf("Media: %.2f", media);


	return 0;
}
