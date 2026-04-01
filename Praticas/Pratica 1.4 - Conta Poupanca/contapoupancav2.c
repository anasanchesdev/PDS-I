/*
Pratica 1.4 - Conta poupança
Uma conta poupança foi aberta com um depósito inicial de R$ 789,54, rendendo 0,56% de juros ao mês. 
No segundo mês, um depósito de R$ 303,20 foi realizado. No terceiro mês, houve um saque de R$ 58,25.
Escreva um programa que calcule e exiba o saldo da conta no início do quarto mês, exibindo o resultado 
com apenas duas casas decimais.

A poupança calcula os juros no último dia do mês.

Dica: Utilize uma variável para armazenar e atualizar o saldo da conta conforme os depósitos, saques e rendimentos mensais.
*/

#include <stdio.h>

float calculaJuros (float, float);

int main(void){

	float saldo = 0.0;
	float juros = 0.0056;


	for (int i = 1; i <= 4; i++) {
		// Primeiro mes
		if (i == 1){
			saldo += 789.54;
			saldo = calculaJuros(saldo, juros);
			// printf("%.2f\n", saldo);
		}
		// Segundo mes
		else if (i == 2){
			saldo += 303.2;
			saldo = calculaJuros(saldo, juros);
			// printf("%.2f\n", saldo);
		}
		// Terceiro mes
		else if (i == 3){
			saldo -= 58.25;
			saldo = calculaJuros(saldo, juros);
			// printf("%.2f\n", saldo);
		}
		// Quarto mes
		else {
			printf("\n%.2f", saldo);
		}
	}
	return 0;
}

float calculaJuros(float poupanca, float taxa){
	poupanca = poupanca + poupanca * taxa;
	return poupanca;
}
