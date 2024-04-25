// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int i = 1, j = 1;
  double e = 1, n, fat = 0;

  // ENTRADA DE DADOS
  printf("Informe o numero de termos:\n");
  scanf("%lf", &n);

  // REPETIÇÃO 1
  for (i = 1; i <= n; i++) {
    fat = 1;

    // REPETIÇÃO 2
    for (j = 1; j <= i; j++) {
      fat = fat * j;
    }
    e = e + 1 / fat;
    printf("%lf\n", e);
  }

  return 0;
}