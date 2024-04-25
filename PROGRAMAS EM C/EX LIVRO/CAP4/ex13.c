// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int opcao;
  double salario, imp, saln;

  // SELEÇÃO DA OPÇÃO
  printf("Menu de opcoes:\n1-Imposto\n2-Novo salario\n3-Classificacao\n");
  scanf("%d", &opcao);

  // SWITCH CASE
  switch (opcao) {
  // CASE1
  case 1:
    // ENTRADA DE DADOS
    printf("Informe o seu salario:\n");
    scanf("%lf", &salario);
    // IF
    if (salario < 500) {
      imp = salario * 5 / 100;
      printf("Imposto:%.2lf", imp);
    } else if (salario >= 500 && salario <= 850) {
      imp = salario * 10 / 100;
      printf("Imposto:%.2lf", imp);
    } else if (salario > 850) {
      imp = salario * 15 / 100;
      printf("Imposto:%.2lf", imp);
    }
    break;
  // CASE2
  case 2:
    // ENTRADA DE DADOS
    printf("Informe seu salario:\n");
    scanf("%lf", &salario);
    // IF
    if (salario > 1500) {
      saln = salario + 25;
      printf("Seu novo salario eh:%.2lf", saln);
    } else if (salario >= 750 && salario <= 1500) {
      saln = salario + 50;
      printf("Seu novo salario eh:%.2lf", saln);
    } else if (salario >= 450 && salario < 750) {
      saln = salario + 75;
      printf("Seu novo salario eh:%.2lf", saln);
    } else if (salario < 450) {
      saln = salario + 100;
      printf("Seu novo salario eh:%.2lf", saln);
    }
    break;
  // CASE3
  case 3:
    // ENTRADA DE DADOS
    printf("Informe seu salario:\n");
    scanf("%lf", &salario);
    // IF
    if (salario <= 700) {
      printf("MAL REMUNERADO");
    } else {
      printf("BEM REMUNERADO");
    }
    break;
  }
  return 0;
}