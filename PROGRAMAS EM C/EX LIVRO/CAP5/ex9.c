// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double n1, n2, media, ap, ex, rep, mediac, tc = 0;
  int i = 1;

  // FOR
  for (; i <= 6; i++) {

    printf("\n\nAluno %d\n", i);
    printf("Digite a primeira nota:\n");
    scanf("%lf", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    printf("Media=%.2lf", media);

    if (media <= 3) {
      rep += 1;
      printf("\nREPROVADO!");
    } else if (media > 3 && media <= 7) {
      ex += 1;
      printf("\nEXAME!");
    } else if (media > 7) {
      ap += 1;
      printf("\nAPROVADO!");
    }
    tc += media;
  }
  mediac = tc / 6;

  printf("\n\nAprovados:%.0lf", ap);
  printf("\nEm exame:%.0lf", ex);
  printf("\nReprovados:%.0lf", rep);
  printf("\nMedia da turma:%.2lf", mediac);

  return 0;
}