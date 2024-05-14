#include <stdio.h>

int main() {
    int dia_inicial, mes_inicial;
    int dia_final, mes_final;
    int qtd_dias, numero_pessoas, ult_dia = 0;
    float diaria_por_pessoa, valor_final = 0;
    
    printf("Dia inicial e mes inicial: ");
    scanf("%d%d", &dia_inicial, &mes_inicial);
    
    printf("Dia final e mes final: ");
    scanf("%d%d", &dia_final, &mes_final);
    
    printf("Nro de pessoas: ");
    scanf("%d", &numero_pessoas);
    
    printf("Valor diaria p/ pessoa: ");
    scanf("%f", &diaria_por_pessoa);
    
    if (mes_inicial == mes_final) {
        qtd_dias = dia_final - dia_inicial;
    } else {
        if (mes_inicial == 1 || mes_inicial == 3 || mes_inicial == 5 || mes_inicial == 7 || mes_inicial == 8 || mes_inicial == 10 || mes_inicial == 12) {
            ult_dia = 31;
        } else if (mes_inicial == 4 || mes_inicial == 6 || mes_inicial == 9 || mes_inicial == 11) {
            ult_dia = 30;
        } else if (mes_inicial == 2) {
            ult_dia = 28; 
        }
        qtd_dias = (ult_dia - dia_inicial) + dia_final;
    }
    
    valor_final = qtd_dias * numero_pessoas * diaria_por_pessoa;
    
    if (qtd_dias > 10) {
        valor_final = valor_final - (valor_final * 0.1);
    }
    
    printf("Valor a ser pago: R$%.2f\n", valor_final);
    
    return 0;
}