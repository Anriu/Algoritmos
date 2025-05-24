#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*1)Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!*/

    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if(numero > 10){
        printf("É MAIOR QUE 10!\n");
    }else{
        printf("NÃO É MAIOR QUE 10!\n");
    }
    
    system("pause");
    return 0;
}