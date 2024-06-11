#include <stdio.h>
#include <stdlib.h>

int main(){
    int colocacao, i=2;
    float tempo, tempo_anterior, diferenca, menor = -1.0;

    printf("\nOs tempos informados devem tomar como referencia o tempo do 1o. colocado.\n");
    do{
        printf("\nEntre com o tempo [s] do %do. colocado: ",i);
        scanf("%f",&tempo);

        if(tempo > 0){
            if(i==2){
                diferenca = tempo;
                tempo_anterior = tempo;
                menor = diferenca;
                colocacao = i;
            } else{
                diferenca = tempo - tempo_anterior;
                tempo_anterior = tempo;
                if(diferenca < menor){
                    menor = diferenca;
                    colocacao = i;
                }
            }
        }
        i++;
    } while(tempo > 0);

    if(menor > 0)
        printf("\nA menor diferenca de tempo eh de %.3f[s] e esta entre o %do. e %do colocados.\n",menor,colocacao,colocacao-1);
    else
        printf("\nNao foi informado nenhum tempo.\n\n");
    return 0;
}
