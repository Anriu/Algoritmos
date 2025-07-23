#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Escreva um algoritmo que leia uma matriz M(5,5) e imprima.
    Em seguida calcule as somas abaixo: 
    a. Soma da linha 4 de M 
    b. Soma da coluna 2 de M 
    c. Soma da diagonal principal 
    d. Soma da diagonal secundária 
    e. Soma e todos os elementos da matriz M*/

    int matriz[5][5], coluna, linha, somaLinha = 0, somaColuna = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTotal = 0;

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            //matriz[linha][coluna] = rand() % 10; //Para gerar um numero aleatorio ate 10 para o usuario nao ter que informar nenhum valor
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    system("cls");
    printf("Matriz Informada: \n");
    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }  
    
    for(coluna = 0; coluna < 5; coluna++){
            somaLinha += matriz[4][coluna];
    }
    printf("A soma da linha 4 da Matriz e: %d\n", somaLinha);
    

    for(linha = 0; linha < 5; linha++){
            somaColuna += matriz[linha][2];
    }
    printf("A soma da coluna 2 da Matriz e: %d\n", somaColuna);

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            if(linha == coluna){
                somaDiagonalPrincipal += matriz[linha][coluna];
            }

            if(linha + coluna == 4){
                somaDiagonalSecundaria += matriz[linha][coluna];
            }

            somaTotal += matriz[linha][coluna];
            
        }
    }  

    printf("A soma da diagonal principal da Matriz e: %d\n", somaDiagonalPrincipal);
    printf("A soma da diagonal secundaria da Matriz e: %d\n", somaDiagonalSecundaria);
    printf("A soma de todos os termos da Matriz e: %d\n", somaDiagonalSecundaria);
    return 0;    
}