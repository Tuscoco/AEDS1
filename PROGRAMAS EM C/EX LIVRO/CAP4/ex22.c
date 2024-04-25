// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double salariob, imp, grat, salariol;
  int tempo;

  // ENTRADA DE DADOS
  printf("Informe seu salario base:\n");
  scanf("%lf", &salariob);
  printf("Informe seu tempo de servico:\n");
  scanf("%d", &tempo);

  // IFS IMPOSTO
  if (salariob < 200) {
    imp = 0;
  } else if (salariob >= 200 && salariob <= 450) {
    imp = salariob * 3 / 100;
  } else if (salariob > 450 && salariob < 700) {
    imp = salariob * 8 / 100;
  } else if (salariob >= 700) {
    imp = salariob * 12 / 100;
  }
  // IFS GRATIFICAÇÃO
  if (salariob >= 500) {
    if (tempo < 3) {
      grat = 20;
    } else if (tempo >= 3) {
      grat = 30;
    }
  } else if (salariob < 500) {
    if (tempo < 3) {
      grat = 23;
    } else if (tempo >= 3 && tempo <= 6) {
      grat = 35;
    } else if (tempo > 6) {
      grat = 33;
    }
  }
  // CÁLCULO SALÁRIO LÍQUIDO
  salariol = salariob + grat - imp;

  // SAÍDA DE DADOS
  printf("Imposto:%.2lf", imp);
  printf("\nGratificacao:%.2lf", grat);
  printf("\nSalario liquido:%.2lf", salariol);

  // IFS CLASSIFICAÇÃO
  if (salariol < 350) {
    printf("\nClassificacao:A");
  } else if (salariol >= 350 && salariol <= 600) {
    printf("\nClassificacao:B");
  } else if (salariol > 600) {
    printf("\nClassificacao:C");
  }
  return 0;
}