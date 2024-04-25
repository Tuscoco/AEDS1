// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int n1, n2, n3, n4;
  // ENTRADA DE DADOS
  printf("Digite tres numeros em ordem crescente:\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  printf("Digite um numero(fora de ordem):\n");
  scanf("%d", &n4);
  // IFS
  if (n4 > n3) {
    printf("%d -- %d -- %d -- %d", n4, n3, n2, n1);
  } else if (n4 < n3 && n4 > n2) {
    printf("%d -- %d -- %d -- %d", n3, n4, n2, n1);
  } else if (n4 < n2 && n4 > n1) {
    printf("%d -- %d -- %d -- %d", n3, n2, n4, n1);
  } else if (n4 < n1) {
    printf("%d -- %d -- %d -- %d", n3, n2, n1, n4);
  } else if (n1 > n2 || n2 > n3 || n1 > n3 || n1 == n2 || n2 == n3 ||
             n3 == n1 || n4 == n1 || n4 == n2 || n4 == n3) {
    printf("INVALIDO");
  }
  return 0;
}