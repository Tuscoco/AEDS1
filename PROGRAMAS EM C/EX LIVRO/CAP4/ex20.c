// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int codigopais, codigoproduto;
  double pesokg, pesog, precototal, imp, valortotal;

  // ENTRADA DE DADOS
  printf("Informe o codigo do produto:\n");
  scanf("%d", &codigoproduto);
  printf("Informe o peso do produto (em KG):\n");
  scanf("%lf", &pesokg);
  printf("Informe o codigo do pais:\n");
  scanf("%d", &codigopais);

  // SWITCH CASE
  switch (codigopais) {
    ///////////////////////////////////////////////////
  case 1:

    pesog = pesokg * 1000;

    if (codigoproduto >= 1 && codigoproduto <= 4) {
      precototal = 10 * pesog;
    } else if (codigoproduto >= 5 && codigoproduto <= 7) {
      precototal = 25 * pesog;
    } else if (codigoproduto >= 8 && codigoproduto <= 10) {
      precototal = 35 * pesog;
    } else {
      printf("CODIGO INVALIDO");
      return 0;
    }

    imp = 0;
    valortotal = precototal + imp;

    printf("Peso em g:%.2lf", pesog);
    printf("\nPreco total:%.2lf", precototal);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    ///////////////////////////////////////////////////////
  case 2:

    pesog = pesokg * 1000;

    if (codigoproduto >= 1 && codigoproduto <= 4) {
      precototal = 10 * pesog;
    } else if (codigoproduto >= 5 && codigoproduto <= 7) {
      precototal = 25 * pesog;
    } else if (codigoproduto >= 8 && codigoproduto <= 10) {
      precototal = 35 * pesog;
    } else {
      printf("CODIGO INVALIDO");
      return 0;
    }

    imp = precototal * 15 / 100;
    valortotal = precototal + imp;

    printf("Peso em g:%.2lf", pesog);
    printf("\nPreco total:%.2lf", precototal);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    /////////////////////////////////////////////////////
  case 3:

    pesog = pesokg * 1000;

    if (codigoproduto >= 1 && codigoproduto <= 4) {
      precototal = 10 * pesog;
    } else if (codigoproduto >= 5 && codigoproduto <= 7) {
      precototal = 25 * pesog;
    } else if (codigoproduto >= 8 && codigoproduto <= 10) {
      precototal = 35 * pesog;
    } else {
      printf("CODIGO INVALIDO");
      return 0;
    }

    imp = precototal * 25 / 100;
    valortotal = precototal + imp;

    printf("Peso em g:%.2lf", pesog);
    printf("\nPreco total:%.2lf", precototal);
    printf("\nImposto:%.2lf", imp);
    printf("\nValor total:%.2lf", valortotal);
    break;
    /////////////////////////////////////////////////////////
  default:
    printf("CODIGO INVALIDO!");
    break;
  }
  return 0;
}