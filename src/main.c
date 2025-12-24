#include <stdio.h>
/* Calculadora feita em C!
 * feita por Matheus
*/

int main(){
  float num1;
  float num2;
  char operacao;

  printf("Digite o 1º número: ");
  scanf("%f", &num1);
  printf("Digite o 2º número: ");
  scanf("%f", &num2);
  printf("OK!\n");
  printf("Digite a operação: (+, -)\n");
  scanf(" %c", &operacao);
  if (operacao ==  '+') {
    printf("Mais\n");
  } 
  else if (operacao == '-') {
    printf("Menos\n");
  } else {
    printf("Inválido!\n");
  }
  return 0;  
}
