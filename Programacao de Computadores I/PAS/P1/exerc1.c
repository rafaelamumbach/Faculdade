#include <stdio.h>

int main(){
    int numero, digitos;
    scanf("%d", &numero);

    digitos = (numero / 100000) % 1000;

    printf("Numeros 3o ao 5o: %d", digitos);
}