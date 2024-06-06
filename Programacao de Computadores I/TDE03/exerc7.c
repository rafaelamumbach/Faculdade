/* ---- TDE 03
   ---- Exercício 07
   ---- Rafaela Mumbach Buenos
   ---- V01 - 03/06/2024
*/
#include <stdio.h>

int main() {
    int t0 = 0, t1 = 1, tn, i;
    int soma = t0 + t1;

    printf("Os 30 primeiros termos da série de Fibonacci são:\n");
    printf("%d -(nro1)\n%d -(nro2)", t0, t1);

    for (i = 2; i < 30; i++) {
        tn = t0 + t1;
        printf("\n%d -(nro %d)", tn, i+1);
        soma = soma + tn;
        t0 = t1;
        t1 = tn;

        int primo = 1;

        if (tn <= 1) {
            primo = 0;
        } else if (tn == 2 || tn == 3) {
            primo = 1;
        } else if (tn % 2 == 0 || tn % 3 == 0) {
            primo = 0;
        } else {
            int divisor = 5;
            while (divisor * divisor <= tn) {
                if (tn % divisor == 0 || tn % (divisor + 2) == 0) {
                    primo = 0;
                    break;
                }
                divisor = divisor + 6;
            }
        }

        if (primo) {
            printf(" Primo!");
        } else {
            printf(" Nao eh primo!");
        }
    }

    printf("\nA soma dos 30 primeiros termos eh: %d\n", soma);

    return 0;
}