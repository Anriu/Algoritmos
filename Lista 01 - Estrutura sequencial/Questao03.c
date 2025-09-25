#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.*/
    
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Informe um valor inteiro: ");
    scanf("%d",&valor);

    printf("O valor digitado foi: %d\n", valor);
    
    system("pause");
    return 0;
}