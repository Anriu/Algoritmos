#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*9.	Faça uma Programa que receba, como entrada, 
    uma lista de números positivos ou negativos, 
    e forneça como saída, a soma dos números positivos e a soma dos números negativos. 
    O algoritmo deve parar de pedi valores quando for fornecido o valor zero.*/

    setlocale(LC_ALL,"Portuguese");

    
    int numero, somaNegativos = 0, somaPositivos = 0;
    printf("Para parar o programa digite 0\n");

    do{

        printf("Informe um numero inteiro: ");
        scanf("%d", &numero);

        if(numero > 0){
            somaPositivos += numero;
        }
        if(numero < 0){
            somaNegativos += numero;
        }

    }while(numero!=0);


    printf("Soma dos positivos é de: %d\n",somaPositivos);
    printf("Soma dos negativos é de: %d\n",somaNegativos);

    return 0;
}