/*
Pratica 3.1 - Introducao a Ponteiros
Escreva uma função chamada soma1 que recebe como parâmetro um ponteiro para inteiro (ou seja, um endereço de memória que armazena um valor do tipo int) e soma 1 ao valor contido nesse endereço. A função deve ser do tipo void.

O protótipo da função é:

void soma1(______________);

Complete o protótipo e implemente a função.

*/

void soma1(int *);

void soma1(int *num){

    *num = *num + 1;
}