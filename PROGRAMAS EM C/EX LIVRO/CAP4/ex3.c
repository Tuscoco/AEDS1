// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double n1, n2;
  // ENTRADA DE DADOS
  printf("Digite dois numeros:\n");
  scanf("%lf %lf", &n1, &n2);
  // IFS
  if (n1 > n2) {
    printf("%.2lf eh maior que %.2lf", n1, n2);
  } else if (n2 > n1) {
    printf("%.2lf eh maior que %.2lf", n2, n1);
  } else {
    printf("Sao iguais");
  }
  return 0;
}