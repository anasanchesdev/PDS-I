/*

Faça um programa que leia cinco números inteiros, um número por linha, e imprima: o maior valor informado, o menor valor informado e quantos números são divisíveis por 3.

Para ler o número inteiro, utilize a função scanf, o controle %d no string de formatação e passagem de parâmetro por referência utilizando ponteiros. Exemplo de leitura de um número inteiro:
*/

#include <stdio.h>

int main(){

    int numeros[5];
    int maior, menor;
    int div3 = 0;
    
    printf("\nPrimeiro: ");
    scanf("%d", &numeros[0]);
    
    printf("\nSegundo: ");
    scanf("%d", &numeros[1]);
    
    printf("\nTerceiro: ");
    scanf("%d", &numeros[2]);
    printf("\nQuarto: ");
    scanf("%d", &numeros[3]);
    
    printf("\nQuinto: ");
    scanf("%d", &numeros[4]);
    
    // Reordena lista de numeros em ordem crescente
    for (int i = 0; i <= 4; i++){
        for (int j = 4; j >= 0; j--){
            if ((numeros[i] > numeros[j]) && (i < j)){
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
            
        }
    }
    
    // Itera lista de numeros em busca de valores divisiveis por 3
    for (int i = 0; i <= 4; i++){
        if (numeros[i] % 3 == 0){
            div3++;
        }
    }
    printf("Maior: %d\nMenor: %d\nQuantidade de divisiveis por 3: %d", numeros[4], numeros[0], div3);
    
    return 0;
}