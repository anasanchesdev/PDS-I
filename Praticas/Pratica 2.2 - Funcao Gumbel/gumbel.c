/*
Pratica 2.2 - Funcao Gumbel
Na teoria das probabilidades e na estatística, a distribuição de Gumbel (também conhecida como 
distribuição de valor extremo generalizada do tipo I) é utilizada para modelar a distribuição 
do máximo (ou mínimo) de um conjunto de amostras provenientes de diversas distribuições. Sua 
função densidade de probabilidade é dada por:

f(x;u,B) = (1/B)*(e^-(z+e^-z))

Em que:

z = (x - u)/B

Sendo u o parametro de localizacao e B o parametro de escala

Implemente uma função chamada gumbel que recebe três números de ponto flutuante de precisão 
simples: x, μ e β como parâmetros e retorna o valor da função densidade de probabilidade conforme 
a equação acima. Para calcular ex, utilize a função exp da biblioteca math.h (não se esqueça de 
incluí-la). Ex: exp(x+1) = ex+1.

*/

#include <stdio.h>
#include <math.h>

float gumbel(float x, float u, float b){
	float z = (x - u)/b;
	return (1/b)*(exp(-z-exp(-z)));
}

