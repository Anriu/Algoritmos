#include<stdio.h>
#include<stdlib.h>
#include <cstring>

int main (){

    /*Construa um sistema que gerencie as notas de alunos de uma escola. No cadastro de um aluno o usuário precisa informar o nome do aluno e suas 4 notas. O sistema deve permitir o usuário cadastrar quantos alunos ele quiser. Quando ele não quiser mais cadastrar informa a palavra “finalizar” indicando que ele não deseja mais cadastrar. Após finalizar o cadastro, o sistema deve exibir um menu ao usuário com as opções de:
    - Calcular a média de um aluno escolhido pelo usuário;
    2- Listar todos os alunos e suas médias.
    3- Listar somente os alunos aprovados (media >=7);
    4- Listar somente os alunos em final (media >=5 e media <7);
    5- Listar somente os alunos reprovados (media <50;
    6- Sair;
    OBS 1: Use uma matriz de char para armazenar os nomes dos alunos, cadastrando em cada linha da matriz um nome de aluno. Para efeito de  testes, use uma matriz de 10 linhas, considerando que será cadastrado no máximo 10 alunos. Considere um número de 30 colunas para garantir   que em cada linha caberá o nome completo do aluno;
    OBS 2: Use uma matriz de float para armazenar as notas dos alunos. Em cada linha será armazenado as notas de um aluno. Considere que as     notas da primeira linha da matriz de notas correspondem ao nome do aluno da primeira linha da matriz de nomes. As notas da segunda linha    da matriz de notas correspondem ao nome do aluno da segunda linha da matriz de nomes, e assim por diante.
    OBS 3: O sistema deve ficar exibindo o menu de opções enquanto o usuário não escolher a opção sair. Enquanto o usuário não escolher a   opção sair, o sistema fica exibindo o menu e executando as opções solicitadas pelo usuário. Use uma estrutura switch para executar a opção    escolhida, mostrar o resultado e volta para o menu permitindo o usuário escolher novamente uma das opções.*/

    //Quantidade limite de alunos que podem ser amazenados
    int quantidade = 1000;
    char nomes [quantidade][30], saida[30];
    float notas [quantidade][4], media[quantidade], soma = 0;
    int contador = 0, contadorNotas, escolha, alunoIndice = 0, totalAlunos = 0;
    bool loop = true;


    //While em loop que so termina caso o usuario digite finalizar
    while (loop){
        printf("Informe o Nome do Aluno: ");
        gets(nomes[contador]);
        
        for(contadorNotas = 0; contadorNotas < 4; contadorNotas++){
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


    //Calculo da media de todos os alunos
    for(contador = 0; contador < totalAlunos; contador++){
        soma = 0;
        for(contadorNotas = 0; contadorNotas < 4; contadorNotas++){
            soma += notas[contador][contadorNotas];
        }
        media[contador] = soma/4;
    }



    do{
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

        if(escolha != 6 && escolha > 0){
            switch(escolha){
            case 1:
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
                
                break;

            case 2:
                system("CLS");
                printf("Lista de alunos:\n");
                for(contador = 0; contador < totalAlunos; contador++){
                    printf("Aluno %d:\n", contador +1);
                    printf("Nome: %s ", nomes[contador]);
                    printf("Media: %.2f", media[contador]);
                    printf("\n");
                }
                system("pause");
                break;

            case 3:
                system("CLS");
                printf("Alunos aprovados: \n");
                for(contador = 0; contador < totalAlunos; contador++){
                    if(media[contador] >= 7){
                        printf("Aluno %d:\n", contador +1);
                        printf("Nome: %s ", nomes[contador]);
                        printf("Media: %.2f", media[contador]);
                        printf("\n");
                    }
                }
                system("pause");
                break;

            case 4: 
                system("CLS");
                printf("Alunos de final: \n");
                for(contador = 0; contador < totalAlunos; contador++){
                    if(media[contador] >= 5 && media[contador] < 7){
                        printf("Aluno %d:\n", contador +1);
                        printf("Nome: %s ", nomes[contador]);
                        printf("Media: %.2f", media[contador]);
                        printf("\n");
                    }
                }
                system("pause");
                break;

            case 5:
                system("CLS");
                printf("Alunos reprovados: \n");
                for(contador = 0; contador < totalAlunos; contador++){
                    if(media[contador] < 5){
                        printf("Aluno %d:", contador +1);
                        printf("Nome: %s", nomes[contador]);
                        printf("Media: %.2f", media[contador]);
                        printf("\n");
                    }
                }
                system("pause");
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