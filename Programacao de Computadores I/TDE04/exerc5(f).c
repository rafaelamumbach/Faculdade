/* ---- TDE 04
   ---- Exercicio 05   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i;
    int c[5];
    int maior;

    for (i = 0; i < 5; i++){
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &c[i]);
    }

    maior = c[0];

    for (i = 0; i < 5; i++){
        if(c[i] > maior){
            maior = c[i];
        }
    }
    
    printf("Vetor: [ ");

    for (i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }

    printf("]");
    printf("\nNumero maior: %d", maior);
}