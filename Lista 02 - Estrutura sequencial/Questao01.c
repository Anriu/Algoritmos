#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*Faça um algoritmo que leia quatro números informados pelo usuário e que depois
    imprima a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e
    4.*/

    setlocale(LC_ALL, "Portuguese");

    float nota1,nota2,nota3,nota4, media;

    printf("Informe o 1º valor: ");
    scanf("%f",&nota1);
    printf("Informe o 2º valor: ");
    scanf("%f",&nota2);
    printf("Informe o 3º valor: ");
    scanf("%f",&nota3);
    printf("Informe o 4º valor: ");
    scanf("%f",&nota4);


    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4))/(1+2+3+4);

    printf("A media ponderada é de: %.2f\n",media);

    system("pause");
    return 0;
}