#include <stdio.h>

int main(){
      	int a, b, r;
	char run;
	do {
		printf("Digite um inteiro A (divisor)\n > ");
	        scanf("%d", &a);

	        printf("Digite um inteiro B (dividendo)\n > ");
		scanf("%d", &b);

		if (b > a){
			int temp; // guarda valor de a temporariamente
			a = b;
			b = temp;
		}

		while (b != 0){
			r = a % b;
			a = b;
			b = r;
		}

		printf("MDC: %d\n", a);
		while (run != 'S' || run != 'n'){
			printf("Deseja rodar novamente? (S/n):\n > ");
			scanf("%c", run);
		}

	} while (run == 'S');
	return 0;
}
