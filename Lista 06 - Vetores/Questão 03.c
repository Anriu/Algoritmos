#include<stdio.h>
#include<stdlib.h>

int main(){
    /*Escreva um algoritmo que leia um vetor de 10 posições de números inteiros e imprimir, logo
    após, gerar 2 vetores a partir dele, um contendo os elementos de posições ímpares do vetor e o
    outro os elementos de posições pares. Imprimi-los no final.*/

    int vetor[10], vetorPar[5], vetorImpar[5];
    int i, k = 0, j = 0;

    for(i = 0; i < 10; i++){
        printf("Informe o numero %d do vetor: ", i+1);
        scanf("%d",&vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(i%2 == 0){
            vetorPar[k] = vetor[i];
            k++;
        }else{
            vetorImpar[j] = vetor[i];
            j++;
        }
    }

    printf("\nVetor restultante dos indices pares: ");
    for(i = 0; i < 5; i++){
        printf("%d ", vetorPar[i]);
    }

    printf("\nVetor restultante dos indices impares: ");
    for(i = 0; i < 5; i++){
        printf("%d ", vetorImpar[i]);
    }

    return 0;
}