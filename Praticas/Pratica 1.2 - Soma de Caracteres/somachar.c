/*
Pratica 1.2 - Soma de caracteres
Escreva um programa para imprimir a soma e a multiplicação dos cinco caracteres 
contidos em "PDS-1", ambos números separados por um espaço.
*/

#include <stdio.h>

int main(void){

	int soma = 'P'+'D'+'S'+'-'+'1';
	int multi = 'P'*'D'*'S'*'-'*'1';

	printf("%d  %d\n", soma, multi);

	return 0;
}
