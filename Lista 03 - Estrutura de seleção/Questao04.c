#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*4)	A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).*/

    setlocale(LC_ALL, "Portuguese");
    
    int horasTrabalhadas, horasExtras;
    float salarioHora, salarioBase, salarioExtra, salarioTotal;

    printf("Infome quantas horas trabalhou esse mês: ");
    scanf("%d", &horasTrabalhadas);

    printf("Informe quanto você ganha por hora (ex: 50.00) : ");
    scanf("%f", &salarioHora);

    //Uso de 160h devido a jornada ser 40h semanais e o mes ter 4 semanas
    if(horasTrabalhadas > 160){
        horasExtras = horasTrabalhadas - 160;
        salarioBase = salarioHora * 160;
        salarioExtra = salarioHora * horasExtras * 1.5; //Multiplicacao por 1.5 para acrescer os 50% extra do salario
        salarioTotal = salarioBase + salarioExtra;   
    }else{
        salarioTotal = salarioHora * horasTrabalhadas;
    }

    printf("Seu salario total é de: R$%.2f\n", salarioTotal);
    
    system("pause");
    return 0;
}