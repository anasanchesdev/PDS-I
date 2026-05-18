#include <stdio.h>

int main(){

	int tam;

	// Obtem tamanho da array
	printf("Tamanho da array: ");
	scanf("%d", &tam);

	// Cria array
	int array[tam];
	for (int i = 0; i < tam; i++){
		scanf("%d", &array[i]);
	}

	// Ordena Array
	for (int i = 0; i < tam; i++){
		for (int j = i + 1; j < tam - i - 1; j++){
			if (array[i] > array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				break;
			}
		}
	}

	// Imprime array organizada
	for (int i = 0; i < tam; i++){
		printf("%d ", array[i]);
	}

	return 0;
}
