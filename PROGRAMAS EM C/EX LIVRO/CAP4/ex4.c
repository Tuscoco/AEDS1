// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int n1, n2, n3;
  // ENTRADA DE DADOS
  printf("Digite tres numeros:\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  // IFS
  if (n1 < n2 && n1 < n3) {
    if (n2 < n3) {
      printf("%d -- %d -- %d", n1, n2, n3);
    } else {
      printf("%d -- %d -- %d", n1, n3, n2);
    }
  } else if (n2 < n1 && n2 < n3) {
    if (n1 < n3) {
      printf("%d -- %d -- %d", n2, n1, n3);
    } else {
      printf("%d -- %d -- %d", n2, n3, n1);
    }
  } else if (n3 < n1 && n3 < n2) {
    if (n1 < n2) {
      printf("%d -- %d -- %d", n3, n1, n2);
    } else {
      printf("%d -- %d -- %d", n3, n2, n1);
    }
  } else {
    printf("SAO IGUAIS");
  }
  return 0;
}