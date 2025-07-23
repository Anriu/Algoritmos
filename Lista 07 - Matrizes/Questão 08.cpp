#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Escrever um algoritmo que gere aleatoriamente uma matriz M(5,5) 
    e cria 2 vetores SL(5) e SC(5) que contenham, respectivamente, 
    as somas de cada linha e a soma de cada colunas de M. Imprimir a matriz e os vetores criados.*/

    int matriz[5][5], coluna, linha, somaLinha[5], somaColuna[5], soma;

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            matriz[linha][coluna] = rand() % 10; 
        }
    }

    for(linha = 0; linha < 5; linha++){
        soma = 0;
        for(coluna = 0; coluna < 5; coluna++){
            soma += matriz[linha][coluna];    
        }
        somaLinha[linha] = soma;
    }

    for(coluna = 0; coluna < 5; coluna++){
        soma = 0;
        for(linha = 0; linha < 5; linha++){
            soma += matriz[linha][coluna];    
        }
        somaColuna[coluna] = soma;
    }

    printf("Matriz[5][5] gerada aleatoriamente:\n");
    for (linha = 0; linha < 5; linha++){
        for (coluna = 0; coluna < 5; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Soma das linhas da Matriz:\n");
    for(linha = 0; linha < 5; linha++){
        printf("Soma da linha %d e de %d\n",linha +1,somaLinha[linha]);
    }

    printf("\nSoma das colunas da Matriz:\n");
    for(coluna = 0; coluna < 5; coluna++){
        printf("Soma da coluna %d e de %d\n",coluna +1,somaColuna[coluna]);
    }
    return 0;
}