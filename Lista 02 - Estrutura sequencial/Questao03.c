#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    /*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas
    vendas oferecendo desconto. Faça um algoritmo que possa receber um valor de um
    produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/

    setlocale(LC_ALL, "Portuguese");

    float valorProduto, valorDesconto, valorFinal;

    printf("Informe o valor do produto: ");
    scanf("%f",&valorProduto);

    valorDesconto = valorProduto * 9/100;
    valorFinal = valorProduto - valorDesconto;

    printf("Valor inicial era de R$%.2f, com desconto o valor ficou R$%.2f\n",valorProduto,valorFinal);

    system("pause");
    
    return 0;
}