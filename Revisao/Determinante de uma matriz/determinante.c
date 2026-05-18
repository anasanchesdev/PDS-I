// Determinante de uma matriz 2x2
#include <stdio.h>

int main(){


	int matriz[2][2];
	int m1, m2;

	printf("Matriz 2x2: ");

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++)
			scanf("%d", &matriz[i][j]);
	}

	m1 = matriz[0][0] * matriz[1][1];  // Diag Principal
	m2 = -1*(matriz[0][1] * matriz[1][0]);  // Diag Sencundaria

	printf("Determinante: %d", m1+m2);

	return 0;
}

