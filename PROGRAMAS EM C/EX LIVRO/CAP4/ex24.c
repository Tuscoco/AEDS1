// INCLUSÃO DE BIBLIOTECA
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  char tipo, refrigeracao;
  double preco, adic, imp, precoc, desconto, novopreco;

  // ENTRADA DE DADOS
  printf("Informe o valor do produto:\n");
  scanf("%lf", &preco);
  printf("Informe o tipo do produto:\nA-alimentacao\nL-limpeza\nV-vestuario\n");
  scanf(" %c", &tipo);
  printf("Informe a refrigeracao do produto:\nS-precisa de refrigeracao\nN-nao "
         "precisa de refrigeracao\n");
  scanf(" %c", &refrigeracao);

  // IFS REFRIGERAÇÃO E TIPO
  if (refrigeracao == 'N') {
    if (tipo == 'A') {
      if (preco < 15) {
        adic = 2;
      } else if (preco >= 15) {
        adic = 5;
      }
    } else if (tipo == 'L') {
      if (preco < 10) {
        adic = 1.50;
      } else if (preco >= 10) {
        adic = 2.50;
      }
    } else if (tipo == 'V') {
      if (preco < 30) {
        adic = 3;
      } else if (preco >= 30) {
        adic = 2.50;
      }
    }
  } else if (refrigeracao == 'S') {
    if (tipo == 'A') {
      adic = 8;
    } else if (tipo == 'L') {
      adic = 0;
    } else if (tipo == 'V') {
      adic = 0;
    }
  }
  // IMPOSTO
  if (preco < 25) {
    imp = preco * 5 / 100;
  } else if (preco >= 25) {
    imp = preco * 8 / 100;
  }
  // PREÇO DE CUSTO
  precoc = preco + imp;

  // DESCONTO
  if (tipo == 'A') {
    desconto = 0;
  } else if (refrigeracao == 'S') {
    desconto = 0;
  } else {
    desconto = precoc * 3 / 100;
  }
  // NOVO PRECO
  novopreco = precoc + adic - desconto;

  // SAÍDA DE DADOS
  printf("Valor adicional:%.2lf", adic);
  printf("\nImposto:%.2lf", imp);
  printf("\nPreco de custo:%.2lf", precoc);
  printf("\nDesconto:%.2lf", desconto);
  printf("\nNovo preco:%.2lf", novopreco);

  // CLASSIFICAÇÃO
  if (novopreco <= 50) {
    printf("\nBARATO");
  } else if (novopreco > 50 && novopreco < 100) {
    printf("\nNORMAL");
  } else if (novopreco >= 100) {
    printf("\nCARO");
  }

  return 0;
}