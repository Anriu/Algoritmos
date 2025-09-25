#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*8.	Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) 
    de 15 pessoas. Faça uma Programa que calcule e escreva: 
    •	a maior e a menor altura do grupo; 
    •	a média de altura das mulheres; 
    •	o número de homens. 
 
    */
    setlocale(LC_ALL,"Portuguese");


    char sexo;
    float altura, somaAltura = 0, alturaMedia, maiorAltura, menorAltura;
    int numeroHomens = 0, inicializador = 1, i;

    for(i= 0; i < 4; i++){
        printf("Informe o sexo da pessoa: (m/f): ");
        scanf("%c", &sexo);
        printf("Informe a altura da pessoa: (ex: 1,70): ");  
        scanf("%f", &altura);
        fflush(stdin);

        if(sexo == 'm' || sexo == 'M'){
            numeroHomens++;
        }

        if(sexo == 'f' || sexo == 'F'){
            somaAltura += altura;
        }

        if(inicializador == 1){
            maiorAltura = altura;
            menorAltura = altura;
            inicializador = 0;
        } else{
            if(altura > maiorAltura){
                maiorAltura = altura;
            }

            if(altura < menorAltura){
                menorAltura = altura;
            }
            
        }
      
    }

    printf("A maior altura foi de %.2f\n",maiorAltura);
    printf("A menor altura foi de %.2f\n",menorAltura);
    
    alturaMedia = somaAltura/i;
    printf("A altura media das mulheres é de %.2f\n",alturaMedia);
    printf("A quantidade de homens foi de %d\n",numeroHomens);
    return 0;
}