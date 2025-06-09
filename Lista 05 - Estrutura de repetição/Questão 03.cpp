#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont, idade, idade_1_15 = 0, idade_16_30 = 0, idade_31_45 = 0, idade_46_60 = 0, idade_mais_61 = 0;
    float porcentagem;

    for(cont = 0; cont < 15; cont++){
        printf("Informe a idade:");
        scanf("%d", &idade);

        if(idade <= 15){
            idade_1_15++;
        }else if (idade <= 30){
            idade_16_30++;
        } else if (idade <= 45){
            idade_31_45++;
        }else if (idade <= 60){
            idade_46_60++;
        }else{
            idade_mais_61++;
        }
    }

    porcentagem = (float) idade_1_15 * 100/cont;
    printf("Tiveram %d pessoas com idade de 1 a 15 que representa %.2f%%\n", idade_1_15, porcentagem);

    porcentagem = (float) idade_16_30 * 100/cont;
    printf("Tiveram %d pessoas com idade de 16 a 30 que representa %.2f%%\n", idade_16_30, porcentagem);

    porcentagem = (float) idade_31_45 * 100/cont;
    printf("Tiveram %d pessoas com idade de 31 a 45 que representa %.2f%%\n", idade_31_45, porcentagem);

    porcentagem = (float) idade_46_60 * 100/cont;
    printf("Tiveram %d pessoas com idade de 46 a 60 que representa %.2f%%\n", idade_46_60, porcentagem);

    porcentagem = (float) idade_mais_61 * 100/cont;
    printf("Tiveram %d pessoas com idade maior que 61 que representa %.2f%%\n", idade_mais_61, porcentagem);

    return 0;
}