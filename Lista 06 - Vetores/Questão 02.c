#include<stdio.h>
#include<stdlib.h>

int main(){

    /*Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos
    de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

    int vetorA[10], vetorB[10], vetorC[10];
    int i;

    //Preenchimento do vetor A
    for(i = 0; i <10; i++){
        printf("Informe o valor %d do vetor A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    //Preenchimento do vetor B
    for(i = 0; i <10; i++){
        printf("Informe o valor %d do vetor B: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    //Preenchimento do vetor C com a multiplicação de A por B
    for(i = 0; i <10; i++){
        vetorC[i] = vetorA[i] * vetorB[i];
    }

    printf("\nVetor A: ");
    for(i = 0; i <10; i++){
        printf("%d ",vetorA[i]);
    }

    printf("\nVetor B: ");
    for(i = 0; i <10; i++){
        printf("%d ",vetorB[i]);
    }

    printf("\nVetor C: ");
    for(i = 0; i <10; i++){
        printf("%d ",vetorC[i]);
    }
    
    return 0;
}