#include <stdio.h>


int main(){

	int a, b;
	int q = 0;

	printf("Digite um inteiro A (divisor)\n > ");
	scanf("%d", &a);

	printf("Digite um inteiro B (dividendo)\n > ");
	scanf("%d", &b);

	while (b <= a){
		a = a - b;
		q++;
	}

	printf("Resultado da divisao: %d\nResto de divisao: %d\n", q, a);
	return 0;
}
