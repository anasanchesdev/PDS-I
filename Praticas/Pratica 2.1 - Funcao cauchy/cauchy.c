/*
Pratica 2.1 - Funcao Cauchy padrao
A distribuição de Cauchy-Lorentz, nomeada em homenagem a Augustin Cauchy e Hendrik Lorentz, é 
uma distribuição de probabilidade que pode ser aplicada a diversos fenômenos, incluindo eventos 
extremos, como a máxima precipitação diária anual e as vazões de rios. Ela é definida pela seguinte
função densidade de probabilidade:
f(x) = 1/(pi(1+x^2))

Implemente uma função chamada cauchy que recebe um número de ponto flutuante de precisão simples
x como parâmetro e retorna o valor da função densidade de probabilidade conforme a equação acima. 
Para o valor de π, utilize o valor aproximado 3.141592 ou a constante M_PI da biblioteca math.h 
(não se esqueça de incluí-la).

*/

#include <math.h>

float cauchy (float x){
	return 1/(M_PI*(1 + x*x));
}
