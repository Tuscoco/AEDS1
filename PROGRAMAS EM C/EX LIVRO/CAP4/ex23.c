// INCLUSÃO DE
// BIBLIOTECA/////////////////////////////////////////////////////////////
#include <stdio.h>

// FUNÇÃO
// PRINCIPAL////////////////////////////////////////////////////////////////////
int main() {
  // DECLARAÇÃO DE
  // VARIÁVEIS/////////////////////////////////////////////////////////////
  char turno;
  char categoria;
  int horast;
  double salariom, coeficientes, salariob, imp, grat, auxa, salariol;

  // ENTRADA DE
  // DADOS/////////////////////////////////////////////////////////////////////
  printf("Informe o salario minimo:\n");
  scanf("%lf", &salariom);
  printf("Informe o seu turno de "
         "trabalho:\nM-matutino\nV-vespertino\nN-noturno\n");
  scanf(" %c", &turno);
  printf("Informe a quantidade de horas trabalhadas:\n");
  scanf("%d", &horast);
  printf("Informe sua categoria:\nO-operario\nG-gerente\n");
  scanf(" %c", &categoria);

  // IFS COEFICIENTE///////////////////////////////////////////////////////
  if (turno == 'M') {
    coeficientes = salariom * 10 / 100;
  } else if (turno == 'V') {
    coeficientes = salariom * 15 / 100;
  } else if (turno == 'N') {
    coeficientes = salariom * 12 / 100;
  }

  // SALÁRIO BRUTO/////////////////////////////////////////////
  salariob = horast * coeficientes;

  // IFS IMPOSTO///////////////////////////////////////////
  if (categoria == 'O') {
    if (salariob >= 300) {
      imp = salariob * 5 / 100;
    } else if (salariob < 300) {
      imp = salariob * 3 / 100;
    }
  } else if (categoria == 'G') {
    if (salariob >= 400) {
      imp = salariob * 6 / 100;
    } else if (salariob < 400) {
      imp = salariob * 4 / 100;
    }
  }

  // GRATIFICAÇÃO///////////////////////////////////////
  if (turno == 'N') {
    if (horast > 80) {
      grat = 50;
    } else {
      grat = 30;
    }
  } else {
    grat = 30;
  }
  // AUXÍLIO ALIMENTAÇÃO/////////////////////////////////////////
  if (categoria == 'O') {
    if (coeficientes <= 25) {
      auxa = salariob / 3;
    } else {
      auxa = salariob / 3;
    }
  } else {
    auxa = salariob / 2;
  }

  // SALÁRIO LÍQUIDO/////////////////////////////////////////////
  salariol = salariob - imp + grat + auxa;

  // SAÍDA DE DADOS//////////////////////////////////////////////
  printf("Coeficiente do salario:%.2lf", coeficientes);
  printf("\nSalario bruto:%.2lf", salariob);
  printf("\nImposto:%.2lf", imp);
  printf("\nGratificacao:%.2lf", grat);
  printf("\nAuxilio alimentacao:%.2lf", auxa);
  printf("\nSalario liquido:%.2lf", salariol);

  // CLASSIFICAÇÃO//////////////////////////////////////////////////////
  if (salariol < 350) {
    printf("\nMAL REMUNERADO");
  } else if (salariol >= 350 && salariol <= 600) {
    printf("\nNORMAL");
  } else if (salariol > 600) {
    printf("\nBEM REMUNERADO");
  }
  return 0;
}