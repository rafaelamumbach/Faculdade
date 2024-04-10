/* ---- TDE 01
   ---- Exercicio 02     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/03/2024
*/
#include <stdio.h>

int main(){
    int numero_func, horas_trabalhadas, filhos_menores;
    float valor_hora, salario_familia, salario_filhos;
    float calculo_salario, salario_total;

    printf("-- Calculo de salario --\n");
    printf("Informe a seguir os seguintes dados: \n");
    printf("-> Numero do funcionario: ");
    scanf("%d", &numero_func);
    printf("-> Numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("-> Valor que o funcionario recebe por hora: ");
    scanf("%f", &valor_hora);
    printf("-> Numero de filhos menores de 14 anos: ");
    scanf("%d", &filhos_menores);
    printf("-> Valor do salario familia (pago p/ menores de 14 anos): ");
    scanf("%f", &salario_filhos);

    salario_familia = salario_filhos * filhos_menores;
    calculo_salario = horas_trabalhadas * valor_hora;
    salario_total = calculo_salario + salario_familia;

    printf("\n-> Funcionario numero [%d]\n", numero_func);
    printf("-> Salario total: R$%.2f", salario_total);

    return 0;
}