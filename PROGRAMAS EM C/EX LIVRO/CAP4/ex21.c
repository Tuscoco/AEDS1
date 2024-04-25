// DECLARAÇÃO DE VARIÁVEIS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int codigoestado, codigocarga;
  double pesot, pesoq, precocarga, imp, valortotal;

  // ENTRADA DE DADOS
  printf("Informe o codigo da carga:\n");
  scanf("%d", &codigocarga);
  printf("Informe o peso da carga(em toneladas):\n");
  scanf("%lf", &pesot);
  printf("Informe o codigo do estado:\n");
  scanf("%d", &codigoestado);

  // SWITCH CASE
  switch (codigoestado) {
    ////CASE1//////////////////////////////////////////////
  case 1:

    pesoq = pesot * 1000;

    if (codigocarga >= 10 && codigocarga <= 20) {
      precocarga = 100 * pesoq;
    } else if (codigocarga >= 21 && codigocarga <= 30) {
      precocarga = 250 * pesoq;
    } else if (codigocarga >= 31 && codigocarga <= 40) {
      precocarga = 340 * pesoq;
    } else {
      printf("CODIGO INVALIDO!");
      return 0;
    }

    imp = precocarga * 35 / 100;
    valortotal = precocarga + imp;

    printf("Peso em quilos:%.2lf", pesoq);
    printf("\nPreco da carga:%.2lf", precocarga);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ////CASE2//////////////////////////////////////////////////////////
  case 2:

    pesoq = pesot * 1000;

    if (codigocarga >= 10 && codigocarga <= 20) {
      precocarga = 100 * pesoq;
    } else if (codigocarga >= 21 && codigocarga <= 30) {
      precocarga = 250 * pesoq;
    } else if (codigocarga >= 31 && codigocarga <= 40) {
      precocarga = 340 * pesoq;
    } else {
      printf("CODIGO INVALIDO!");
      return 0;
    }

    imp = precocarga * 25 / 100;
    valortotal = precocarga + imp;

    printf("Peso em quilos:%.2lf", pesoq);
    printf("\nPreco da carga:%.2lf", precocarga);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ////CASE3///////////////////////////////////////////////
  case 3:

    pesoq = pesot * 1000;

    if (codigocarga >= 10 && codigocarga <= 20) {
      precocarga = 100 * pesoq;
    } else if (codigocarga >= 21 && codigocarga <= 30) {
      precocarga = 250 * pesoq;
    } else if (codigocarga >= 31 && codigocarga <= 40) {
      precocarga = 340 * pesoq;
    } else {
      printf("CODIGO INVALIDO!");
      return 0;
    }

    imp = precocarga * 15 / 100;
    valortotal = precocarga + imp;

    printf("Peso em quilos:%.2lf", pesoq);
    printf("\nPreco da carga:%.2lf", precocarga);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ////CASE4/////////////////////////////////////////////////
  case 4:

    pesoq = pesot * 1000;

    if (codigocarga >= 10 && codigocarga <= 20) {
      precocarga = 100 * pesoq;
    } else if (codigocarga >= 21 && codigocarga <= 30) {
      precocarga = 250 * pesoq;
    } else if (codigocarga >= 31 && codigocarga <= 40) {
      precocarga = 340 * pesoq;
    } else {
      printf("CODIGO INVALIDO!");
      return 0;
    }

    imp = precocarga * 5 / 100;
    valortotal = precocarga + imp;

    printf("Peso em quilos:%.2lf", pesoq);
    printf("\nPreco da carga:%.2lf", precocarga);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ////CASE5/////////////////////////////////////////////////////
  case 5:

    pesoq = pesot * 1000;

    if (codigocarga >= 10 && codigocarga <= 20) {
      precocarga = 100 * pesoq;
    } else if (codigocarga >= 21 && codigocarga <= 30) {
      precocarga = 250 * pesoq;
    } else if (codigocarga >= 31 && codigocarga <= 40) {
      precocarga = 340 * pesoq;
    } else {
      printf("CODIGO INVALIDO!");
      return 0;
    }

    imp = 0;
    valortotal = precocarga + imp;

    printf("Peso em quilos:%.2lf", pesoq);
    printf("\nPreco da carga:%.2lf", precocarga);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ////DEFAULT//////////////////////////////////////////////////////
  default:
    printf("CODIGO INVALIDO!");
    break;
  }
  return 0;
}