/* ---- TDE 01
   ---- Exercicio 26    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    float taxa_fixa, taxa_por_km, valor_total_aluguel, valor_desconto;
    int num_dias, num_km_rodados;

    printf("Taxa fixa por dia: ");
    scanf("%f", &taxa_fixa);
    printf("Taxa por km rodado: ");
    scanf("%f", &taxa_por_km);
    printf("Numero de dias: ");
    scanf("%d", &num_dias);
    printf("Numero de km rodados: ");
    scanf("%d", &num_km_rodados);

    valor_total_aluguel = (taxa_fixa - (0.10 * taxa_fixa)) * num_dias + taxa_por_km * num_km_rodados;
    valor_desconto = 0.10 * taxa_fixa * num_dias;

    printf("Valor total do aluguel: R$%.2f\n", valor_total_aluguel);
    printf("Valor do desconto: R$%.2f\n", valor_desconto);
    printf("Numero de dias: %d\n", num_dias);
    printf("Kms rodados: %d km\n", num_km_rodados);

    return 0;
}
