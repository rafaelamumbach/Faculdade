/* ---- TDE 04
   ---- Exercicio 01     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/06/2024
*/

#include <stdio.h>

int main(){
    int i, cont=0;
    int v[6];

    for (i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }
    
    printf("Vetor: [ ");

    for (i = 0; i < 6; i++){
        printf("%d ", v[i]);
    }

    printf("]");

    for (i = 0; i < 6; i++){
        if (v[i] < 0){
            cont++;
            printf("Nros negativos: [%d]", v[i]);
        }

        printf("\n");
    }

    printf("\nForam encontrados %d nros negativos!", cont);

}