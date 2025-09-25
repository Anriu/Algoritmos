#include<stdio.h>
#include<stdlib.h>

int main(){

    /*Faca um programa q pergunte ao usuário o numero de alunos a ser lido. O tamanho dos vetores
    será o numero informado pelo usuário. Armazene num vetor as notas G1 destes alunos; num
    outro vetor, armazene as notas G2 destes alunos. Ambas notas, G1 e G2, são informadas pelo
    usuário. Calcule a media aritmética destes alunos e armazene num terceiro vetor. Ao final,
    mostre as 2 notas e a media de cada alunos.*/

    int quantidade, i;

    printf("Informe a quantidade de alunos: ");
    scanf("%d",&quantidade);

    float G1[quantidade], G2[quantidade], G3[quantidade];

    for( i = 0; i < quantidade; i++){
        printf("Informe a nota 1 do aluno %d : ", i+1);
        scanf("%f", &G1[i]);
    }

    for( i = 0; i < quantidade; i++){
        printf("Informe a nota 2 do aluno %d : ", i+1);
        scanf("%f", &G2[i]);
    }

    for( i = 0; i < quantidade; i++){
        G3[i] = (G1[i] + G2[i])/2;
    }

    
    for( i = 0; i < quantidade; i++){
        printf("Aluno %d, Nota 1: %.2f Nota 2: %.2f Media: %.2f\n", i+1, G1[i],G2[i],G3[i]);
    }


    return 0;
}