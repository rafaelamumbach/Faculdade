/* ---- TDE 04
   ---- Exercicio 04     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i, v[10], cont=0;

    for (i = 0; i < 5; i++){
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("Vetor: [ ");

    for (i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    printf("]");

    for (i = 0; i < 5; i++){
        if (v[i] < 0){
            printf("\nPosicao nro negativo: %d" , i);
        }
    }

    printf("\n");

    printf("Vetor modificado: [ ");

    for (i = 0; i < 5; i++){
        if (v[i] < 0){
            cont++;
            v[i] = 1;
        }
        
        printf("%d ", v[i]);
    }

    printf("]\n");
    printf(">> Qtde numeros negativos de v[10]: %d", cont);
}