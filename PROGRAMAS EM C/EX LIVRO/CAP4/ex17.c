// INCLUSÃO DE BIBLIOTECAS
#include <math.h>
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int a, b, c, delta, x1, x2;

  // ENTRADA DE DADOS
  printf("Informe o 'a' o 'b' e o 'c' respectivamente:\n");
  scanf("%d %d %d", &a, &b, &c);

  // IFS
  if (a == 0) {
    printf("NAO EH UMA EQUACAO DO SEGUNDO GRAU!");
  } else {
    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0) {
      printf("NAO POSSUI RAIZES REAIS");
    } else if (delta == 0) {
      printf("Possui uma raiz real:\n");
      x1 = (-b) / (2 * a);
      printf("%d", x1);
    } else if (delta > 0) {
      printf("Possui duas raizes reais:\n");
      x1 = ((-b) + sqrt(delta)) / (2 * a);
      x2 = ((-b) - sqrt(delta)) / (2 * a);
      printf("%d \n%d", x1, x2);
    }
  }
  return 0;
}