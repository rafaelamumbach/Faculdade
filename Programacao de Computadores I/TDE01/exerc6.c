/* ---- TDE 01
   ---- Exercicio 06     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 03/04/2024
*/

#include <stdio.h>

int main() {
    float p, u, r;
    float termos, soma;

    printf("Informe o primeiro termo da progressao => ");
    scanf("%f", &p);
    
    printf("Informe o ultimo termo da progressao => ");
    scanf("%f", &u);

    printf("Informe a razao da progressao => ");
    scanf("%f", &r);

    termos = (u - p) / r + 1;

    soma = (termos * (p + u)) / 2;

    printf("Soma dos termos da PA: %.2f\n", soma);

    return 0;
}