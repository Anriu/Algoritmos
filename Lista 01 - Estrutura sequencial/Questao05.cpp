#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
    porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
    Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
    escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o
    custo final ao consumidor..*/
    setlocale(LC_ALL, "Portuguese");

    float valorFabrica, distribuicao, impostos, valorToral;
    
    printf("Informe o valor de fabrica do carro: ");
    scanf("%f",&valorFabrica);

    distribuicao = valorFabrica * 28/100;
    impostos = valorFabrica * 45/100;

    valorToral = valorFabrica + distribuicao + impostos;

    printf("O valor final do carro com todos os imposos é de: %.2f\n", valorToral);
    
    system("pause");
    return 0;
}