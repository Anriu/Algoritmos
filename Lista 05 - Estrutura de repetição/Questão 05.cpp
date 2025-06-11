#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*4.5.	Escreva um Programa que receba um número inteiro 
    e verifique se o número fornecido é primo ou não. 
    Imprima mensagem de número primo ou número não primo. 
    Observação: um número é primo se este é divisível apenas pelo número um e por ele mesmo.*/
    setlocale(LC_ALL,"Portuguese");
    
    int numero, numeroPrimo = 0, count;
    printf("Informe um número: ");
    scanf("%d", &numero);

    for(count = 2; count < numero; count++){
        if(numero%count == 0){
            numeroPrimo++;
        }
    }

    if(numeroPrimo != 0){
        printf("%d não é primo.\n", numero);
    }else{
        printf("%d é primo.\n", numero);
    }
    
    return 0;
}