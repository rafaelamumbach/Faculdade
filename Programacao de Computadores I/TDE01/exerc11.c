/* ---- TDE 01
   ---- Exercicio 11     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 02/04/2024
*/

#include <stdio.h>
#include <math.h>

int main() {

   float a, b, c, area_triangulo, s, calculo;

   printf("Informe a, b, c, respectivamente: ");
   scanf("%f%f%f", &a, &b, &c);

   s = ((a + b + c) / 2);
   calculo = (s * (s - a) * (s - b) * (s - c));
   area_triangulo = sqrtf(calculo);

   printf("Area do triangulo -> %.2f", area_triangulo);

   return 0;
}