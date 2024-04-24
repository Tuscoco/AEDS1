#include <stdio.h>

int soma(int n) {
  if (n < 10) {
    return n;
  }

  return (n % 10) + soma(n / 10);
}

int main() {
  int num;

  printf("Informe um numero:\n");
  scanf("%d", &num);

  printf("A soma dos digitos eh:%d\n", soma(num));

  return 0;
}