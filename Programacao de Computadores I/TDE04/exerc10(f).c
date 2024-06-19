/* ---- TDE 04
   ---- Exercicio 10   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 18/06/2024
*/

#include <stdio.h>

int main(){
    int val[8], i, posicao, menor;

    for (i = 0; i < 8; i++){
        printf("Nro %d/8 (Posicao %d): ", i+1, i);
        scanf("%d", &val[i]);
    }

    printf("Vetor: [ ");
 
    for (i = 0; i < 8; i++){
        printf("%d ", val[i]);
    }

    printf("]");

    menor = val[0];
    posicao = 0;

    for (i = 0; i < 8; i++){
        if(val[i] < menor){
            menor = val[i];
            posicao = i;
        }
    }

    printf("\nMenor numero: val[%d]\nPosicao: val[%d]", menor, posicao);

}

//continuar exercícios, rever aulas 05b e 05c