// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int n, num, i, j, fat;

  // ENTRADA DE DADOS
  printf("Digite o numero de termos:\n");
  scanf("%d", &n);

  // FOR
  for (i = 1; i <= n; i++) {
    printf("\nInforme o numero:\n");
    scanf("%d", &num);

    fat = 1;
    for (j = 1; j <= num; j++) {
      fat *= j;
    }
    printf("\n%d! = %d", num, fat);
  }
  return 0;
}