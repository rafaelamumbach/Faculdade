/* ---- TDE 01
   ---- (Q2) Provas Anteriores     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 04/04/2024
*/
#include <stdio.h>

int main() {
    char d1, d2, d3, d4, d5, d6, d7, d8;
    int soma = 0, resto, digito_verificador;

    printf("Digite o numero base da encomenda (8 digitos): ");
    scanf(" %c%c%c%c%c%c%c%c", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8);

    soma += (d1 - '0') * 8;
    soma += (d2 - '0') * 6;
    soma += (d3 - '0') * 4;
    soma += (d4 - '0') * 2;
    soma += (d5 - '0') * 3;
    soma += (d6 - '0') * 5;
    soma += (d7 - '0') * 9;
    soma += (d8 - '0') * 7;

    resto = soma % 11;

    if (resto == 0)
        digito_verificador = 5;
    else if (resto == 1)
        digito_verificador = 0;
    else
        digito_verificador = 11 - resto;

    printf("Codigo verificador da encomenda: %d\n", digito_verificador);

    return 0;
}