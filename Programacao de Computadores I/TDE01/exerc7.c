/* ---- TDE 01
   ---- Exercicio 07     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 27/03/2024
*/

#include <stdio.h>

int main (){

    int qtd1, qtd2;
    float valor1, valor2, perc_IPI, total_pecas, total_IPI, total_compra;

    printf("Insira o nro de pecas do tipo 1: ");
    scanf("%d", &qtd1);

    printf("Insira o valor de cada peca do tipo 1: ");
    scanf("%f", &valor1);

    printf("Insira o nro de pecas do tipo 2: ");
    scanf("%d", &qtd2);

    printf("Insira o valor de cada peca do tipo 2: ");
    scanf("%f", &valor2);

    printf("Insira o percentual do IPI acrescentado: ");
    scanf("%f", &perc_IPI);

    total_pecas = ((qtd1 * valor1) + (qtd2 * valor2));

    total_IPI = total_pecas * (perc_IPI / 100);

    total_compra = total_pecas + total_IPI;

    printf("\nValor total da compra: R$ %.2f\n", total_compra);
    
    return 0;
}