/* ---- TDE 03
   ---- Exercício 04     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 21/05/2024
*/

#include <stdio.h>   

int main() {
    int v[5];
    int i;
    for (i = 0; i < 5;i++){
        v[i] = i;
    }

    printf("%d", v[999]);

    return 1;
}