/* ---- TDE 02
   ---- Exercício 02 
   ---- Exercicios de fixacao    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 08/05/2024
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float s, area;
    printf("Informe os lados de um triângulo (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Eh um triangulo!\n");

        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area: %.2f\n", area);
    } else {
        
        printf("Nao eh um triângulo.");
    }

    return 0;
}
