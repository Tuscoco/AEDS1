#include <stdio.h>

int divisao(int n, int d) {
  if (n < d) {
    return n;
  }

  return divisao(n - d, d);
}

int main() {
  int num, den;

  printf("Informe o numerador e o denominador:\n");
  scanf("%d %d", &num, &den);

  printf("O resto da divisao de %d por %d eh %d\n", num, den,
         divisao(num, den));

  return 0;
}