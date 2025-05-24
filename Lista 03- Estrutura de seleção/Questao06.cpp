#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*6)	Faça um algoritmo para ler: saldo, débito e crédito da conta de um cliente. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.*/

    setlocale(LC_ALL, "Portuguese");

    float saldo, debito, credito, saldoAtual;

    printf("Infome seu saldo: ");
    scanf("%f", &saldo);
    printf("Infome seu debito: ");
    scanf("%f", &debito);
    printf("Infome seu credito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;
    
    if (saldoAtual >= 0){
        printf("Saldo Positivo\n");
    }else{
        printf("Saldo Negativo\n");
    }
    
    system("pause");
    return 0;
}