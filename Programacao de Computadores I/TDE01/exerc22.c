/* ---- TDE 01
   ---- Exercicio 22    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>

int main() {
    float kg_farinha, preco_kg_farinha;
    float litros_agua, preco_litro_agua;
    float gramas_fermento, preco_g_fermento;
    float kw_hora_luz, preco_kw_hora;
    float perc_imposto;
    float custo_total, preco_venda, lucro;

    printf("Qtd kg de farinha: ");
    scanf("%f", &kg_farinha);
    printf("Preco p/kg de farinha: ");
    scanf("%f", &preco_kg_farinha);

    printf("Qtd de litros de agua: ");
    scanf("%f", &litros_agua);
    printf("Preco por litro de agua: ");
    scanf("%f", &preco_litro_agua);

    printf("Qtd de gramas de fermento: ");
    scanf("%f", &gramas_fermento);
    printf("Preco p/ grama de fermento: ");
    scanf("%f", &preco_g_fermento);

    printf("Numero de quilowatts hora de luz: ");
    scanf("%f", &kw_hora_luz);
    printf("Preco do quilowatt/hora: ");
    scanf("%f", &preco_kw_hora);

    printf("Percentual do imposto: ");
    scanf("%f", &perc_imposto);

    custo_total = kg_farinha * preco_kg_farinha + litros_agua * preco_litro_agua + gramas_fermento * preco_g_fermento + kw_hora_luz * preco_kw_hora;

    lucro = 0.3 * custo_total;
    preco_venda = custo_total + lucro;

    preco_venda += preco_venda * perc_imposto / 100;

    printf("\nPreco de custo do pao: R$%.2f\n", custo_total);
    printf("Preco de venda do pao: R$%.2f\n", preco_venda);

    return 0;
}
