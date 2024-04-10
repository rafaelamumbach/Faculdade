/* ---- TDE 01
   ---- Exercicio 23    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    float massa, aceleracao, tempo;
    float velocidade_ms, velocidade_kmh, comprimento_pista, trabalho_mecanico;

    printf("Informe a massa do aviao (em toneladas): ");
    scanf("%f", &massa);
    printf("Informe a aceleracao do aviao (em m/s^2): ");
    scanf("%f", &aceleracao);
    printf("Informe o tempo de decolagem (em segundos): ");
    scanf("%f", &tempo);

    massa *= 1000;
    velocidade_ms = aceleracao * tempo;
    velocidade_kmh = velocidade_ms * 3.6;
    comprimento_pista = 0.5 * aceleracao * tempo * tempo;
    trabalho_mecanico = (massa * velocidade_ms * velocidade_ms) / 2;

    printf("\nVelocidade atingida: %.2f km/h\n", velocidade_kmh);
    printf("Comprimento da pista: %.2f metros\n", comprimento_pista);
    printf("Trabalho mecânico realizado: %.2f joules\n", trabalho_mecanico);

    return 0;
}
