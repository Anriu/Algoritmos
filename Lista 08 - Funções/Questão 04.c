#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void conversor(int valorDecimal){
    int binario[64]; 
    int i = 0;

    if (valorDecimal == 0) {
        printf("0");
        return;
    }

    while (valorDecimal > 0) {
        binario[i] = valorDecimal % 2; 
        valorDecimal = valorDecimal / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main (){

    int valorDecimal;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um valor em decimal para converter em binario(Apenas valores positivos): ");
    scanf("%d", &valorDecimal);

    conversor(valorDecimal);

    return 0;    
}


