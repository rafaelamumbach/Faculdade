/* ---- TDE 01
   ---- Exercicio 23    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    float massa, aceleracao, tempo;
    float vel_ms, vel_kmh, comprimento_pista, trabalho_mecanico;

    printf("Informe a massa do aviao (em toneladas): ");
    scanf("%f", &massa);
    printf("Informe a aceleracao do aviao (em m/s ao quadrado): ");
    scanf("%f", &aceleracao);
    printf("Informe o tempo de decolagem (em segundos): ");
    scanf("%f", &tempo);

    massa = massa * 1000;
    vel_ms = aceleracao * tempo;
    vel_kmh = vel_ms * 3.6;
    comprimento_pista = 0.5 * aceleracao * tempo * tempo;
    trabalho_mecanico = (massa * vel_ms * vel_ms) / 2;

    printf("\nVelocidade atingida: %.2f km/h\n", vel_kmh);
    printf("Comprimento da pista: %.2f metros\n", comprimento_pista);
    printf("Trabalho mecanico realizado: %.2f joules\n", trabalho_mecanico);

    return 0;
}
