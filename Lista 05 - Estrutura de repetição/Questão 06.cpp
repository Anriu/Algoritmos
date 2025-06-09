#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*6.	Em uma eleição presidencial, existem quatro candidatos. 
    Os votos são informados através de código. Os códigos utilizados são:
    1,2,3,4 votos para os respectivos candidatos; 
    5 voto nulo; 
    6 voto em branco. 
    Escreva um Programa que leia votos, calcule e imprima:
	total de votos para cada candidato; 
	total de votos nulos; 
	total de votos em branco; 
	porcentagem de votos nulos sobre o total de votos; 
	porcentagem de votos em branco sobre o total de votos. 

	OBS: Para finalizar o conjunto de votos, tem-se o valor zero.*/
    setlocale(LC_ALL,"Portuguese");
    
    int voto, caditado1 = 0, caditado2 = 0, caditado3 = 0, caditado4 = 0, votosNulos = 0, votosBrancos = 0, totalDeVotos = 0;
    float porcentagem;

    printf("Vote:\n1 = Cadidato 1\n2 = Cadidato 2\n3 = Cadidato 3\n4 = Cadidato 4\n5 = Nulo\n6 = Branco\n0 = Sair\nCaso informe um valor invalido o voto não será contabilizado.\n");
    
    do{
        printf("Vote:");
        scanf("%d",&voto);

        switch (voto){
        case 1:
            caditado1++;
            totalDeVotos ++;
            break;
        case 2:
            caditado2++;
            totalDeVotos ++;
            break;
        case 3:
            caditado3++;
            totalDeVotos ++;
            break;
        case 4:
            caditado4++;
            totalDeVotos ++;
            break;
        case 5:
            votosNulos++;
            totalDeVotos ++;
            break;
        case 6:
            votosBrancos++;
            totalDeVotos ++;
            break;
        }

    } while (voto != 0);
    
    printf("\nTiveram o total de %d votos.\n",totalDeVotos);
    printf("O cadidato 01 teve %d votos.\n",caditado1);
    printf("O cadidato 02 teve %d votos.\n",caditado2);
    printf("O cadidato 03 teve %d votos.\n",caditado3);
    printf("O cadidato 04 teve %d votos.\n",caditado4);

    porcentagem = (float) votosNulos * 100/totalDeVotos;
    printf("Tiveram %d votos nulos. Que representam %.2f%%\n",votosNulos, porcentagem);

    porcentagem = (float) votosBrancos * 100/totalDeVotos;
    printf("Tiveram %d votos brancos. Que representam %.2f%%\n",votosBrancos, porcentagem);
   

    return 0;
}