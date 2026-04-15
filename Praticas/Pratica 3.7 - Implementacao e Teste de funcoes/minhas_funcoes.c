void soma1(int *num){

    *num = *num + 1;
}

void troca(float *end_valor1, float *end_valor2){
    float temp;
    temp = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = temp;
}

int ddd(long long num){
    return num / 1000000000;
}
