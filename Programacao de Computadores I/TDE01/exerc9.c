/* ---- TDE 01
   ---- Exercicio 09     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 27/03/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int salario, notas_100, notas_50, notas_20, notas_10, notas_5, notas_1, resto;

    printf("Digite o salario: ");
    scanf("%d", &salario);

    notas_100 = salario / 100;
    resto = salario % 100;

    notas_50 = resto / 50;
    resto = resto % 50;

    notas_20 = resto / 20;
    resto = resto % 20;

    notas_10 = resto / 10;
    resto = resto % 10;

    notas_5 = resto / 5;
    resto = resto % 5;

    notas_1 = resto;

    printf("    Notas de R$100: %d\n", notas_100);
    printf("    Notas de R$50: %d\n", notas_50);
    printf("    Notas de R$20: %d\n", notas_20);
    printf("    Notas de R$10: %d\n", notas_10); 
    printf("    Notas de R$5: %d\n", notas_5); 
    printf("    Notas de R$1: %d\n", notas_1);

    return 0;
    system("PAUSE");
}
