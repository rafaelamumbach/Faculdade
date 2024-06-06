/* ---- TDE 03
   ---- Exercício 04     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 03/06/2024
*/

#include <stdio.h>   

int main() {
    int i, x, y, cont = 0;
    float media, soma = 0;

    printf("Informe o intervalo de numeros [x, y]: ");
    scanf("%d%d", &x, &y);

    printf("Numeros na sequencia [%d, %d]:\n", x, y);

    for (i = x; i < y; i++) {  
        cont++;
        soma++;
        printf("%d ", i);
    }

    media = soma / cont; 

    printf("\nHa %d numeros nessa sequencia.\nA media aritmetica deles eh: %.2f", cont, media);

    return 0;
}
