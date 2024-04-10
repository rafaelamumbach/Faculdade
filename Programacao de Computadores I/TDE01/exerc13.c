/* ---- TDE 01
   ---- Exercicio 13     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 03/04/2024
*/

#include <stdio.h>

int main() {
    int num_vendedor, num_carros;
    float val_carro, sal_fixo, comissao_fixa, sal_total;

    printf("-- Calculo de salario! --\n");
    printf("Numero do VENDEDOR => ");
    scanf("%d", &num_vendedor);

    printf("Numero de CARROS VENDIDOS => ");
    scanf("%d", &num_carros);

    printf("Valor de CADA CARRO => ");
    scanf("%f", &val_carro);

    printf("Valor do SALARIO FIXO => ");
    scanf("%f", &sal_fixo);

    printf("Valor que recebe por CARRO VENDIDO (comissao fixa) => ");
    scanf("%f", &comissao_fixa);

    sal_total = sal_fixo + (num_carros * comissao_fixa) + (0.05 * num_carros * val_carro);
    
    printf("=> => O salario total do vendedor %d eh: R$%.2f", num_vendedor, sal_total);

    return 0;
}