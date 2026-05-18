#include <stdio.h>

int verificaMatrizIgual(int, int, int, int, int [], int []);


/*
Retorna:
0 -> Se A != B
1 -> Se A = B
*/
int verificaMatrizIgual(int a_lin, int a_col, int b_lin, int b_col, int A[], int B[]){

	if ((a_lin != b_lin)||(a_col != b_col)){
		return 0;
	}

	int i = 0;

	while (i < (a_lin*a_col)){
		if (A[i] != B[i]){
			return 0;
		}
		i++;
	}

	return 1;

}

int main(){

    int A[4] = {1, 2, 2, 4};
    int B[4] = {1, 2, 3, 4};

    if (verificaMatrizIgual(2, 2, 2, 2, A, B)) {
        printf("As matrizes sao iguais!\n");
    } else {
        printf("As matrizes sao diferentes.\n");
    }

    return 0;
}