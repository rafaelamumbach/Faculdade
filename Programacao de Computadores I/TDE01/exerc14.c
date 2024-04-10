/* ---- TDE 01
   ---- Exercicio 14     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 03/04/2024
*/

#include <stdio.h>

int main() {
    int numFuncionario;
    float salarioAtual, valorINT, indice, aumento, novoSalario, porcINT;

    printf("/* -- Calculo de Novo Salario! -- */\n");
    printf("Numero do VENDEDOR: ");
    scanf("%d", &numFuncionario);

    printf("Salario ATUAL (R$): ");
    scanf("%f", &salarioAtual);

    printf("Informe o total do INTEMP (R$): ");
    scanf("%f", &valorINT);

    printf("Informe o indice de produtividade (R$): ");
    scanf("%f", &indice);

    porcINT = valorINT * 0.8;
    aumento = porcINT + indice;
    novoSalario = salarioAtual + aumento;

    printf("\n-> Numero do funcionario:    %d\n", numFuncionario);
    printf("-> Aumento salarial:    R$ %.2f\n", aumento);
    printf("-> Novo salario:     R$ %.2f\n", novoSalario);

    return 0;
}