/* ---- TDE 01
   ---- (Q1) Provas Anteriores     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 03/04/2024
*/

#include <stdio.h>

int main() {

    int horaChegada, horaSaida, minChegada, minSaida, segChegada, segSaida;
    float valorCompras, valorPorHora = 12.00, desconto = 0;

    printf("ESTACIONAMENTO\n");
    printf("Informe o horario de chegada (0h 0m 0s): ");
    scanf("%d%d%d", &horaChegada, &minChegada, &segChegada);

    printf("Informe o horario de saida (0h 0m 0s): ");
    scanf("%d%d%d", &horaSaida, &minSaida, &segSaida);

    printf("Informe o valor das suas compras (R$): ");
    scanf("%f", &valorCompras);

    if (horaChegada < 7 || horaSaida < 23){
        printf("Estacionamento fechado! Volte entre 7h-23h.");
    }

    return 0;
}