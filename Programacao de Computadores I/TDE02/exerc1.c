/* ---- TDE 02
   ---- Exercício 01 
   ---- Exercicios de fixacao    
   ---- Rafaela Mumbach Buenos
   ---- V02 - 08/05/2024
*/

#include <stdio.h>

int main() {
    int a, b, c, maior;
    float media;

    printf("Informe tres notas: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a > b && a > c) {
        maior = a;  
    } else if (b > c) {
        maior = b;  
    } else {
        maior = c; 
    }

    
    if (maior == a) {
        media = (a * 5 + b * 2.5 + c * 2.5) / 10.0;
    } else if (maior == b) {
        media = (b * 5 + a * 2.5 + c * 2.5) / 10.0;
    } else { 
        media = (c * 5 + a * 2.5 + b * 2.5) / 10.0;
    }

    
    printf("Media ponderada: %.2f\n", media);
    printf("Maior nota: %d -> Peso: 5.00\n", maior);
    printf("Outras notas: ");

    if (maior == a) {
        printf("%d, %d -> Peso: 2.50 cada\n", b, c);
    } else if (maior == b) {
        printf("%d, %d -> Peso: 2.50 cada\n", a, c);
    } else {
        printf("%d, %d -> Peso: 2.50 cada\n", a, b);
    }

    return 0;
}