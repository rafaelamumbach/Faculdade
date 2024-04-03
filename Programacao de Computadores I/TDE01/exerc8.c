/* ---- TDE 01
   ---- Exercicio 08     
   ---- Rafaela Mumbach Buenos
   ---- V03 - 03/04/2024
*/

#include <stdio.h>
#include <math.h>

int main (){

    float a, v, d, t = 30;

    printf("=> Insira a velocidade do aviao [m/s]: ");
    scanf("%f", &v);

    printf("=> Insira a altitude do aviao: ");
    scanf("%f", &a);

    d = sqrt(pow(v * t, 2) + pow(a, 2));

    printf("\nA distancia do aviao ao ponto (p) apos 30s: %.2f metros.\n", d);

    return 0;
}
