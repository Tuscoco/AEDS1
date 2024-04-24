#include <stdio.h>

int cont = 0;

int divisao(int n, int d) {
  if (n < d) {
    return cont;
  }

  cont++;

  return divisao(n - d, d);
}

int main() {
  int num, den;

  printf("Informe o numerador e o denominador:\n");
  scanf("%d %d", &num, &den);

  printf("O numero %d pode ser dividido por %d: %d vezes\n", num, den,
         divisao(num, den));

  return 0;
}