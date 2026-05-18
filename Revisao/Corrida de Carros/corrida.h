#include <stdio.h>
#include <time.h>
#include <unistd.h> // para a função usleep utilizada na Q4
#define TAM_PISTA 30
#define MIN_CARROS 4
#define MAX_CARROS 10

int avancarCarros(int, int);

void mostrarPista(int [], int);

void calcularPodio(int [], int, int []);

void corrida(int, int []);