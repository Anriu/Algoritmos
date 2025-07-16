#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Escrever um algoritmo que lê 15 valores inteiros e armazene em um vetor K(15) e o imprima.
    Crie, a seguir, um vetor P, que contenha todos os números primos de K. Imprima o vetor P*/

    int k[15], p[15];
    int i, j, z =0, contadorPrimos; 

    for(i = 0; i <15; i++){
        printf("Informe o valor %d do vetor K: ", i + 1);
        scanf("%d", &k[i]);
    }

    printf("\nVetor K: ");
    for(i = 0; i < 15; i++){
        printf("%d ", k[i]);
    }

    for(i = 0; i <15; i++){

        contadorPrimos = 0;

        for(j = 2; j < k[i]; j++){
            if(k[i]%j==0){
                contadorPrimos++;
                break;
            }
        }

        if(contadorPrimos == 0){
                p[z] = k[i];
                z++;
            }
    }

    printf("\nVetor P: ");
    for(i = 0; i < z; i++){
        printf("%d ", p[i]);
    }
    return 0;
}

