/* ---- TDE 01
   ---- Exercicio 24    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    int publico_total;
    float renda_popular, renda_geral;
    float renda_arquibancada, renda_cadeiras, renda_total;

    printf("Digite o publico total do jogo: ");
    scanf("%d", &publico_total);

    renda_popular = 0.10 * publico_total * 1.00;
    renda_geral = 0.50 * publico_total * 5.00;
    renda_arquibancada = 0.30 * publico_total * 10.00;
    renda_cadeiras = 0.10 * publico_total * 20.00;

    renda_total = renda_popular + renda_geral + renda_arquibancada + renda_cadeiras;

    printf("\nRenda total do jogo: R$%.2f\n", renda_total);

    return 0;
}
