/* ---- TDE 01
   ---- Exercicio 12     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 02/04/2024
*/

#include <stdio.h>

int main() {
    float custo_fabrica, perc_dis, valor_dis, perc_imp, valor_imp, custo_total;

    printf("Custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    printf("Percentual do distribuidor: ");
    scanf("%f", &perc_dis);

    printf("Percentual dos impostos: ");
    scanf("%f", &perc_imp);

    valor_imp = custo_fabrica * (perc_imp / 100);
    valor_dis = custo_fabrica * (perc_dis / 100);

    custo_total = custo_fabrica + valor_imp + valor_dis;

    printf("Valor a ser pago pelo carro: R$%.2f\n", custo_total);

    return 0;
}
