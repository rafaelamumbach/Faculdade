/* ---- TDE 01
   ---- Exercicio 14     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 03/04/2024
*/

#include <stdio.h>

int main() {
    int numFuncionario;
    float salarioAtual, valorINT, indiceProd, aumento, novoSalario;

    printf("/* -- Calculo de Novo Salario! -- */\n");
    printf("Numero do VENDEDOR: ");
    scanf("%d", &numFuncionario);

    printf("Salario ATUAL (R$): ");
    scanf("%f", &salarioAtual);

    printf("Informe o total do INTEMP (R$): ");
    scanf("%f", &valorINT);

    printf("Informe o indice de produtividade (R$): ");
    scanf("%f", &valorINT);

    aumento = 0.8 * valorINT + indiceProd;
    novoSalario = salarioAtual + (salarioAtual * aumento);

    printf("\nNumero do funcionario: %d\n", numFuncionario);
    printf("Aumento salarial: %.2f%%\n", aumento * 100);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}