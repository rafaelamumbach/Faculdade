/* ---- TDE 01
   ---- Exercicio 16     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, c, maior, modulo;
    printf("Informe tres valores para a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);

    modulo = abs(a - b);
    maior = (a + b + modulo) / 2;

    if (c > maior) {
        maior = c;
    }

    printf("%d EH O MAIOR!\n", maior);

    return 0;
}
