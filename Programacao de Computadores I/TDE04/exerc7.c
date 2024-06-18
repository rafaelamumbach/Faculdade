/* ---- TDE 04
   ---- Exercicio 07   
   ---- Rafaela Mumbach Buenos
   ---- V02 - 18/06/2024
*/

#include <stdio.h>

int main() {
    int i, j;
    int a[5];
    int temp;

    for (i = 0; i < 5; i++) {
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Vetor: [ ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");

    /*Vetor ordenado*/
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado: [ ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");

    return 0;
}