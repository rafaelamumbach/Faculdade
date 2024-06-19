/* ---- Vetores
   ---- Rafaela Mumbach Buenos
   ---- V01 - 18/06/2024
*/

#include <stdio.h>

int main() {
    int vet[5];
    int i;
    int prox;

    prox = 0;
    for (i = 0; i < 5; i++){
        printf("Insira um valor maior ou igual a zero (%d/5): ", prox + 1);
        scanf("%d", &vet[i]);

        if(vet[i] >= 0) {
            vet[prox] = vet[i];
            prox++;  
        } else {
            i--;
        }
    }

    printf("Valores inseridos no vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
