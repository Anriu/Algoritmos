#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Ler uma matriz 4X3 real e imprimir a matriz (linha abaixo de linha). 
    Em seguida pedir ao usuário o número de uma linha da matriz, 
    calcular e imprimir a soma dos elementos da linha informada pelo usuário;*/

    int matriz[4][3], coluna, linha, soma = 0;

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 3; coluna++){

            //
            printf("Informe um valor para a matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    system("cls");
    printf("Matriz Informada: \n");
    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%-4d", matriz[linha][coluna]);
        }
        printf("\n");
    }   

    printf("Informe o indice de uma linha: \n");
    scanf("%d", &linha);
    linha -= 1;
    for(coluna = 0; coluna < 3; coluna++){
            soma += matriz[linha][coluna];
    }

    printf("A soma da linha %d da matriz e %d\n", linha+1, soma);

    return 0;    
}