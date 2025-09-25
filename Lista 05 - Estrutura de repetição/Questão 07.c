#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*7.Escreva um Programa para calcular N! (fatorial de N), sendo que o valor inteiro de N é fornecido pelo usuário. Sabe-se que: N! = 1 * 2 * 3 *... * (N-1) * N; 0! = 1, por definição.*/
    setlocale(LC_ALL,"Portuguese");
    int numero, NumeroFatorial = 1, count = 1;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    if (numero >= 0){ 
    do{
        NumeroFatorial *= count;
        count++;
    } while (count <= numero);
    printf("%d! = %d",numero,NumeroFatorial);  
    
    }else{
        printf("Valores negativos não são aceitos.\n");
    }
   
    
    return 0;
}