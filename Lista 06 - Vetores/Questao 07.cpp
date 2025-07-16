#include<stdio.h>
#include<stdlib.h>

int main(){

    /*Faça um programa leia o nome de um aluno e em seguida suas 4 notas. Armazene o nome em
    um vetor nome e as notas no vetor nota. O programa deve calcular a média do aluno e
    informar, o valor da média e se ele está aprovado (media maior ou igual a 7), reprovado (media
    menor que 4) ou de recuperação (media entre 4 e 6.9)..*/
    int i;
    float notas[4], media, soma =0;
    char nome[100];


    printf("Informe o nome do(a) Aluno(a): ");
    gets(nome);


    for( i = 0; i < 4; i++){
        printf("Informe a nota  %d do aluno(a): ", i+1);
        scanf("%f", &notas[i]);
    }

    for( i = 0; i < 4; i++){
        soma += notas[i];
    }

    media = soma/4;
    printf("Aluno: %s\n", nome);
    printf("Media %.2f",media);

    return 0;
}