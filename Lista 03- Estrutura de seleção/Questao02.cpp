#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*2) As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra.*/

    setlocale(LC_ALL, "Portuguese");
    
    int quantidadeMacas;
    float valorTotal;

    printf("Informe quantas maçãs deseja comprar: ");
    scanf("%d",&quantidadeMacas);

    if(quantidadeMacas < 12){
        valorTotal = quantidadeMacas * 1.30;
        printf("Você pagará R$%.2f\n", valorTotal);
    }else{
        valorTotal = quantidadeMacas * 1;
        printf("Você pagará R$%.2f\n", valorTotal);
    }
    
    system("pause");
    return 0;
}