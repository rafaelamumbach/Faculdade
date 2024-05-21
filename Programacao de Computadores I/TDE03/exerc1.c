/* ---- TDE 03
   ---- Exercício 01     
   ---- Rafaela Mumbach Buenos
   ---- V01 - 21/05/2024
*/

#include <stdio.h>   
      
int main() {
   int a, i, cont=0;

   for (i = 1; i <= 5; i++){
      printf("Informe a: (iteracao %d) => ", i);
      scanf("%d", &a);
      
      if (a < 0){
         printf("Numero negativo!\n");
         cont++;
      }

   }
   printf("Ha %d numeros negativos no total.", cont);

   return 0;
}