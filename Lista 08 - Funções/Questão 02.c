#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void maiorValor(int valor, int maior, int menor){
  
    if (valor > maior) {
        maior = valor;
    }

    if (valor < menor) {
        menor = valor;
    }

    system("cls");
    printf("Maior valor até agora: %d\n", maior);
    printf("Menor valor até agora: %d\n", menor);
}

int main (){

    int valor;
    int maior, menor;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número inteiro (0 para encerrar): ");
    scanf("%d", &valor);

    if (valor == 0) {
        printf("Nenhum número foi fornecido. Programa encerrado.\n");
        return 0;
    }

    maior = menor = valor; // Inicializa maior e menor com o primeiro número

    while (1) {
        printf("Digite outro número inteiro (0 para encerrar): ");
        scanf("%d", &valor);

        if (valor == 0) {
            printf("Programa encerrado.\n");
            break;
        }

    
       maiorValor(valor, maior, menor);
    }
    
    return 0;    
}




