#include <stdio.h>

double serie(int n) {
  double fat = 0;

  if (n == 1) {
    return 1;
  }

  fat = n * serie(n - 1);

  return 1 / fat + serie(n - 1);
}

int main() {
  double num;

  printf("Informe um numero:\n");
  scanf("%lf", &num);

  printf("%lf", serie(num));

  return 0;
}