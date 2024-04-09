#include <stdio.h>

int main() {
    int hr, hora, min, minuto;
    int qtd_horas, qtd_minutos, qtd_permanencia_horas;
    float valor = 0;

    printf("Hora e minuto de entrada: ");
    scanf("%d%d", &hr, &min);

    printf("Hora e minuto de saida: ");
    scanf("%d%d", &hora, &minuto);

    if (hora > 23 || (hora == 23 && minuto > 59)) {
        printf("Horario de saida invalido.\n");
        return 0;
    }
    
    qtd_horas = (hora - hr) * 60;
    qtd_minutos = minuto - min;
    qtd_permanencia_horas = (qtd_minutos + qtd_horas) / 60;

    if (qtd_permanencia_horas <= 1) {
        valor = 5.00;
    } else if (qtd_permanencia_horas <= 2) {
        valor = 8.00;
    } else {
        valor = 8.00 + ((qtd_permanencia_horas - 2) * 2);
    }

    printf("Valor do estacionamento: R$%.2f\n", valor);

    return 0;
}
