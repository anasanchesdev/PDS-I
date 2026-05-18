#include <stdio.h>

void mediaMovel(int n, float v[], int k, float m[]){
	for (int i = 0; (i + k - 1) < n; i++){
		int soma = 0;
		for (int j = i; j < k + i; j++){
			soma += v[j];
		}
		m[i] = soma / k;
		printf("%f ", m[i]);
	}
}


int main(){

	int tam = 5;
	int k = 3;
	float vetor[5] = {10, 20, 30, 40, 50};
	float movel[tam - k + 1];
	mediaMovel(tam, vetor, k, movel);

	return 0;
}