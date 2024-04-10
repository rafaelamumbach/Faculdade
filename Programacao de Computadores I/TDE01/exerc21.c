/* ---- TDE 01
   ---- Exercicio 21    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 09/04/2024
*/

#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, numero_invertido;

    printf("Numero de 3 digitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    numero_invertido = unidade * 100 + dezena * 10 + centena;

    printf("\nNumero informado: %d\n", numero);
    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}
