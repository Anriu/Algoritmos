#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), 
    calcular e escrever a área do retângulo.*/
    setlocale(LC_ALL, "Portuguese");

    float altura, largura, area;
    
    printf("Informe a altura do retângulo: ");
    scanf("%f",&altura);
    printf("Informe a largura do retângulo: ");
    scanf("%f",&largura);

    area = altura * largura;

    printf("A area do retângulo é de: %.2f\n", area);
    
    system("pause");
    return 0;
}