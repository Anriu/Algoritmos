#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    /*Faça o algoritmo que calcule o valor em Reais, correspondente aos dólares que um
    turista possui no cofre do hotel. O programa deve solicitar os seguintes dados:
    Quantidade de dólares guardados no cofre e cotação do dólar naquele dia.*/

    setlocale(LC_ALL, "Portuguese");

    float valorReais, dolarCotacao, quantidadeDolares;

    printf("Infome quanto dolares deseja converter para reais: $");
    scanf("%f",&quantidadeDolares);

    printf("Infome a cotação atual do dolar: R$");
    scanf("%f",&dolarCotacao);

    valorReais = quantidadeDolares * dolarCotacao;

    printf("Seus $%.2f valem R$%.2f\n", quantidadeDolares, valorReais);

    system("pause");
    
    return 0;
}