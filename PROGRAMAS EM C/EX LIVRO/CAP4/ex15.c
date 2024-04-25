// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double salariom, ht, d, vd, he, vht, vhe, salariodomes, salariob, imp,
      salariol, salarioar, bon;
  // ENTRADA DE DADOS
  printf("Informe o salario minimo:\n");
  scanf("%lf", &salariom);
  printf("Informe quantas horas foram trabalhadas:\n");
  scanf("%lf", &ht);
  printf("Informe quantas horas extras foram trabalhadas:\n");
  scanf("%lf", &he);
  printf("Informe quantos dependentes voce tem:\n");
  scanf("%lf", &d);

  // CONTAS E AFINS
  vht = salariom / 5;
  salariodomes = ht * vht;
  vd = d * 32;
  vhe = vht + (vht * 50 / 100);
  salariob = salariodomes + vd + vhe;

  // IFS1
  if (salariob < 200) {
    imp = 0;
  } else if (salariob >= 200 && salariob <= 500) {
    imp = salariob * 10 / 100;
  } else if (salariob > 500) {
    imp = salariob * 20 / 100;
  }

  // MAIS CONTAS
  salariol = salariob - imp;

  // IFS2
  if (salariol <= 350) {
    bon = 100;
  } else if (salariol > 350) {
    bon = 50;
  }

  salarioar = salariol + bon;

  // SAÍDA DE DADOS
  printf("O salario a receber eh:%.2lf", salarioar);

  return 0;
}