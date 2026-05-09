#include "minhas_funcoes.h"
#include <stdio.h>

void testaTroca(float, float);

void testaTroca(float x, float y){
    
    troca(&x, &y);
    printf("%.4f\n%.4f\n", x, y);
}
