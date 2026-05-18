#include <stdio.h>

int main(){

	int n_aeds;
	int n_calc;

	// Le numero de matriculados em AEDS1
	printf("\nMatriculados em AEDS1: ");
	scanf("%d", &n_aeds);

	int aeds[n_aeds];

	// Cria vetor de matriculados em AEDS1
	for (int i = 0; i < n_aeds; i++){
		scanf("%d", &aeds[i]);
	}

	// Le numero de matriculados em Calculo
	printf("\nMatriculados em Calculo: ");
	scanf("%d", &n_calc);

	// Cria vetor de matriculados em Calculo
	int calc[n_calc];

	for (int i = 0; i < n_calc; i++){
		scanf("%d", &calc[i]);
	}

	// Obtem alunos que estao em AEDS1 e Calculo

	for (int i = 0; i < n_aeds; i++){
		for (int j = 0; j < n_calc; j++){
			if (aeds[i] == calc[j]){
				printf("%d", aeds[i]);
				break;
			}
		}
	}

	return 0;
}
