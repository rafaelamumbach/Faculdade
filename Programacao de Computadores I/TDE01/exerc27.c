/* ---- TDE 01
   ---- Exercicio 27    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    float potencia, tempo, valor_kw;
    float energia_total, valor_total;

    printf("Potencia do refrigerador (em kw): ");
    scanf("%f", &potencia);
    printf("Tempo que o refrigerador ficou ligado (em hrs): ");
    scanf("%f", &tempo);
    printf("Valor do kw/hora: ");
    scanf("%f", &valor_kw);

    energia_total = potencia * tempo;
    valor_total = energia_total * valor_kw;

    printf("Energia total gasta pelo refrigerador: %.2f kWh\n", energia_total);
    printf("Valor a ser pago: R$%.2f\n", valor_total);

    return 0;
}
