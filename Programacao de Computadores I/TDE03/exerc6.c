/* ---- TDE 03
   ---- Exercício 06 - Incluso no exercício 05
   ---- Rafaela Mumbach Buenos
   ---- V01 - 03/06/2024
*/

#include <stdio.h>

int main() {
    int t0 = 0, t1 = 1, tn, i;
    int soma = t0 + t1;  

    printf("Os 10 primeiros termos da serie de Fibonacci sao:\n");
    printf("%d -(nro1)\n%d -(nro2)", t0, t1);

    for (i = 2; i < 10; i++) {
        tn = t0 + t1;
        printf("\n%d -(nro %d)", tn, i+1);
        soma = soma + tn;
        t0 = t1;
        t1 = tn;
    }

    printf("\nA soma dos 10 primeiros termos eh: %d\n", soma);

    return 0;
}
