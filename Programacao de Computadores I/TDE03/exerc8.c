/* ---- TDE 03
   ---- Exercício 08
   ---- Rafaela Mumbach Buenos
   ---- V01 - 11/06/2024
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;
    int n;
    int cont = 0;

    printf("Informe um nro (digite um nro NAO positivo para sair):\n");

    while (1) {
        printf("Informe um nro (%d iteracao): ", i + 1);
        scanf("%d", &n);

        if (n <= 0) {
            printf("\n>>>>>>>> Fim!");
            break;
        }
        
        printf("\nPagina %d\n", cont+1);
        printf("Nro\tQuadrado\tCubo\t\tRaiz Quadrada\n");
        printf("------\t--------\t----\t\t--------------\n");

        printf("%d\t%d\t\t%d\t\t%.2f\n", n, n * n, n * n * n, sqrt(n));
        i++;
        cont++;
    }

    return 0;
}
