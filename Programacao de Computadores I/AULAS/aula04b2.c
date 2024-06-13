/* ---- Estruturas de Repeticao
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/06/2024
*/

#include <stdio.h>

int main() {
    int i, num, menor=2147483647, menor_cont=0;
    
    for (i = 0; i < 10; i++) {
        printf("Informe %d/10 nros inteiros: ", i + 1);
        scanf("%d", &num);

        if (num < menor) {
            menor = num; 
            menor_cont = 1;
        } else if (num == menor) {
            menor_cont++; 
        }
    }

    printf("Menor nro informado: %d!\n", menor);
    printf("Foi informado %d vezes.\n", menor_cont);

    return 0;
}
