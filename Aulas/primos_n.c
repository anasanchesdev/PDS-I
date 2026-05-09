#include <stdio.h>
/*
Cada posicao da lista de primos equivale ao proprio numero
[0] -> 0
[1] -> 1
[2] -> 2
[...]

*/

int ehPrimo(int);

int ehPrimo(int numero){
	// se primo -> 1 | senão -> 0
	for (int i = 2; i < numero; i++){
		if (numero % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);	
	int primo[n];

	// definindo primos iniciais
	primo[0] = 0;
	primo[1] = 0;	

	for (int i = 2; i < n; i++){
		// definindo primos iniciais
		if ((n > 2)&&(n <= 7)){
			primo[n] = ehPrimo(primo[n]);;
		}
		// definindo o resto como 1
		else {
			primo[n] = 1;
		}
	}
	// eliminando multilplos
	for (int j = 2; j < n; j++){
		if (primo[j] == 1) {
			for (int k = 3; k < n; k++){
				// se k for multiplo de j, significa que nao e primo
				if (k % j == 0){
					primo[n] = 0;
				}			
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		printf("%d, ", primo[n]);
	}
	


	return 0;
}

