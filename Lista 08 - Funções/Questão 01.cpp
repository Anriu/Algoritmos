#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void triangulo(float ladoA, float ladoB, float ladoC){

    float somaA = ladoB + ladoC;
    float somaB = ladoA + ladoC;
    float somaC = ladoB + ladoB;


    if( ladoA < somaA && ladoB < somaB && ladoC < somaC){
        if(ladoA == ladoB && ladoB == ladoC){
            printf("Triângulo Equilátero.\n");
        } else 
        if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
            printf("Triângulo Isósceles.\n");
        }else{
            printf("Triângulo Escaleno.\n");
        }
    } else{
        printf("Os valores %.2f, %.2f, %.2f não podem formar um triângulo.\n", ladoA, ladoB,ladoC);
    }

}

int main (){

    float ladoA, ladoB, ladoC;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o lado A do triângulo: ");
    scanf("%f", &ladoA);
    printf("Informe o lado B do triângulo: ");
    scanf("%f", &ladoB);
    printf("Informe o lado C do triângulo: ");
    scanf("%f", &ladoC);

    triangulo(ladoA,ladoB,ladoC);

    return 0;    
}


