/* ---- TDE 04
   ---- Exercicio 03     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i, x[5];

    for (i = 0; i < 5; i++){
        printf("Posicao %d/5: ", i + 1);
        scanf("%d", &x[i]);
    }
    
    printf("Vetor: [ ");

    for (i = 0; i < 5; i++){
        printf("%d ", x[i]);
    }
    
    printf("]");
    printf("\n");

    printf("Vetor modificado: [ ");

    for (i = 0; i < 5; i++){
        if (x[i] < 0){
            x[i] = 1;
        }
        
        printf("%d ", x[i]);
    }

    printf("]");
}