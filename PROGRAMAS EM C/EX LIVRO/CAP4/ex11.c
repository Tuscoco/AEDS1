// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int horai, mini, horaf, minf, horad, mind;
  // ENTRADA DE DADOS
  printf("Digite o horario de inicio:\n");
  printf("Hora:\n");
  scanf("%d", &horai);
  printf("Minutos:\n");
  scanf("%d", &mini);

  printf("Digite o horario de termino:\n");
  printf("Hora:\n");
  scanf("%d", &horaf);
  printf("Minutos:\n");
  scanf("%d", &minf);

  // CONTAS E AFINS
  horad = horaf - horai;
  mind = minf - mini;

  // SAÍDA DE DADOS
  printf("O jogo durou %d horas e %d minutos", horad, mind);
  return 0;
}