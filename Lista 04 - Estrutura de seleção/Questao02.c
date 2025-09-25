#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*2)Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
        a.	Infantil A = 5 a 7 anos
        b.	Infantil B = 8 a 11 anos
        c.	Juvenil A = 12 a 13 anos
        d.	Juvenil B = 14 a 17 anos
        e.	Adultos = Maiores de 18 anos*/
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade >= 5){
        switch (idade){
            case 5 ... 7:
            printf("Infantil A\n");
            break;
        case 8 ... 11:
            printf("Infantil B\n");
                break;
        case 12 ... 13:
            printf("Juvenil A\n");
            break;
        case 14 ... 17:
            printf("Juvenil B\n");
            break;
        default:
            printf("Adultos\n");
            break;
        }
    } else{
        printf("Não temos classificação para pessoas com menos de 5 anos\n");
    }
    
    


    system("pause");
    return 0;
}