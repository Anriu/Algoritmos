#include<stdio.h>
#include<stdlib.h>
//Biblioteca para usar o srand para possibilitar gerar um numero aleatorio
#include <time.h>

int main (){
    /*Escreva um algoritmo que gere aleatoriamente um vetor de 20 elementos inteiros. A seguir,
    conte quantos valores pares existem no vetor.*/
    srand(time(NULL));

    int vetor[20];
    int i, contador=0;

    for(i = 0; i<20; i++){
        /*Funcao rand() para gerar um numero aleatorio e armazenar no indice i do vetor, para gerar o numero aleatorio 
        dentro de um intervalor basta usar a expressão 1 + (rand()%n), sendo o N o limite maximo que você deseja no intervalo*/
        vetor[i] = rand();
    }

    for(i = 0; i<20; i++){
        if(vetor[i]%2==0){
            contador++;
        }
    }

    printf("Tiveram um total de %d numeros pares no vetor.\n", contador);

    return 0;
}