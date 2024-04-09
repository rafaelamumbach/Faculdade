#include <stdio.h>

int main(){
    
    int cargo;
    float salarioAtual, valorAumento, salarioFinal;
    
    printf("Digite o codigo referente ao cargo e o salario do colaborador\n");
    scanf("%d %f", &cargo, &salarioAtual);
    
    if(cargo == 1){
        valorAumento = salarioAtual * 0.5;
        salarioFinal = salarioAtual + valorAumento;
        printf("O colaborador do cargo Escrituario recebeu 50%% de aumento\n");
        printf("O valor do aumento foi de: R$%.2f\n", valorAumento);
        printf("Seu novo salario e de: R$%.2f\n", salarioFinal);
    }else if(cargo == 2){
        valorAumento = salarioAtual * 0.35;
        salarioFinal = salarioAtual + valorAumento;
        printf("O colaborador do cargo Secretario recebeu 35%% de aumento\n");
        printf("O valor do aumento foi de: R$%.2f\n", valorAumento);
        printf("Seu novo salario e de: R$%.2f\n", salarioFinal);
    }else if(cargo == 3){
        valorAumento = salarioAtual * 0.2;
        salarioFinal = salarioAtual + valorAumento;
        printf("O colaborador do cargo Secretario recebeu 20%% de aumento\n");
        printf("O valor do aumento foi de: R$%.2f\n", valorAumento);
        printf("Seu novo salario e de: R$%.2f\n", salarioFinal);
    }else if(cargo == 4){
        valorAumento = salarioAtual * 0.1;
        salarioFinal = salarioAtual + valorAumento;
        printf("O colaborador do cargo Secretario recebeu 10%% de aumento\n");
        printf("O valor do aumento foi de: R$%.2f\n", valorAumento);
        printf("Seu novo salario e de: R$%.2f\n", salarioFinal);
    }else printf("O colaborador do cargo Diretor nao recebe nenhum aumento\n");
    
    return 0;
    
}