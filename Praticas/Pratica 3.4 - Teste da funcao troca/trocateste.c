/*
Prática 3.4 - Teste da função troca

Escreva uma função chamada testaTroca que recebe dois valores do tipo float, x e y, como parâmetros e troca seus valores utilizando a função troca, implementada no exercício anterior.

Considere que a função troca já está corretamente implementada no módulo minhas_funcoes.h, portanto, não é necessário reescrevê-la, apenas incluir o módulo com:

#include "minhas_funcoes.h"

A função testaTroca deve imprimir os valores de x e y (nesta ordem) após a chamada da função troca. Imprima os valores com 4 casas decimais. Não se esqueça de incluir a biblioteca stdio.h.

*/

#include "minhas_funcoes.h"
#include <stdio.h>

void testaTroca(float, float);

void testaTroca(float x, float y){
    
    troca(&x, &y);
    printf("%.4f\n%.4f\n", x, y);
}
