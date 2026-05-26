/*
=== STRUCTS ===
Data: 21/05/2026

- Problema: uma função com muitos parâmetros, fica muito confuso!
- Structs: tipos estruturados (typedef) -> Usar tipos primitivos para criar novos tipos mais
"estruturados"
- Um struct agrupa várias variáveis de diversos tipos em uma só variável

Se todas as variaveis não forem preenchidas, o restante é preenchido com 0 (padrão),
e o mapeamento na memória é feito de forma sequencial de acordo com a declaração dos campos 
da estrutura

Passando structs como parametros:
- Via valor (cópia)
- Usando uma referencia (ponteiro)

void a(struct Point p); ... 
main: struct Point pt = {1}; / a(pt);

Para acessar o conteudo de structs passados como referencia por endereço: usa setinha -> 
- p1->x

*/

#include <stdio.h>

/* Prototipos de structs -> somente em arquivos header
Se o arquivo header não estiver definido... Cria
#ifndef GEOMETRIA_H
	#define GEOMETRIA_H
	struct ponto;
	struct circulo;
	struct cilindro;
#endif



*/

/*
// Exemplo geral:
struct nome_da_estrutura {
	// Campos da estrutura:
	int var1;
	float var2;
};
*/

// Exemplo pratico
struct ponto {
	// Campos da estrutura:
	float coord_x;
	float coord_y;
};


// Exemplo de struct com outro struct:
struct circulo {
	// Campos da estrutura:
	float raio;
	// forma de usar um struct sem ter usado typdef
	struct ponto centro; // Centro -> coord_x, coord_y
};

// E assim vai...
struct cilindro{
	// Campos da estrutura
	float altura;
	struct circulo base; // Base -> raio
};

/*
// Inicializando struct:
struct ponto p1;
p1.coord_x = 1.0;
p1.coord_y = 2.0;

// Ou passando os parametros de uma vez:
struct ponto p2 = {10.0, 20.0};

// Ordem de structs que estão dentro do outro, a variavel do mais externo vem primeiro
// {centro, coord_x, coord_y}
struct circulo c1 = {2.0, 1.0, 3.0};

*/



int main(){
					// x      y
	struct ponto p1 = {10.0, 20.0};
	p1.coord_x++; // Somando mais 1 na variavel x de p1
	printf("Ponto (%.2f, %.2f)\n", p1.coord_x, p1.coord_y);

	//                   raio, centro -> ponto -> (x ,y)
	struct circulo c1 = {4.0, 11.0, 22.0};
	printf("Circulo: R = %.2f, C = (%.2f, %.2f)\n", 
		c1.raio, 
		c1.centro.coord_x, 
		c1.centro.coord_y);

	return 0;
}


