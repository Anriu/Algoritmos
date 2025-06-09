#include <stdio.h>
#include <stdlib.h>

int main(){

    //1.Faça um Programa que receba um número inteiro, calcule e imprima a tabuada de multiplicar desse número.
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",valor,i,valor*i);
    }

    return 0;
}