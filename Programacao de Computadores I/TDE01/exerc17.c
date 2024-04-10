/* ---- TDE 01
   ---- Exercicio 17     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>

int main() {
    float valor_dolar, taxa_dolar;
    float perc_ICMS, perc_lucro;
    float valor_compra_reais, valor_ICMS, valor_lucro, valor_total;

    printf("Valor da compra em ($): ");
    scanf("%f", &valor_dolar);

    printf("Taxa do dolar no dia da compra: ");
    scanf("%f", &taxa_dolar);

    printf("Percentual de ICMS: ");
    scanf("%f", &perc_ICMS);

    printf("Percentual de lucro da empresa: ");
    scanf("%f", &perc_lucro);

    valor_compra_reais = valor_dolar * taxa_dolar;

    valor_ICMS = valor_compra_reais * (perc_ICMS / 100);

    valor_lucro = valor_compra_reais * (perc_lucro / 100);
    
    valor_total = valor_compra_reais + valor_ICMS + valor_lucro;

    printf("Valor a ser pago em reais: %.2f\n", valor_total);

    return 0;
}
