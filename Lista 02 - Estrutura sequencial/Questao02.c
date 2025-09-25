#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    /*Faça um algoritmo que leia quatro números informados pelo usuário e que depois
    imprima a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e
    4.*/

    setlocale(LC_ALL, "Portuguese");

    float cateto1, cateto2, hipotenusa;

    printf("Informe o valor do cateto: ");
    scanf("%f", &cateto1);

    printf("Informe o valor do cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    printf("A hipotenusa mede : %.2f\n", hipotenusa);
    system("pause");
    
    return 0;
}