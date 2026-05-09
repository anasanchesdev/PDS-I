/*
PDS I - MEMÓRIAS
31/03/2026

- Ponteiros
- Modificadores
- Operações bit-a-bit (<< e >>, deslocamento)

EXERCÍCIO:

Motores M7-M0

7  6  5  4  3  2  1  0
M0 M1 M2 M3 M4 M5 M6 M7

Ligue o M3 utilizando máscara ou deslocamento.

*/
#include <stdio.h>

int main(void){

	char motores = 0;

	motores |= 0X10; // Liga somente o Motor 3 (0x10 = 0001 0000)
	printf("%08b\n", motores);

	return 0;
}
