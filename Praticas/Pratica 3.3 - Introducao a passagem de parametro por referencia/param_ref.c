/*
Prática 3.3 - Introdução à passagem de parâmetro por referência
Escreva uma função chamada troca que recebe como parâmetros dois ponteiros (variáveis que armazenam endereços de memória) para float, denominados end_valor1 e end_valor2.

A função deve trocar os valores armazenados nos endereços apontados por essas variáveis. Ou seja, o conteúdo do endereço end_valor1 deve ser armazenado em end_valor2, e o conteúdo de end_valor2 deve ser armazenado em end_valor1.
*/

void troca(float *, float *);

void troca(float *end_valor1, float *end_valor2){
    float temp;
    temp = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = temp;
}
