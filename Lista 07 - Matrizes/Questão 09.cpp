#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Faça um algoritmo que gere aleatoriamente uma matriz 20x20 de números e some cada uma das linhas,
     armazenando o resultado da soma dos elementos em um vetor. 
     Imprimir a matriz e o vetor. 
     A seguir, multiplique cada elemento da matriz pelo valor da soma da sua linha.
     Imprimir a matriz resultante;*/

    int matriz[20][20], coluna, linha, somaLinha[20], soma;

    for(linha = 0; linha < 20; linha++){
        for(coluna = 0; coluna <20; coluna++){
            matriz[linha][coluna] = rand() % 5; 
        }
    }

    for(linha = 0; linha < 20; linha++){
        soma = 0;
        for(coluna = 0; coluna < 20; coluna++){
            soma += matriz[linha][coluna];    
        }
        somaLinha[linha] = soma;
    }

    printf("Matriz[20][20] gerada aleatoriamente:\n");
    for (linha = 0; linha < 20; linha++){
        for (coluna = 0; coluna < 20; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n\nVetor da soma das Linhas :\n");
    for(linha = 0; linha < 20; linha++){
        printf("%-4d",somaLinha[linha]);
    }

    for(linha = 0; linha < 20; linha++){
        for(coluna = 0; coluna <20; coluna++){
            matriz[linha][coluna] *= somaLinha[linha];
        }
    }

    printf("\n\n\nMatriz[20][20] gerada pela multiplicacao com o vetor:\n");
    for (linha = 0; linha < 20; linha++){
        for (coluna = 0; coluna < 20; coluna++){
            printf("%-6d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}