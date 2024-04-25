// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double n1, n2, n3, mediap;
  // ENTRADA DE DADOS
  printf("Digite a primeira nota:\n");
  scanf("%lf", &n1);
  printf("Digite a segunda nota:\n");
  scanf("%lf", &n2);
  printf("Digite a terceira nota:\n");
  scanf("%lf", &n3);
  // CONTAS E AFINS
  mediap = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
  // IFS
  if (mediap >= 8 && mediap <= 10) {
    printf("Obedece ao conceito A");
  } else if (mediap >= 7 && mediap < 8) {
    printf("Obedece ao conceito B");
  } else if (mediap >= 6 && mediap < 7) {
    printf("Obedece ao conceito C");
  } else if (mediap >= 5 && mediap < 6) {
    printf("Obedece ao conceito D");
  } else if (mediap >= 0 && mediap < 5) {
    printf("Obedece ao conceito E");
  } else {
    printf("INVALIDO");
  }
  return 0;
}