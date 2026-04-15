/*
Prática 3.5 - Modificadores de tipo

Escreva um programa em C que imprima na tela o menor e o maior valor 
(nessa ordem) que podem ser representados por tipos inteiros, utilizando 
os modificadores de tipo. Exemplo de saida:

 
menor: XXXX
maior: YYYY

Onde XXXX e YYYY são os valores a serem escritos na tela conforme solicitado.

 
Você deve utilizar os seguintes modificadores, conforme apropriado:
short, int, long, long long e unsigned.

Utilize a função printf com os especificadores de formato corretos para cada tipo.
Para mais detalhes sobre tipos de dados e seus formatos de impressão, consulte:

Ref: C Data Types (Wikipedia)

*/

#include <stdio.h>
#include <limits.h>

int main(){
        
    long long int menor = LLONG_MIN;
    unsigned long long int maior = ULLONG_MAX;
    printf("menor: %lld\nmaior: %llu\n", menor, maior);
    return 0;
}
