/* ---- TDE 03
   ---- Exercício 04     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 21/05/2024
*/

#include <stdio.h>   

int main() {
    int i, x, y, cont=0, media;

    printf("Informe o intervalo de numeros [x, y]: ");
    scanf("%d%d", &x, &y);

    printf("Numeros na sequencia [%d, %d]:\n", x, y);

    for (i = x; i < y; i++) {
        cont++;
        printf("%d ", i);
    }

    printf("\nHa %d numeros nessa sequencia.\n", cont);

    return 0;
}