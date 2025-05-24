#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*13)	Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

    setlocale(LC_ALL, "Portuguese");
    
    int primeiroValor, segundoValor;
    
    printf("Informe um numero inteiro: ");
    scanf("%d",&primeiroValor);
    printf("Informe um numero inteiro: ");
    scanf("%d",&segundoValor);
    

    if(primeiroValor > segundoValor){
        printf("%d , %d \n", primeiroValor, segundoValor);
    }else{
        printf("%d , %d \n", segundoValor, primeiroValor);
    }
    
    system("pause");
    return 0;
}