#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Faça um algoritmo que gere a seguinte matriz:
    1 3 3 3 3 2
    3 1 3 3 2 3
    3 3 1 2 3 3
    3 3 2 1 3 3
    3 2 3 3 1 3
    2 3 3 3 3 1*/

    int matriz[6][6], coluna, linha;

    for (linha = 0; linha < 6; linha++){
        for (coluna = 0; coluna < 6; coluna++){
            if (linha == coluna){
                matriz[linha][coluna] = 1;
            }
            else if (linha + coluna == 5){
                matriz[linha][coluna] = 2;
            }
            else{
                matriz[linha][coluna] = 3;
            }
        }
    }

    printf("Matriz informada:\n");
    for (linha = 0; linha < 6; linha++){
        for (coluna = 0; coluna < 6; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}