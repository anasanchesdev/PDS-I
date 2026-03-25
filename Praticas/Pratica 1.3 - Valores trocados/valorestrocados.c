/*
Pratica 1.3 - Valores trocados
Considere o programa abaixo:

void main() {
    float a = 3.14159, b = 2.71828;

    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
}

Note que o programador trocou as variáveis que deveriam ser exibidas em cada printf. O valor de Pi é 
exibido como se fosse o valor de Euler e vice-versa.

Altere o programa acima de forma a corrigir o erro do programador. No entanto, você não pode modificar 
nenhuma linha do código original e nem digitar novamente os valores das constantes 3.14159 e 2.71828.

Dica: Troque os valores armazenados em cada variável.

*/

#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828;

    float temp;

    temp = b;
    b = a;
    a = temp;

    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
}