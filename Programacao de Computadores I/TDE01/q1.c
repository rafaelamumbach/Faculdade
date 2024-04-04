

#include <stdio.h>

int main() {
    int hora_entrada, min_entrada, seg_entrada;
    int hora_saida, min_saida, seg_saida;
    int tempo_permanencia_seg;
    float valor_compras;
    float custo_estacionamento;
    float desconto = 0.0;

    printf("ESTACIONAMENTO\n");
    printf("Informe o horario de Entrada (0h 0m 0s): ");
    scanf("%d%d%d", &hora_entrada, &min_entrada, &seg_entrada);

    printf("Informe o horario de Saida (0h 0m 0s): ");
    scanf("%d%d%d", &hora_saida, &min_saida, &seg_saida);

    printf("Informe o valor das suas compras (R$): ");
    scanf("%f", &valor_compras);

    tempo_permanencia_seg = (hora_saida - hora_entrada) * 3600 + (min_saida - min_entrada) * 60 + (seg_saida - seg_entrada);

    if (hora_entrada < 7 || hora_saida > 23) {
        printf("Estacionamento fechado! Volte entre 7h-23h.\n");
        return 0;
    }

    if (tempo_permanencia_seg <= 3600) { // Se o tempo de permanência for de até 1 hora
        custo_estacionamento = 12.0; // Cobrar o valor de 1 hora
    } else if (tempo_permanencia_seg <= 7200) { // Se o tempo de permanência for de mais de 1 hora e até 2 horas
        custo_estacionamento = 12.0; // Cobrar o valor de 1 hora
    } else { // Se o tempo de permanência for superior a 2 horas
        custo_estacionamento = ((tempo_permanencia_seg / 3600) + 1) * 12; // Arredonda para cima para cobrar a próxima hora
    }

    // Aplica desconto com base no valor das compras
    if (valor_compras == 0.00) {
        desconto = 0.0;
    } else if (valor_compras <= 100) {
        desconto = 0.2;
    } else if (valor_compras <= 300) {
        desconto = 0.4;
    } else if (valor_compras <= 500) {
        desconto = 0.6;
    } else if (valor_compras <= 700) {
        desconto = 0.8;
    } else if (valor_compras <= 1000) {
        desconto = 1.0;
    }

    custo_estacionamento = custo_estacionamento * (1.0 - desconto);

    printf("Custo do estacionamento: R$ %.2f\n", custo_estacionamento);

    return 0;
}
