#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Crie uma matriz 7X8 onde cada elemento é a soma dos índices de sua posição dentro da matriz*/

    int matriz[7][8], coluna, linha;

    for(linha = 0; linha < 7; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            matriz[linha][coluna] = linha+coluna;
        }
    }

    printf("Matriz Informada: \n");
    for(linha = 0; linha < 7; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            printf("%-4d", matriz[linha][coluna]);
        }
        printf("\n");
    }   

    return 0;    
}