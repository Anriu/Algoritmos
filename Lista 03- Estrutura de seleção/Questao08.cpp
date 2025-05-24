#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*8)	Um posto está vendendo combustíveis com a seguinte tabela de descontos:
    Alcool	até 20 litros, desconto de 3% por litro
	acima de 20 litros, desconto de 5% por litro
    Gasolina	até 20 litros, desconto de 4% por litro
	acima de 20 litros, desconto de 6% por litro

    Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90*/
    setlocale(LC_ALL, "Portuguese");

    float litros, valor, desconto, valorTotal;
    char combustivel;

    printf("Qual combustivel irá comprar?\nalcool ou gasolina (a/g): ");
    scanf("%c", &combustivel);

    switch (combustivel){
    case 'a':
        printf("Quantos litros de alcool quer comprar?\n ");
        scanf("%f", &litros);
        if(litros <= 20){    
            valor = litros * 2.90;
            desconto = valor * 3/100;
            valorTotal = valor - desconto;
            printf("%.2f litros de alcool custam R$%.2f, mas você receberá R$%.2f de desconto, entao só pagara R$%.2f\n", litros, valor, desconto, valorTotal);
        }else{
            valor = litros * 2.90;
            desconto = valor * 5/100;
            valorTotal = valor - desconto;
            printf("%.2f litros de alcool custam R$%.2f, mas você receberá R$%.2f de desconto, entao só pagara R$%.2f\n", litros, valor, desconto, valorTotal);
        }
        break;
    case 'g':
        printf("Quantos litros de gasolina quer comprar? \n");
        scanf("%f", &litros);

        if(litros <= 20){    
            valor = litros * 3.30;
            desconto = valor * 4/100;
            valorTotal = valor - desconto;
            printf("%.2f litros de gasolina custam R$%.2f, mas você receberá R$%.2f de desconto, entao só pagara R$%.2f\n", litros, valor, desconto, valorTotal);
        }else{
            valor = litros * 3.30;
            desconto = valor * 6/100;
            valorTotal = valor - desconto;
            printf("%.2f litros de gasolina custam R$%.2f, mas você receberá R$%.2f de desconto, entao só pagara R$%.2f\n", litros, valor, desconto, valorTotal);
        }
        break;
    
    default:
        printf("combustivel invalido");
        break;
    }
    
    system("pause");
    return 0;
}