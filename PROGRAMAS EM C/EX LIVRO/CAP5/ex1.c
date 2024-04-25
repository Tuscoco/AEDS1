// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int ano, i;
  double salario, aumento, nsalario;

  // ENTRADA DE DADOS
  printf("Informe o ano atual:\n");
  scanf("%d", &ano);

  // CONTAS
  salario = 1000;
  aumento = 1.5 / 100;
  nsalario = salario + salario * aumento;

  // FOR
  for (i = 2007; i <= ano; i++) {
    aumento = 2 * aumento;
    nsalario = nsalario + nsalario * aumento;
  }
  printf("Seu novo salario eh:%.2lf", nsalario);

  return 0;
}