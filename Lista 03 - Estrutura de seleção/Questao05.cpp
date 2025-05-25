#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*5)	Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total*/

    setlocale(LC_ALL, "Portuguese");

    float salarioFixo, valorVendas, comissao, salarioFinal;
    
    printf("Informe seu salario fixo: ");
    scanf("%f",&salarioFixo);
    
    printf("Informe quanto de vendas realizou: ");
    scanf("%f",&valorVendas);

    if(valorVendas < 1500){
        comissao = valorVendas * 3/100;
        salarioFinal = salarioFixo + comissao;
    }else{
        comissao = valorVendas * 5/100;
        salarioFinal = salarioFixo + comissao;
    }
    
    printf("Seu salario final é de R$%.2f\n", salarioFinal);
     
    system("pause");
    return 0;
}