#include <stdio.h>
#include <limits.h>

/*
Índices começam em 0
Entrada 				Saída

// qtd de linhas 			1
3

// qtd de colunas
4 	
  
1 1 8 7   	
0 8 6 4 	
5 5 2 4 	
  ^
  8 
*/


int main(){

	int linhas, colunas;
	int maior = INT_MIN; //	Menor inteiro possivel

	printf("\nLinhas: ");
	scanf("%d", &linhas);

	printf("\nColunas: ");
	scanf("%d", &colunas);

	int tamanho = linhas*colunas;
	int matriz[tamanho];

	printf("\nMatriz: ");

	for(int i = 0; i < tamanho; i++){
		scanf("%d", &matriz[i]);
	}

	// Obter maior elemento da matriz
	for (int i = 0; i < tamanho; i++){
		if (matriz[i] > maior){
			maior = matriz[i];
		}
	}

	// Procurar primeira ocorrencia
	// A cada i, pula j elementos, obtendo os elementos da mesma coluna de i.
	for (int i = 0; i < tamanho; i++){
		for (int j = i; j < tamanho; j += colunas){
			if (matriz[j] == maior){	
				j = j % colunas;
				printf("%d", j);
				return 0;
			}
		}
	}
	

	return 0;
}