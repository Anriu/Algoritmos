#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Leia uma matriz 4 x 4 e imprima. 
    Em seguida troque os valores da 1ª.
    linha pelos da 4ª.coluna, vice-e-versa. 
    Imprimir ao final a matriz obtida*/


    int matriz[4][4], coluna, linha, aux[4], aux2[4];

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            //matriz[linha][coluna] = rand() % 10; //Para gerar um numero aleatorio ate 10 para o usuario nao ter que informar nenhum valor 
            printf("Informe um valor para a matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Matriz informada:\n");
    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }  
    
    for(coluna = 0; coluna < 4; coluna++){
        aux[coluna] = matriz[0][coluna];
    }

    for(linha = 0; linha < 4; linha++){
        aux2[linha] = matriz[linha][3];
    }
   

    for(linha = 0; linha < 4; linha++){
        matriz[linha][3] = aux[linha];
    }
    
    for(coluna = 0; coluna < 4; coluna++){
        matriz[0][coluna] = aux2[coluna];
    }


    printf("------------------------------\n");
    printf("Matriz ccom os valores da linha 1 e da coluna 4 trocados: \n");
    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }  


    return 0;    
}