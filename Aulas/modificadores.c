#include <stdio.h>
#include <limits.h>

int main(){
        
    long long int menor = LLONG_MIN;
    unsigned long long int maior = ULLONG_MAX;
    printf("menor: %lld\nmaior: %llu\n", menor, maior);
    return 0;
}