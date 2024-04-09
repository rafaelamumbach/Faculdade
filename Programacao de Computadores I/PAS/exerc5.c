#include <stdio.h>

int main() {
    int dia, mes, ano, idade;
    int dia_atual, mes_atual, ano_atual;
    float valor_compra = 0, desconto = 0.0;

    printf("Informe dia, mes e ano de nascimento (00/00/00): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    printf("Informe dia, mes e ano atual (00/00/00): ");
    scanf("%d%d%d", &dia_atual, &mes_atual, &ano_atual);

    printf("Informe o valor das suas compras: ");
    scanf("%f", &valor_compra);

    idade = ano_atual - ano;
    if (mes_atual < mes || (mes_atual == mes && dia_atual < dia)) {
        idade--;
    }

    if (idade >= 18 && idade <= 25) {
        desconto = 0.05;
    } else if (idade >= 26 && idade <= 35) {
        desconto = 0.08;
    } else if (idade >= 36 && idade <= 45) {
        desconto = 0.10;
    } else if (idade >= 46 && idade <= 55) {
        desconto = 0.12;
    } else if (idade >= 56 && idade <= 65) {
        desconto = 0.15;
    } else if (idade > 66) {
        desconto = 0.20;
    }

    valor_compra = valor_compra - (valor_compra * desconto);

    printf("Valor final da compra com desconto: R$%.2f\n", valor_compra);

    return 0;
}
