// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int opcao;
  double a, b, c;
  // ENTRADA DE DADOS
  printf("Digite tres numeros:\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("1-Colocar em ordem crescente\n2-Colocar em ordem "
         "decrescente\n3-Colocar o maior no meio\n");
  scanf("%d", &opcao);
  // SWITCH
  switch (opcao) {
  // CASE1
  case 1:
    // IFS
    if (a < b && a < c) {
      if (b < c) {
        printf("%lf -- %lf -- %lf", a, b, c);
      } else {
        printf("%lf -- %lf -- %lf", a, c, b);
      }
    } else if (b < a && b < c) {
      if (a < c) {
        printf("%lf -- %lf -- %lf", b, a, c);
      } else {
        printf("%lf -- %lf -- %lf", b, c, a);
      }
    } else if (c < a && c < b) {
      if (a < b) {
        printf("%lf -- %lf -- %lf", c, a, b);
      } else {
        printf("%lf -- %lf -- %lf", c, b, a);
      }
    } else {
      printf("INVALIDO");
    }
    break;
  // CASE2
  case 2:
    // IFS
    if (a > b && a > c) {
      if (b > c) {
        printf("%lf -- %lf -- %lf", a, b, c);
      } else {
        printf("%lf -- %lf -- %lf", a, c, b);
      }
    } else if (b > a && b > c) {
      if (a > c) {
        printf("%lf -- %lf -- %lf", b, a, c);
      } else {
        printf("%lf -- %lf -- %lf", b, c, a);
      }
    } else if (c > a && c > b) {
      if (a > b) {
        printf("%lf -- %lf -- %lf", c, a, b);
      } else {
        printf("%lf -- %lf -- %lf", c, b, a);
      }
    }
    break;
  // CASE3
  case 3:
    if (a > b && a > c) {
      printf("%lf -- %lf -- %lf", b, a, c);
    } else if (b > a && b > c) {
      printf("%lf -- %lf -- %lf", a, b, c);
    } else if (c > a && c > b) {
      printf("%lf -- %lf -- %lf", a, c, b);
    }
    break;
  }
  return 0;
}