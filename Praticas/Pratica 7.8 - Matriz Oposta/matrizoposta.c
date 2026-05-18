#include <stdio.h>

int main(){

	int linhas, colunas;

	// Obtem linhas
	printf("Linhas:" );
	scanf("%d", &linhas);

	// Obtem colunas
	printf("Colunas: ");
	scanf("%d", &colunas);

	// Obtem tamanho da matriz
	int tamanho = linhas*colunas;
	int matriz[tamanho];

	// Estabelece elementos da matriz
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &matriz[i]);
	}

	// Inverte elementos da matriz
	for (int i = 0; i < tamanho; i++){
		matriz[i] = matriz[i]*-1;
	}

	// Imprime matriz
	for (int i = 0; i < tamanho; i ++){
		if ((i % colunas  == 0)&&(i != 0)){
			printf("\n");
		}
		printf("%d  ", matriz[i]);
	}



	return 0;
}
