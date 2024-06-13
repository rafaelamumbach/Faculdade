/* ---- Estruturas de Repeticao
   ---- Exercicio 01-d   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/06/2024
*/

#include <stdio.h>

int main() {
    int i, j;
    int min, max;

    printf("Informe min e max: ");
    scanf("%d%d", &min, &max);

    for (i = min; i <= max; i++) {
        int cont = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}