/* ---- TDE 01
   ---- Exercicio 25    
   ---- Rafaela Mumbach Buenos
   ---- V01 - 10/04/2024
*/

#include <stdio.h>

int main() {
    int num_pessoas;
    float preco_por_hora, tempo_permanencia;
    float percentual_desconto, valor_total, desconto = 0;

    printf("Numero de pessoas: ");
    scanf("%d", &num_pessoas);
    printf("Preco por hora: ");
    scanf("%f", &preco_por_hora);
    printf("Tempo de permanencia (em horas): ");
    scanf("%f", &tempo_permanencia);
    printf("Percentual de desconto concedido: ");
    scanf("%f", &percentual_desconto);

    valor_total = num_pessoas * preco_por_hora * tempo_permanencia;
    desconto = valor_total * (percentual_desconto / 100);
    valor_total = valor_total - desconto;

    printf("Valor total a ser pago: R$%.2f\n", valor_total);

    return 0;
}
