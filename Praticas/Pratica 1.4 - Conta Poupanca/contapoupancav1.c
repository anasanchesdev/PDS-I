/*
----------------------------------------------------------------------------------------------
Prog01 - Conta Poupanca
Aula: 12/03/2026
----------------------------------------------------------------------------------------------
Uma conta poupanca foi aberta com um deposito de R$500.00, com rendimento 1% de juros ao mes. 
No segundo mes, R$200.00 foram depositados nessa conta poupanca. No terceiro mes, R$50.00 foram 
retirados da conta. Quanto havera nessa conta no quarto mes?
*/

#include <stdio.h>

int main(void){


	// Primeiro mes
	float saldo = 500;
	float juros;

	printf("\nPRIMEIRO MES:\n");
	printf("Saldo Inicial: R$%.2f", saldo);

	// Segundo mes
	juros = saldo*1/100; // Juros de 1% ao mes
	saldo += juros;
	saldo += 200;

	printf("\n\nSEGUNDO MES:");
	printf("\nJuros: +R$%.2f", juros);
	printf("\nEntrada: +R$200.00");
	printf("\nSaldo atual:R$%.2f", saldo);

	// Terceiro mes
	juros = saldo*1/100; // Juros de 1% ao mes
	saldo += juros;
	saldo -= 50;

	printf("\n\nTERCEIRO MES:");
	printf("\nJuros: +R$%.2f", juros);
	printf("\nSaida: -R$50.00");
	printf("\nSaldo atual:R$%.2f", saldo);


	// Quarto mes
	juros = saldo*1/100; // Juros de 1% ao mes
	saldo += juros;
	printf("\n\nQUARTO MES:");
	printf("\nJuros: +R$%.2f", juros);
	printf("\nSaldo Final: R$%.2f\n\n", saldo);

	return 0;
}
