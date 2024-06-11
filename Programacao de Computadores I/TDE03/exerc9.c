/* ---- TDE 03
   ---- Exercício 09
   ---- Rafaela Mumbach Buenos
   ---- V01 - 11/06/2024
*/
#include <stdio.h>

int main() {
    int i = 0;
    int m, x, y, j;
    int contDiv;
    unsigned long long fatorial;
    int soma;

    printf("Informe um valor (m):");
    
    while (1) {
        contDiv = 0;
        fatorial = 1;
        soma = 0;

        printf("\n| Iteracao %d: ", i + 1);
        scanf("%d", &m);

        if (m <= 0) {
            printf("\n| Nro negativo!\n");
            break;
        }

        if (m % 2 == 0) {
            for (j = 1; j <= m; ++j) {
                if (m % j == 0) {
                    contDiv++;
                }
            }
            
            printf("\nPar! Possui %d divisores.\n", contDiv);

        } else if (m < 12) {
            for (x = 1; x <= m; ++x) {
                fatorial *= x;
            }

            printf("\nFatorial de %d: %llu\n", m, fatorial);

        } else if (m % 2 != 0 && m > 12) {
            for (y = 1; y <= m; ++y) {
                soma += y;
            }

            printf("\nSoma dos nros de 1 a %d eh %d\n", m, soma);
        }

        i++;
    }

    return 0;
}