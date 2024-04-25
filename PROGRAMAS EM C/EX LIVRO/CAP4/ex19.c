// INCLUSÃO DE BIBLIOTECA
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double altura, peso;

  // ENTRADA DE DADOS
  printf("Informe sua altura:\n");
  scanf("%lf", &altura);
  printf("Informe seu peso:\n");
  scanf("%lf", &peso);

  // IFS
  if (altura < 1.20) {
    if (peso < 60) {
      printf("A");
    } else if (peso >= 60 && peso <= 90) {
      printf("D");
    } else if (peso > 90) {
      printf("G");
    }
  } else if (altura >= 1.20 && altura <= 1.70) {
    if (peso < 60) {
      printf("B");
    } else if (peso >= 60 && peso <= 90) {
      printf("E");
    } else if (peso > 90) {
      printf("H");
    }
  } else if (altura > 1.70) {
    if (peso < 60) {
      printf("C");
    } else if (peso >= 60 && peso <= 90) {
      printf("F");
    } else if (peso > 90) {
      printf("I");
    }
  }
  return 0;
}