#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherAleatorio(int semente, int lim_inferior, int lim_superior, int linhas, int colunas, int matriz[]){
	srand(semente);

	int num_aleatorio; 
	int tamanho = linhas*colunas;

	for (int i = 0; i < tamanho; i++){
		num_aleatorio = lim_inferior + (rand() % (lim_superior - lim_inferior));
		matriz[i] = num_aleatorio;
	}

}

int main(){
	int l = 3, c = 3;
    int minha_matriz[9];

    // Exemplo de uso: semente 42, números entre 10 e 50
    preencherAleatorio(42, 10, 50, l, c, minha_matriz);

    // Imprime para testar
    for (int i = 0; i < 9; i++) {
        printf("%d ", minha_matriz[i]);
    }
    printf("\n");

    return 0;
}