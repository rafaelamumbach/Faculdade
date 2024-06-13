/* ---- Estruturas de Repeticao   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/06/2024
*/

#include <stdio.h>

int main(){
    int i, j;
    int min, max, cont;

    printf("Informe min e max: ");
    scanf("%d%d", &min, &max);

    for (i = min; i <= max; i++) {
        printf("Divisores de %d: ", i);
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", j);
                cont++;
            }
        }
        printf("\n");
    }

    return 0;
}