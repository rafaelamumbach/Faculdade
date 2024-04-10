/* ---- TDE 01
   ---- Exercicio 19     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 09/04/2024
*/

#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao_jogo;

    printf("Informe a hora do inicio do jogo: ");
    scanf("%d", &hora_inicio);
    printf("Informe a hora do fim do jogo: ");
    scanf("%d", &hora_fim);

    duracao_jogo = hora_fim - hora_inicio;

    printf("O jogo durou %d horas.\n", duracao_jogo);

    return 0;
}