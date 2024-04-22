/* ---- TDE 01
   ---- (Q4) Provas Anteriores     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 17/04/2024
*/

#include <stdio.h>

int main() {
    long long int numero_base;
    int digito8, digito7, digito6, digito5;
    int digito4, digito3, digito2, digito1;
    int soma, resto, digito_verificador;

    printf("Digite o numero base do NIF (8 digitos): ");
    scanf("%lld", &numero_base);

    digito8 = numero_base % 10;
    numero_base /= 10;

    digito7 = numero_base % 10;
    numero_base /= 10;
    
    digito6 = numero_base % 10;
    numero_base /= 10;

    
    digito5 = numero_base % 10;
    numero_base /= 10;

    
    digito4 = numero_base % 10;
    numero_base /= 10;

    digito3 = numero_base % 10;
    numero_base /= 10;

    
    digito2 = numero_base % 10;
    numero_base /= 10;

    digito1 = numero_base % 10;

    
    soma = digito1 * 9 + digito2 * 8 + digito3 * 7 + digito4 * 6 + digito5 * 5 + digito6 * 4 + digito7 * 3 + digito8 * 2;
    resto = soma % 11;

    if (resto == 0 || resto == 1) {
        digito_verificador = 0;
    } else {
        digito_verificador = 11 - resto;
    }

    printf("O digito verificador do NIF e: %d\n", digito_verificador);

    return 0;
}