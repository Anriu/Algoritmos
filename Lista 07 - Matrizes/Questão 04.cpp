#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Leia uma matriz 8 x 8 e imprima. 
    Em seguida a transforme numa matriz triangular inferior, 
    (atribuindo zero a todos os elementos acima da diagonal principal), 
    imprimindo-a ao final*/

    int matriz[8][8], coluna, linha;

    for(linha = 0; linha < 8; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            //matriz[linha][coluna] = rand() % 10; //Para gerar um numero aleatorio ate 10 para o usuario nao ter que informar nenhum valor 
            printf("Informe um valor para a matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    system("cls");
    printf("Matriz Informada: \n");
    for(linha = 0; linha < 8; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            printf("%-4d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    for(linha = 0; linha < 8; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            if (coluna >= linha + 1){
                matriz[linha][coluna] = 0;
            }         
        }
    }
   
    printf("\n\nMatriz triangular superior da matriz informada: \n");
    for(linha = 0; linha < 8; linha++){
        for(coluna = 0; coluna < 8; coluna++){
            printf("%-4d", matriz[linha][coluna]);
        }
        printf("\n");
    }  
    
    

    return 0;    
}