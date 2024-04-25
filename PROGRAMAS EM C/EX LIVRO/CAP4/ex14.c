// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double salario, salarion, boni, aux;

  // ENTRADA DE DADOS
  printf("Informe seu salario:\n");
  scanf("%lf", &salario);

  // IFS
  if (salario < 500) {
    boni = salario * 5 / 100;
    aux = 150;
  } else if (salario >= 500 && salario <= 1200) {
    boni = salario * 12 / 100;
    if (salario < 600) {
      aux = 150;
    } else {
      aux = 100;
    }
  } else if (salario > 1200) {
    boni = 0;
    aux = 100;
  }
  salarion = salario + boni + aux;
  // SAÍDA DE DADOS
  printf("Seu novo salario eh:%.2lf", salarion);

  return 0;
}