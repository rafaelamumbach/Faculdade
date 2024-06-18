/* ---- TDE 04
   ---- Exercicio 02     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i;
    int a[10];

    for (i = 0; i < 10; i++){
        printf("Posicao %d/10: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Vetor: [ ");
    
    for (i = 0; i < 10; i++){
        if (a[i] == 5){
            printf("%d ", a[i]);
        }
    }

    printf("]");
}