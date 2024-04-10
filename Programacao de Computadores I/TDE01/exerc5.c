/* ---- TDE 01
   ---- Exercicio 05     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 26/03/2024
*/

#include <stdio.h>

int main(){
    int i;

    for (i = 10; i<=20; i++){
        if (i % 2 != 0){
            printf("    Impar: %d\n", i);
        }
    }   

    return 0;
}