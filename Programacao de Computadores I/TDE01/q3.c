/* ---- TDE 01
   ---- (Q3) Provas Anteriores     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 08/04/2024
*/
#include <stdio.h>

int main() {
    int num_identificacao, bairro;

    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &num_identificacao);

    bairro = (num_identificacao / 10000) % 100;

    if (bairro == 11) {
        printf("O aluno reside no bairro Centro.\n");
    } else if (bairro == 12) {
        printf("O aluno reside no bairro Sao Pelegrino.\n");
    } else if (bairro == 13) {
        printf("O aluno reside no bairro Lourdes.\n");
    } else if (bairro == 14) {
        printf("O aluno reside no bairro Pio X.\n");
    } else {
        printf("Bairro nao reconhecido!.");
    }

    return 0;
}