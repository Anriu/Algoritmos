#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    /*Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de
    venda. Sabe-se que o valor de venda será o preço de custo com um acréscimo de
    acordo com um percentual informado pelo usuário.*/

    setlocale(LC_ALL, "Portuguese");

    float valorCusto, valorVenda, porcentagemAcrescimo, valorAcrescimo;

    printf("Informe o valor de custo do produto: ");
    scanf("%f",&valorCusto);
    printf("Informe o valor do  acréscimo da porcentagem do produto:");
    scanf("%f",&porcentagemAcrescimo);

    valorAcrescimo = valorCusto * porcentagemAcrescimo/100;

    valorVenda = valorCusto + valorAcrescimo;

    printf("O valor de venda é de R$%.2f\n",valorVenda);

    
    return 0;
}