#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e
    escrever o valor correspondente em graus Celsius (baseado na fórmula abaixo):
    Celsius/5 = (Fahrenheit - 32)/9
    */
    setlocale(LC_ALL, "Portuguese");

    float Fahrenheit, Celsius;
    
    printf("Informe o valor em graus Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5 / 9; 


    printf("%.2f graus Fahrenheit é equivalente a graus %.2f Celsius\n", Fahrenheit ,Celsius);
    
    system("pause");
    return 0;
}