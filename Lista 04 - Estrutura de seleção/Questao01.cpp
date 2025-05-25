#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    /*1)Crie um algoritmo para apresentar o menu abaixo para o usuário. Com base no menu pedir ao usuário para escolher uma opção e o algoritmo vai apresentar uma frase qualquer sobre a estação do ano.
    1- Verão
    2 - Outono
    3 - Inverno
    4 - Primavera*/
    setlocale(LC_ALL, "Portuguese");


    int controle;

    printf("1 - Verão\n2 - Outono\n3 - Inverno\n4 - Primavera\n");
    printf("Escolha o número de uma estação: ");
    scanf("%d", &controle);

    switch (controle){
    case 1:
        printf("O sol brilha alto e os dias parecem infinitos.\n");
        break;
    case 2:
        printf("As folhas caem dançando com o vento.\n");
        break;
    case 3:
        printf("O frio abraça e o silêncio aconchega.\n");
        break;
    case 4:
        printf("As flores despertam e o mundo se colore de novo.\n");
        break;
    
    default:
        printf("Número invalido");
        break;
    }



    system("pause");
    return 0;
}