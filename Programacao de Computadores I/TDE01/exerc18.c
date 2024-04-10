/* ---- TDE 01
   ---- Exercicio 18     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>

int main() {
    int num_apartamentos = 42;
    float taxa_promocao = 0.22, ocupacao_sem_promocao = 0.40, nova_ocupacao = 0.70;
    float diaria_normal, diaria_promocao;
    float valor_medio_sem_promocao, valor_medio_com_promocao;
    float lucro_prejuizo;

    printf("Digite o valor da diaria normal: ");
    scanf("%f", &diaria_normal);
    
    diaria_promocao = diaria_normal - (diaria_normal * taxa_promocao);

    valor_medio_sem_promocao = num_apartamentos * diaria_normal * ocupacao_sem_promocao;

    valor_medio_com_promocao = num_apartamentos * diaria_promocao * nova_ocupacao;
    
    lucro_prejuizo = valor_medio_com_promocao - valor_medio_sem_promocao;

    printf("Valor da diaria no periodo da promocao: %.2f\n", diaria_promocao);
    printf("Valor medio arrecadado sem a promocao, durante um mes: %.2f\n", valor_medio_sem_promocao);
    printf("Valor medio arrecadado com a promocao, durante um mes: %.2f\n", valor_medio_com_promocao);

    if (lucro_prejuizo > 0) {
        printf("Lucro mensal com a promocao: %.2f\n", lucro_prejuizo);
    } else if (lucro_prejuizo < 0) {
        printf("Prejuizo mensal com a promocao: %.2f\n", -lucro_prejuizo);
    } else {
        printf("Sem lucro nem prejuizo com a promocao.\n");
    }

    return 0;
}
