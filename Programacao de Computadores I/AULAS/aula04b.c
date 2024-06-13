/* ---- Estruturas de Repeticao
   ---- Rafaela Mumbach Buenos
   ---- V01 - 13/06/2024
*/

#include <stdio.h>

int main() {
   int num = 1;
   int primeiro_positivo = 0;
   int menor = 0;
   int i = 0;

   while (num > 0){
      i++;
      printf("Informe nros inteiros (0 para parar). Iteracao nro >> %d: ", i);
      scanf("%d", &num);

      if (num > 0) {
         if (primeiro_positivo == 0) {
            primeiro_positivo = 1;
            menor = num;
         } else if (num < menor) {
            menor = num;
         }
      }
   }

   printf("Menor nro informado: %d!\n", menor);
   printf("Fim\n");

   return 0;
}
