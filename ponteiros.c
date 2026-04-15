/*
PONTEIROS

O que é um ponteiro?
- É uma "variável referência" que guarda o endereço de memória para outra variável
- É um apontador para endereço de memória
- É uma variável usada para conter endereços de memórias, e com isso conseguimos
atualizar o conteúdo contido nesses endereços de maneira indireta.

Vantagens de usar ponteiros
1. Menos tempo de execução do programa
2. Você trabalha com a variável original
3. É possível criar outras estruturas de dados com a ajuda de ponteiros (listas conectadas, pilha, fila)
4. Retornar mais de um valor de funções
5. Procurar e selecionar em grande fonte de dados mais facilmente
6. Alocação dinâmica de memória

Notações:
- (*): Retorna o conteúdo da variável (Exemplo: *var)
- (&): Retorna o endereço da variável (Exemplo: &var)

*/

#include <stdio.h>

void printAge(int *age){
	printf("Valor de *age: %d\n", *age);
}

int main(){

	int age = 21;
	int *pAge = NULL; // Boa pratica
	pAge = &age;

	printf("Endereco de age: %p\n", &age);
	printf("Valor de age: %d\n", age);
	printf("Valor de pAge: %p\n", pAge);
	printf("Valor no endereco guardado em pAge: %d\n", *pAge);
 	
 	printAge(pAge);

	return 0;
}