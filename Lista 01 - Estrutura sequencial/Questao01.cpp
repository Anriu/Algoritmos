#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em
    uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os
    seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa.
    Ao final, escrever os valores que ficaram armazenados nas variáveis.*/

    setlocale(LC_ALL, "Portuguese");

    int A, B, Aux;

    A=10;
    B=20;
    Aux = A;
    A = B;
    B= Aux;

    printf("Valor de A = %d, valor de B = %d\n",A,B);

    system("pause");
    return 0;
}