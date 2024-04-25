// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double x, y, z;

  // ENTRADA DE DADOS
  printf("Informe os tres lados do triangulo:\n");
  scanf("%lf %lf %lf", &x, &y, &z);

  // IFS
  if ((x < y + z) && (y < x + z) && (z < x + y)) {
    if ((x == y) && (y == z)) {
      printf("EH EQUILATERO");
    } else if (((x == y) && (y != z)) || ((y == z) && (z != x)) ||
               ((z == x) && (x != y))) {
      printf("EH ISOCELES");
    } else if ((x != y) && (y != z)) {
      printf("EH ESCALENO");
    }
  } else {
    printf("NAO PODE SER UM TRIANGULO");
  }
  return 0;
}