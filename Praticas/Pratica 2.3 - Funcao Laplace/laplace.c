/*
Pratica 2.3 - Laplace

Implemente uma função chamada laplace que recebe três números de ponto flutuante de precisão 
simples: x, μ e b como parâmetros e retorna o valor da função densidade de probabilidade 
conforme a equação acima. Para calcular ex, utilize a função exp, e para calcular o 
módulo ∣x∣, use a função fabs, ambas da biblioteca math.h (não se esqueça de incluí-la).

*/

#include <math.h>

float laplace(float x, float u, float b){
	float z = (-1 * fabs(x - u))/b;
	return exp(z)/(2*b);
}

