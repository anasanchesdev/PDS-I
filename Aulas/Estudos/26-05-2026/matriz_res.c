/*
=== ARQUIVOS ===
Esse programa calcula a soma de duas matrizes.

Mecanismo buffer/streaming
Para obter/guardar informações em um arquivo:

./a.out < entrada.txt > saida.txt

- Devem estar no mesmo diretório
- entrada.txt: O programa irá usar o que está no entrada.txt para o scanf
- saida.txt: O programa irá injetar em saida.txt o que está no printf
- Colocar f na frente do scanf e printf os transforma para a função de manipular arquivos
- fprintf: imprime conteúdo apenas no arquivo
- fscanf: obtem conteudo do arquivo

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *entrada, *saida;
	// Cria arquivo "data.txt", w -> write / r -> read / a -> append
	entrada = fopen("entrada.txt", "r");
	saida = fopen("saida.txt", "w");

	int linhas, colunas;

	// obter dimensoes das matrizes
	printf("Digite linha: ");
	fscanf(entrada, "%d", &linhas);
	printf("Digite coluna:");
	fscanf(entrada, "%d", &colunas);

	// criar matriz 1
	int matriz1[linhas][colunas];

	// obter elementos da matriz 1
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++)
			fscanf(entrada, "%d", &matriz1[i][j]);
	}	

	// criar matriz 2
	int matriz2[linhas][colunas];

	// obter elementos da matriz 1
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++)
			fscanf(entrada, "%d", &matriz2[i][j]);
	}	

	// Matriz resultante
	int resultante[linhas][colunas];
	for (int i = 0; i < linhas; i++){
			for (int j = 0; j < colunas; j++)
				resultante[i][j] = matriz1[i][j] + matriz2[i][j];
		}

	// Mostrar matriz resultante
	printf("Resultado:\n");
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++)
			fprintf(saida, "%d ", resultante[i][j]);
	}
	printf("\n");
	return 0;
}

