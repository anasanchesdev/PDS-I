/*
Pratica 2.6 - Parte Fracionaria

Escreva uma função que recebe um número de ponto flutuante como parâmetro e retorna o valor de sua parte fracionária, 
como ponto flutuante. Exemplo: se a função receber -3.1416 como parâmetro, ela deve retornar -0.1416.

*/

float parteFracionaria(float x){
	return x - (int) x;
}