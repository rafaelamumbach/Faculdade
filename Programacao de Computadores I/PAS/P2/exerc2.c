#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    unsigned soma=0;
    for(int i=0;i<100;i++){
        do{
            printf("\nEntre com o numero inteiro positivo %d/100: ",i+1);
            scanf("%d",&n);
        }while(n < 0);

        for(int j=1;j<(n/2+1);j++){
            if(n % j == 0)
                soma+=j;
        }

        if(soma > n)
            printf("\nO numero %d eh ABUNDANTE (Soma dos divisores=%d).\n",n,soma);
        else
            printf("\nO numero %d NAO eh ABUNDANTE (Soma dos divisores=%d).\n",n,soma);

        soma = 0;
    }

    printf("\n\n");
    return 0;
}