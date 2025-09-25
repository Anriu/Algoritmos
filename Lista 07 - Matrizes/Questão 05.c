#include<stdio.h>
#include<stdlib.h>

int main (){

    /*Leia uma matriz 10 x 10 e escreva a localização 
    (linha e a coluna) do maior valor.*/


    int matriz[10][10], coluna, linha, aux, maiorLinha, maiorColuna;

    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            //matriz[linha][coluna] = rand() % 10; //Para gerar um numero aleatorio ate 10 para o usuario nao ter que informar nenhum valor 
            printf("Informe um valor para a matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }


    aux = matriz[0][0];

    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            if(matriz[linha][coluna] > aux){
                aux = matriz[linha][coluna];
                maiorLinha = linha;
                maiorColuna = coluna;
            }    
        }
    }


    system("cls");
    printf("Matriz Informada: \n");
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            printf("%-4d", matriz[linha][coluna]);
        }
        printf("\n");
    }  
    
    printf("O maior valor informado foi: %d que este na matriz na posicao [%d][%d]\n", aux, maiorLinha,maiorColuna);
    

    return 0;    
}