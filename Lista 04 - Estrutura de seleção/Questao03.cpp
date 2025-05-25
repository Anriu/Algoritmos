#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*3)Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido. */
    setlocale(LC_ALL, "Portuguese");

    int codigo, quantidade;
    float valor;
    printf("Codigos disponiveis:\n1001\n1324\n6548\n987\n7623\n");
    printf("Informe o codigo do produto que você comprou: ");
    scanf("%d", &codigo);


    //Usuario so ira informar a quantidade apenas caso o codigo de produto seja valido
    switch(codigo){
        case 1001:
            printf("Informe a quantidade do produto que você comprou: ");
            scanf("%d", &quantidade);
            valor = quantidade * 5.32;
            printf("Você pagará: R$%.2f\n", valor);
            break;
        case 1324:
            printf("Informe a quantidade do produto que você comprou: ");
            scanf("%d", &quantidade);
            valor = quantidade * 6.45;
            printf("Você pagará: R$%.2f\n", valor);
            break;
        case 6548:
            printf("Informe a quantidade do produto que você comprou: ");
            scanf("%d", &quantidade);
            valor = quantidade * 2.37;
            printf("Você pagará: R$%.2f\n", valor);
            break;
        case 987:
            printf("Informe a quantidade do produto que você comprou: ");
            scanf("%d", &quantidade);
            valor = quantidade * 5.32;
            printf("Você pagará: R$%.2f\n", valor);
            break;
        case 7623:
            printf("Informe a quantidade do produto que você comprou: ");
            scanf("%d", &quantidade);
            valor = quantidade * 6.45;
            printf("Você pagará: R$%.2f\n", valor);
            break;
        default:
            printf("Codigo invalido\n");
            break;
    }
    


    system("pause");
    return 0;
}