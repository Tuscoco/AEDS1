// INCLUSÃO DE BIBLIOTECA
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int d1, m1, a1, d2, m2, a2;
  // ENTRADA DE DADOS
  printf("Digite a primeira data (dd/mm/aaaa):\n");
  scanf("%d %d %d", &d1, &m1, &a1);
  printf("Digite a segunda data (dd/mm/aaaa):\n");
  scanf("%d %d %d", &d2, &m2, &a2);
  // IFS
  if (a1 > a2) {
    printf("%d/%d/%d eh maior", d1, m1, a1);
  } else if (a2 > a1) {
    printf("%d/%d/%d eh maior", d2, m2, a2);
  } else if (a1 == a2 && m1 > m2) {
    printf("%d/%d/%d eh maior", d1, m1, a1);
  } else if (a1 == a2 && m2 > m1) {
    printf("%d/%d/%d eh maior", d2, m2, a2);
  } else if (a1 == a2 && m1 == m2 && d1 > d2) {
    printf("%d/%d/%d eh maior", d1, m1, a1);
  } else if (a1 == a2 && m1 == m2 && d2 > d1) {
    printf("%d/%d/%d eh maior", d2, m2, a2);
  } else if (a1 == a2 && m1 == m2 && d1 == d2) {
    printf("Sao iguais");
  }
  return 0;
}