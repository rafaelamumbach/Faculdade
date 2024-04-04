/* ---- TDE 01
   ---- (Q1) Provas Anteriores     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 04/04/2024
*/

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
    
    if (hora_entrada < 7 || hora_saida > 23){
        printf("Estacionamento fechado! Volte entre 7h-23h.\n");
        return 0;
    }

    if (tempo_permanencia_seg <= 600){
        custo_estacionamento = 0.00;

    } else {
        custo_estacionamento = ((tempo_permanencia_seg + 599) / 3600) * 12;

        if (valor_compras <= 100) {
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
    }

    printf("Custo do estacionamento: R$ %.2f\n", custo_estacionamento);

    return 0;
}