#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*4.Escreva um Programa que receba um conjunto de valores inteiros 
    e positivos, calcule e imprima o maior e o menor valor do conjunto. 
    Para encerrar a entrada de dados, deve ser digitado o valor zero. 
    Para valores negativos, deve ser enviada uma mensagem. 
    Esses valores (negativos) não entrarão nos cálculos*/
    setlocale(LC_ALL,"Portuguese");

    int valor, incializador = 1, valorMenor,valorMaior;

    do{
        
        printf("Informe um valor: ");
        scanf("%d", &valor);

        if(valor >= 0){
            if(valor != 0){
                if(incializador == 1){
                    valorMaior = valor;
                    valorMenor = valor;
                    incializador = 0;
                } else{
                    if(valor > valorMaior){
                        valorMaior = valor;
                    }
                    if(valor < valorMenor){
                        valorMenor = valor;
                    }
                }
            }

        } else{
            printf("Esses valores (negativos) não entrarão nos cálculos\n");
        }
        
    } while (valor != 0);
    
    printf("O maior valor %d\n", valorMaior);
    printf("O menor valor %d\n", valorMenor);
    return 0;
}