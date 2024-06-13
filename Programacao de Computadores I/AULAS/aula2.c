/* ---- Estruturas de Repeticao
   ---- Exercicio 01   
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/06/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int min=0,max=100;
    int n, soma;

    printf("\n\nNumeros cujas somas dos digitos sao divisiveis por 3 (%d,%d):\n",min,max);

    for(n = min; n <= max; n++){
        soma = (n/10)+(n%10);
        if(soma / 3 != 0){
            if(soma%3 == 0){
                printf(" %02d\tSoma Digitos: %d\n",n,soma);
            }
        }
    }
    printf("\n\n");
    system("PAUSE");
    return 0;
}