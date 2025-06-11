#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*10.Faça um Programa que receba a idade e o peso de 15 pessoas. 
    Calcule e imprima as médias dos pesos das pessoas da mesma faixa etária. 
    As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 30 anos*/

    setlocale(LC_ALL,"Portuguese");

    int idade, count, idade10 = 0, idade20 = 0, idade30 = 0, idadeMaior = 0;
    float peso, somaPeso10 = 0, somaPeso20 = 0,somaPeso30 = 0,somaPeso = 0, media;

    for(count = 0; count < 2; count++){

        printf("Informe a idade da pessoa: ");
        scanf("%d",&idade);
        printf("Informe o peso da pessoa (Ex 1,54): ");
        scanf("%f",&peso);
        

        if(idade >= 1 && idade <=10){
            somaPeso10 += peso;
            idade10++;
        }
        if(idade >= 11 && idade <=20){
            somaPeso20 += peso;
            idade20++;
        }
        if(idade >= 21 && idade <=30){
            somaPeso30 += peso;
            idade30++;
        }
        if(idade > 30){
            somaPeso += peso;
            idadeMaior++;
        }
    }

    printf("A media dos pesos foi de: \n");


    if(idade10 != 0){
        media = (float) somaPeso10/idade10;
        printf("[1 a 10 anos]: %.2f kg\n", media);
    }else{
        printf("[1 a 10 anos]: %d kg\n", idade10);
    }

    if(idade20 != 0){
        media = (float) somaPeso20/idade20;
    printf("[11 a 20 anos]: %.2f kg\n", media);
    }else{
        printf("[11 a 20 anos]: %d kg\n", idade20);
    }

    if(idade30 != 0){
        media = (float) somaPeso30/idade30;
        printf("[21 a 30 anos]: %.2f kg\n", media);
    }else{
        printf("[21 a 30 anos]: %d kg\n", idade30);
    }

    if(idadeMaior != 0){
        media = (float) somaPeso/idadeMaior;
        printf("[mais de 30 anos]: %.2f kg\n", media);
    }else{
        printf("[mais de 30 anos]: %d\n kg", idadeMaior);
    }

    system("pause");

    return 0;
}