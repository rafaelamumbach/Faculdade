/* ---- TDE 01
   ---- Exercicio 15     
   ---- Rafaela Mumbach Buenos
   ---- V02 - 09/04/2024
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, y2, y1, d;
    printf("Insira as coordenadas P1(x1)(y1): ");
    scanf("%d%d", &x1, &y1);
    printf("Insira as coordenadas P2(x2)(y2): ");
    scanf("%d%d", &x2, &y2);
    
    d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("A distância entre os pontos P1(%d)(%d) e P2(%d)(%d) eh: %d!\n", x1, y1, x2, y2, d);

    return 0;
}