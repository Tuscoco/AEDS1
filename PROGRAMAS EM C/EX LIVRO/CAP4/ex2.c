// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double n1, n2, n3, media, notaex;
  // ENTRADA DE DADOS
  printf("Digite a primeira nota:\n");
  scanf("%lf", &n1);
  printf("Digite a segunda nota:\n");
  scanf("%lf", &n2);
  printf("Digite a terceira nota:\n");
  scanf("%lf", &n3);
  // CONTAS E AFINS
  media = (n1 + n2 + n3) / 3;
  // IFS
  if (media <= 0 && media < 3) {
    printf("REPROVADO");
  } else if (media >= 3 && media < 7) {
    printf("EXAME");
    notaex = 12 - media;
    printf("\nVoce deve tirar %.2lf para passar no exame", notaex);
  } else if (media >= 7 && media <= 10) {
    printf("APROVADO");
  } else {
    printf("INVALIDO");
  }
  return 0;
}