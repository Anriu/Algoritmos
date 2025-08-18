#include <stdio.h>
#include <stdlib.h>
#include <cstring>
//Quantidade limite de alunos que podem ser amazenados
int quantidade = 1000;


int cadastroAlunos(char nomes[][30], float notas[][4]){
    //While em loop que so termina caso o usuario digite finalizar
    bool loop = true;
    int contador = 0;
    int totalAlunos = 0;
    char saida[30];
    while (loop){
        printf("Informe o Nome do Aluno: ");
        gets(nomes[contador]);
        
        for(int contadorNotas = 0; contadorNotas < 4; contadorNotas++){
            printf("Informe a %d nota do aluno: ", contadorNotas+1);
            scanf("%f", &notas[contador][contadorNotas]);
        }
        fflush(stdin);
        system("CLS");
        printf("Desejar continuar?\n");
        printf("Para continuar digite sim para sair digite finalizar: ");
        gets(saida);
        system("CLS");
        if(strcmp(saida, "finalizar") == 0){
            loop = false;   
        }

        //Contador de quantos alunos foram instanciados ao total
        totalAlunos++;
        contador++;
    }

    return totalAlunos;
}

float calculoMedia(int totalAlunos, float notas[][4], float media[]){
    //Calculo da media de todos os alunos
    float soma;
    for(int contador = 0; contador < totalAlunos; contador++){
        soma = 0;
        for(int contadorNotas = 0; contadorNotas < 4; contadorNotas++){
            soma += notas[contador][contadorNotas];
        }
        media[contador] = soma/4;
    }
    return media[totalAlunos];
}

int menu(){
    int escolha; 

    system("CLS");
    printf("Menu:\n");
    printf("1- Calcular a media de um aluno escolhido pelo usuario;\n");
    printf("2- Listar todos os alunos e suas medias.\n");
    printf("3- Listar somente os alunos aprovados (media >=7);\n");
    printf("4- Listar somente os alunos em final (media >=5 e media <7);\n");
    printf("5- Listar somente os alunos reprovados (media <5);\n");
    printf("6- Sair;\n");
    printf("Digite a opcao que deseja: ");
    scanf("%d", &escolha);   

    return escolha;
}

void mediaAlunoUnico(int totalAlunos, float notas[][4]){

    int alunoIndice, contadorNotas;
    float soma;


    system("CLS");
    printf("Informe o numero do aluno que deseja ver da media \n");
    printf("Numeros de alunos vao de 0 ate %d: ", totalAlunos);
    scanf("%d", &alunoIndice);
    if(alunoIndice >= 0 && alunoIndice <= totalAlunos){
        system("CLS");
        soma = 0;
        for(contadorNotas = 0; contadorNotas < 4; contadorNotas++){
            soma += notas[alunoIndice - 1][contadorNotas];
        }
        printf("A media desse aluno e de: %.2f\n", soma/4);
        system("pause");
                } else{
        system("CLS");
        printf("Aluno nao encontrado. ");
        system("pause");
    }

                
}

void mediaAlunos(int totalAlunos, char nomes[][30], float media[]){
    system("CLS");
    printf("Lista de alunos:\n");
    for(int contador = 0; contador < totalAlunos; contador++){
        printf("Aluno %d:\n", contador +1);
        printf("Nome: %s ", nomes[contador]);
        printf("Media: %.2f", media[contador]);
        printf("\n");
    }
    system("pause");
}

void alunosAprovados(int totalAlunos, char nomes[][30], float media[]){
    system("CLS");
    printf("Alunos aprovados: \n");
    for(int contador = 0; contador < totalAlunos; contador++){
        if(media[contador] >= 7){
            printf("Aluno %d:\n", contador +1);
            printf("Nome: %s ", nomes[contador]);
            printf("Media: %.2f", media[contador]);
            printf("\n");
        }
    }
    system("pause");
}

void alunosFinal(int totalAlunos, char nomes[][30], float media[]){
    system("CLS");
    printf("Alunos de final: \n");
    for(int contador = 0; contador < totalAlunos; contador++){
        if(media[contador] >= 5 && media[contador] < 7){
            printf("Aluno %d:\n", contador +1);
            printf("Nome: %s ", nomes[contador]);
            printf("Media: %.2f", media[contador]);
            printf("\n");
        }
    }
    system("pause");
}

void alunosReprovados(int totalAlunos, char nomes[][30], float media[]){
system("CLS");
    printf("Alunos reprovados: \n");
    for(int contador = 0; contador < totalAlunos; contador++){
        if(media[contador] < 5){
            printf("Aluno %d:", contador +1);
            printf("Nome: %s", nomes[contador]);
            printf("Media: %.2f", media[contador]);
            printf("\n");
        }
    }
    system("pause");
}

int main (){

    char nomes [quantidade][30];
    float notas [quantidade][4], media[quantidade];
    int escolha, totalAlunos;
   
    totalAlunos = cadastroAlunos(nomes, notas);
    media[totalAlunos] = calculoMedia(totalAlunos, notas, media);

    do{
        escolha = menu();
        if(escolha != 6 && escolha > 0){
            switch(escolha){
            case 1:
                mediaAlunoUnico(totalAlunos,notas);
                break;
            case 2:
                mediaAlunos(totalAlunos, nomes, media);
                break;

            case 3:
                alunosAprovados(totalAlunos, nomes, media);
                break;

            case 4: 
                alunosFinal(totalAlunos, nomes, media);
                break;

            case 5:
                alunosReprovados(totalAlunos, nomes, media);
                break;

            default:
                system("CLS");
                printf("Valor invalido, tente novamente");
                break;
            }
        }
    }while(escolha != 6);

    system("CLS");
    printf("Obrigado por utilizar nossos servicos");
    
    return 0;    
}