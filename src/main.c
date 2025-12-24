#include <stdio.h>
/* Calculadora feita em C!
 * feita por Matheus
*/

int main(){
  float num1;
  float num2;
  float resultado;
  char operacao;

  printf("Digite o 1º número: ");
  scanf("%f", &num1);
  printf("Digite o 2º número: ");
  scanf("%f", &num2);
  printf("OK!\n");
  printf("Digite a operação: (+, -, /)\n");
  scanf(" %c", &operacao);
  if (operacao ==  '+') {
    float resultado = num1 + num2;
    printf("O resultado da conta %.2f + %.2f é %.2f\n", num1, num2, resultado);
  } 
  else if (operacao == '-') {
    float resultado = num1 - num2; 
    printf("O resultado da conta %.2f + %.2f é %.2f\n", num1, num2, resultado);
  } 
  else if (operacao == '/') {
    float resultado = num1 / num2;
    printf("O resultado da conta %.2f / %.2f é %.2f\n", num1, num2, resultado);
  } else {
    printf("Inválido!\n");
  }
  return 0;  
}
