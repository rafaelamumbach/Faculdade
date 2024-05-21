/* ---- TDE 03
   ---- Exercício 02     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 21/05/2024
*/

#include <stdio.h>   
      
int main() {
    int i;

    for (i = 100; i <= 200; i++){
        if(i % 2 != 0){
            printf("Impar: %d\n", i);
        }
    }

    return 0;
}