#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float x, s=1.0;
    float fator;

    do{
        printf("\nEntre com o numero de termos N e o valor de X para o calculo de \nS=(1/X^0)+(1/X^1)+(1/X^2)+...+(1/X^N): ");
        scanf("%d%f",&n,&x);
    }while(n <= 0);

    fator = 1/x;

    printf("\nS=1");

    for(int i=1;i < n;i++){
        s+=fator;
        printf("+(1/%.2f^%d)",x,i);
        fator*=(1/x);
    }

    printf("\nS=%f\n\n",s);

    return 0;
}