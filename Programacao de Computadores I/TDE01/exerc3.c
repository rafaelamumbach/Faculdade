/* ---- TDE 01
   ---- Exercicio 03     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 26/03/2024
*/

#include <stdio.h>

int main() {

    int num = 5;
    int fatorial = 1;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d eh: %d\n", num, fatorial);
    
    return 0;
}