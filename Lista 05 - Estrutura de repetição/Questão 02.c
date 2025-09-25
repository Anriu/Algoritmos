#include <stdio.h>
#include <stdlib.h>

int main(){

    //2.Escreva um Programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de pessoas maiores de idade (idade >= 18 anos).
    int idade, maiores = 0;

    for(int count = 0; count < 10; count++){
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade >= 18){
            maiores++;
        }
    }

    printf("Tiveram um total de %d maiores.\n", maiores);
    return 0;
}