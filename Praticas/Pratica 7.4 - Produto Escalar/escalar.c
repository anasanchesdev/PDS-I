#include <stdio.h>

float produtoEscalar(int, float *, float *);

float produtoEscalar(int n, float v1[], float v2[]){
	float soma = 0;
	for (int i = 0; i < n; i++){
		float multi;
		multi = v1[i]*v2[i];
		soma += multi;
	}

	return soma;
}

int main(){

	int tamanho = 5;
	float A[] = {1, 2, 3, 4, 5};
	float B[] = {5, 4, 3, 2, 1};
	float escalar;

	escalar = produtoEscalar(tamanho, A, B);

	printf("%.2f", escalar);


	return 0;
}

