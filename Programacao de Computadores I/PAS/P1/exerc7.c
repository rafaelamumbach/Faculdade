#include <stdio.h>
#include <math.h>

int main(){
    
    int ax, ay , bx, by;
    float distanciapts;
    
    printf("Digite os valores X e Y do ponto A: ");
    scanf("%d%d", &ax, &ay);
    
    printf("Digite os valores X e Y do ponto B: ");
    scanf("%d%d", &bx, &by);
    
    distanciapts = sqrt(pow(bx-ax, 2) + pow(by-ay, 2));
    
    printf("\nA distancia entre os pontos (%d,%d) e (%d,%d) eh de: %.2f", ax, ay, bx, by, distanciapts);

    return 0;
}