// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int i, n = 0, n1 = 1, res;

  printf("%d\n", n);
  printf("%d\n", n1);

  // FOR
  for (i = 1; i <= 6; i++) {
    res = n + n1;

    printf("%d\n", res);

    n = n1;
    n1 = res;
  }

  return 0;
}