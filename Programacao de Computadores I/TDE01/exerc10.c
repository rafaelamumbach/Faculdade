/* ---- TDE 01
   ---- Exercicio 10     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 02/04/2024
*/

#include <stdio.h>

int main() {
    int numero_vendedor;
    float salario_fixo, total_vendas, percentual, salario_total;

    printf("Informe o numero do vendedor: ");
    scanf("%d", &numero_vendedor);

    printf("Informe o salario fixo: ");
    scanf("%f", &salario_fixo);

    printf("Informe o total de vendas efetuadas: ");
    scanf("%f", &total_vendas);

    printf("Informe o percentual de ganho sobre as vendas: ");
    scanf("%f", &percentual);

    salario_total = (salario_fixo + (total_vendas * percentual / 100));

    printf("-- Numero do vendedor: %d\n-- Salario total: R$ %.2f\n", numero_vendedor, salario_total);

    return 0;
}