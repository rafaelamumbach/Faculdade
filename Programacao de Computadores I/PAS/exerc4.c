#include <stdio.h>

int main(){
    int num_agencia, d1, d2, d3, d4;
    int soma_dv, dv = 0;

    scanf("%d", &num_agencia);

    d1 = (num_agencia / 1000) % 10;
    d2 = (num_agencia / 100) % 10;
    d3 = (num_agencia / 10) % 10;
    d4 = num_agencia % 10;

    soma_dv = (d1 * 5) + (d2 * 4) + (d3 * 3) + (d4 * 2);
    dv = soma_dv % 11;

    if (dv == 10){
        printf("DV: P");
    } else if (dv == 0){
        printf("DV: 0");
    } else {
        dv = 11 - dv;
        printf("DV: %d", dv);
    }

    return 0; 
}