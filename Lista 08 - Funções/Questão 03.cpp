#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int opcoes(){
    int opcao;

    printf("Opções de pagamento: \n");
    printf("1) Opção: a vista com 10%% de desconto\n");
    printf("2) Opção: em duas vezes (valor do gasto total dividido em duas vezes)\n");
    printf("3) Opção: de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00).\n");
    printf("informe a opção desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

void opcao1(float pagamento){
    float valorFinal = pagamento * 0.9;
    printf("Você pagará: R$%.2f\n", valorFinal); 
}

void opcao2(float pagamento){
    float valorFinal = pagamento/2;
    printf("Você pagará duas parcelas de: R$%.2f\n", valorFinal);
}

void opcao3(float pagamento){
    

    if(pagamento <= 100){
        printf("Valor insufiente para usar essa opção de pagamento\n");
    } else{


        int parcelas;
        printf("Em quantas parcelas deseja parcelar (3 a 10): ");
        scanf("%d", &parcelas);

        
        float valorTotal = pagamento;
        
        for(int i = 0; i < parcelas; i ++){
            valorTotal *= 1.03;
        }

        float valorParcelas = valorTotal/parcelas;
        printf("Você pagará %d parcelas de: R$%.2f\n",parcelas,valorParcelas);
        printf("Totalizando: R$%.2f devido aos 3%% de juros.\n", valorTotal);
    }
}

int main (){

    float valorGasto;
    

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o total gasto: R$ ");
    scanf("%f", &valorGasto);


    int entrada = opcoes();

    switch (entrada){
        case  1:
            opcao1(valorGasto);
            break;
        case  2:
            opcao2(valorGasto);
            break;
        case  3:
            opcao3(valorGasto);
            break;
        
        default:
            printf("Opção inválida");
            break;
    }
    return 0;    
}




