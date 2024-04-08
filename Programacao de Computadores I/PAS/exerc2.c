#include <stdio.h>

int main(){
    int qtd_espumante, cod_espumante;
    int cod_pagamento;
    float subtotal = 0, valor_total = 0;
    
    printf("Informe a qtde de espumantes: ");
    scanf("%d", &qtd_espumante);
    
    printf("Informe o codigo da espumante: ");
    scanf("%d", &cod_espumante);
    
    printf("Informe o codigo da forma pgto: ");
    scanf("%d", &cod_pagamento);
    
    if ((cod_espumante < 1 || cod_espumante > 5) || (cod_pagamento < 1 || cod_pagamento > 4)){
          printf("Valor total da compra: R$0,0");
          return 0;
    }
    
    if (cod_espumante == 1){
          subtotal = qtd_espumante * 85.00;
    } else  if (cod_espumante == 2){
          subtotal = qtd_espumante * 90.00;
    } else if (cod_espumante == 3){
          subtotal = qtd_espumante * 115.00;
    } else if (cod_espumante == 4){
          subtotal = qtd_espumante * 120.00;
    } else if (cod_espumante == 5){
          subtotal = qtd_espumante * 225.00;
    }
    
    if (cod_pagamento == 1){
          valor_total = subtotal - (subtotal * 0.1);
    } else  if (cod_pagamento == 2){
          valor_total = subtotal - (subtotal * 0.05);
    } else  if (cod_pagamento == 3){
          valor_total = subtotal;
    } else  if (cod_pagamento == 4){
          valor_total = subtotal + (subtotal * 0.1);
    }
    
    printf("Valor total da compra: R$%.2f", valor_total);

    return 0;
}