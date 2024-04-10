/* ---- TDE 01
   ---- Exercicio 20    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    int duracao_jogo_horas, duracao_jogo_minutos;
    int duracao_total_minutos;

    printf("Informe a hora do inicio do jogo: ");
    scanf("%d", &hora_inicio);
    printf("Informe os minutos do inicio do jogo: ");
    scanf("%d", &minuto_inicio);


    printf("Informe a hora do fim do jogo: ");
    scanf("%d", &hora_fim);
    printf("Informe os minutos do fim do jogo: ");
    scanf("%d", &minuto_fim);

    duracao_jogo_horas = hora_fim - hora_inicio;
    duracao_jogo_minutos = minuto_fim - minuto_inicio;

    if (duracao_jogo_minutos < 0) {
        duracao_jogo_horas = duracao_jogo_horas - 1;
        duracao_jogo_minutos = duracao_jogo_minutos + 60;
    }

    duracao_total_minutos = (duracao_jogo_horas * 60) + duracao_jogo_minutos;

    printf("O jogo durou %d minutos.\n", duracao_total_minutos);

    return 0;
}
