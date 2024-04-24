#include <stdio.h>

int cont = 0;

int digitos(int n) {
  if (n == 0) {
    return cont;
  }

  cont++;
  return digitos(n / 10);
}

int main() {
  int num;

  printf("Informe um numero:\n");
  scanf("%d", &num);

  printf("%d digitos\n", digitos(num));

  return 0;
}