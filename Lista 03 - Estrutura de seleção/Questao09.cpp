#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /*9)Faça um algoritmo que leia a altura (h) e o sexo (M / F) de uma pessoa, calcule e imprima o peso ideal, utilizando as seguintes fórmulas: 
    - para homens: (72,7 * h) – 58; 
    - para mulheres: (62,1 * h) – 44,7.*/

    setlocale(LC_ALL, "Portuguese");
    
    float altura, pesoIdeal;
    char sexo;

    printf("Informe seu sexo (m/f): ");
    scanf("%c", &sexo);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    switch (sexo){
    case 'm':
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal é de %.2f\n",pesoIdeal);
        break;
    
    case 'f':
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é de %.2f\n",pesoIdeal);
        break;
    
    default:
        printf("Sexo indisponivel");
        break;
    }
    
    system("pause");
    return 0;
}