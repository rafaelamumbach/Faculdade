/* ---- Exercicios de aprendizagem
   ---- Comandos de repeticao
   ---- Rafaela Mumbach Buenos
   ---- V01 - 07/05/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, invertido = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    
    for (; num != 0; num /= 10) {
        int digito = num % 10;           
        invertido = invertido * 10 + digito;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}
