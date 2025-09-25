#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*7)Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores*/

    setlocale(LC_ALL, "Portuguese");
    
    int primeiroValor, segundoValor, terceirovalor, soma;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &primeiroValor);
    printf("Informe um valor inteiro: ");
    scanf("%d", &segundoValor);
    printf("Informe um valor inteiro: ");
    scanf("%d", &terceirovalor);
    

    if(primeiroValor > segundoValor){
        if(segundoValor > terceirovalor){
            soma = primeiroValor + segundoValor;
            printf("A soma dos dois maiores (%d e %d) é de: %d\n",primeiroValor, segundoValor,soma);
        } else{
            soma = primeiroValor + terceirovalor;
            printf("A soma dos dois maiores (%d e %d) é de: %d\n",primeiroValor, terceirovalor,soma);
        }
    }else{
        if(primeiroValor > terceirovalor){
            soma = segundoValor + primeiroValor;
            printf("A soma dos dois maiores (%d e %d) é de: %d\n",segundoValor, primeiroValor,soma);
        }else{
            soma = segundoValor + terceirovalor;
            printf("A soma dos dois maiores (%d e %d) é de: %d\n",segundoValor, terceirovalor,soma);
        }
    }

    system("pause");
    return 0;
}