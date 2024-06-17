/* ---- TDE 04
   ---- Exercicio 07   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i, j;
    int a[5];
    int menor, temp;

    for (i = 0; i < 5; i++){
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Vetor: [ ");

    for (i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }

    printf("]\n");

    /*Vetor ordenado*/
    printf("Vetor ordenado: [ ");

    for (i = 0; i < 5; i++){
        menor = i;
        for (j = i + 1; i < 5; j++){
            if (a[j] < a[menor]){
                menor = j;
            }
        }

        if(menor != i){
            temp = a[i];
            a[i] = a[menor];
            a[menor] = temp;
        }

    }

    for (i = 0; i < 5; i++) {
        printf("%d ", menor);
    }

    printf("]\n");

}