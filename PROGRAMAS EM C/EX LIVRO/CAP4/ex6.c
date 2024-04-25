// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int n1;
  // ENTRADA DE DADOS
  printf("Digite um numero:\n");
  scanf("%d", &n1);
  // IF
  if (n1 % 2 == 0) {
    printf("Eh par!");
  } else {
    printf("Eh impar!");
  }
  return 0;
}