/* ---- TDE 04
   ---- Exercicio 06   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i;
    int c[5];
    int menor, posicao;

    for (i = 0; i < 5; i++){
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &c[i]);
    }

    menor = c[0];
    posicao = 0;

    for (i = 0; i < 5; i++){
        if(c[i] < menor){
            menor = c[i];
            posicao = i;
        }
    }
    
    printf("Vetor: [ ");

    for (i = 0; i < 5; i++){
        printf("%d ", c[i]);
    }

    printf("]");
    printf("\nNumero menor: %d\nPosicao: %d", menor, posicao);
}