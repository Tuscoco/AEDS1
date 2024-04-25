// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int i = 1, num, cont = 0;

  // ENTRADA DE DADOS
  printf("Informe um numero:\n");
  scanf("%d", &num);

  // FOR
  for (; i <= num; i++) {
    if (num % i == 0) {
      cont += 1;
    }
  }

  if (cont <= 2) {
    printf("PRIMO\n");
  } else {
    printf("NAO PRIMO\n");
  }

  return 0;
}