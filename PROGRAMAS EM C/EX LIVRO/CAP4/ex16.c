// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  double precoatual, novopreco;
  int vendas;

  // ENTRADA DE DADOS
  printf("Informe o preco do produto:\n");
  scanf("%lf", &precoatual);
  printf("Informe a quantidade de vendas mensais:\n");
  scanf("%d", &vendas);

  // IFS
  if (vendas < 500 || precoatual < 30) {
    novopreco = precoatual + (precoatual * 10 / 100);
  } else if ((vendas >= 500 && vendas < 1200) ||
             (precoatual >= 30 && precoatual < 80)) {
    novopreco = precoatual + (precoatual * 15 / 100);
  } else if (vendas >= 1200 || precoatual >= 80) {
    novopreco = precoatual - (precoatual * 20 / 100);
  }
  // SAÍDA DE DADOS
  printf("O novo preco do produto eh:%.2lf", novopreco);

  return 0;
}