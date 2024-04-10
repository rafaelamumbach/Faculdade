/* ---- TDE 01
   ---- Exercicio 04     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 13/03/2024
*/

#include <stdio.h>
#include <math.h>

int main(){
    int expoente = 2;
    float pi = 3.14;    
    float a, b, c;
    float triangulo, circulo, trapezio, quadrado;
    float retangulo, cubo;

    printf("Informe a, b e c (inteiros ou reais): ");
    scanf("%f %f %f", &a, &b, &c);

    triangulo = a * b / 2;
    printf("-> Area do triangulo: %.2f\n", triangulo);

    circulo = pi * powf(c, expoente);
    printf("-> Area do circulo: %.2f\n", circulo);

    trapezio = ((a + b) * c) / 2;
    printf("-> Area do trapezio: %.2f\n", trapezio);

    quadrado = powf(b, expoente);
    printf("-> Area do quadrado: %.2f\n", quadrado);

    retangulo = a * b;
    printf("-> Area do retangulo: %.2f\n", retangulo);

    cubo = 6 * powf(c, expoente);
    printf("-> Area do cubo: %.2f\n", cubo);

    return 0;
}