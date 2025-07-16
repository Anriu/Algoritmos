#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Escreva um algoritmo que leia um vetor de 7 elementos inteiros. Encontre e mostre o menor
    elemento e sua posição no vetor.*/

    int vetor[7];
    int i, aux, indice;

    for(i = 0; i < 7; i++){
        printf("Informe o numero %d do vetor: ", i+1);
        scanf("%d",&vetor[i]);
    }

    aux = vetor[0];

    for(i=0;i<7;i++){
        if(vetor[i] < aux){
            aux = vetor[i];
            indice = i;
        }
    }

    printf("O menor do valor do vetor e %d e esta na posicao %d", aux, indice);
    return 0;
}