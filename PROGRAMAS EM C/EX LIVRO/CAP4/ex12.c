// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS

  int opcao;
  double salario, aumento, nsalario;

  // ENTRADA DE DADOS

  printf(
      "Informe seu "
      "cargo:\n1-Escriturario\n2-Secretario\n3-Caixa\n4-Gerente\n5-Diretor\n");
  scanf("%d", &opcao);
  printf("Informe seu salario:\n");
  scanf("%lf", &salario);

  // SWITCH CASE
  switch (opcao) {
  // CASE1
  case 1:
    aumento = salario * 50 / 100;
    nsalario = salario + aumento;

    printf("O aumento foi de:%.2lf", aumento);
    printf("\nSeu novo salario eh:%.2lf", nsalario);
    break;
  // CASE2
  case 2:
    aumento = salario * 35 / 100;
    nsalario = salario + aumento;

    printf("O aumento foi de:%.2lf", aumento);
    printf("\nSeu novo salario eh:%.2lf", nsalario);
    break;
  // CASE3
  case 3:
    aumento = salario * 20 / 100;
    nsalario = salario + aumento;

    printf("O aumento foi de %.2lf", aumento);
    printf("\nSeu novo salario eh:%.2lf", nsalario);
    break;
  // CASE4
  case 4:
    aumento = salario * 10 / 100;
    nsalario = salario + aumento;

    printf("O aumento foi de %.2lf", aumento);
    printf("\nSeu novo salario eh:%.2lf", nsalario);
    break;
  // CASE5
  case 5:
    aumento = 0;
    nsalario = salario;

    printf("Nao houve aumento!!");
    printf("\nSeu salario eh:%.2lf", nsalario);
    break;
  }
  return 0;
}