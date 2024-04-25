// INCLUSÃO DE BIBLIOTECAS
#include <math.h>
#include <stdio.h>
// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int opcao;
  double num1, num2, soma, raiz;
  // ENTRADA DA OPÇÃO
  printf("Escolha uma opcao:\n1-Somar dois numeros\n2-Raiz quadrada de um "
         "numero\n");
  scanf("%d", &opcao);
  // SWITCH CASE
  switch (opcao) {
  // CASE1
  case 1:
    // ENTRADA DE DADOS
    printf("Digite dois numeros:\n");
    scanf("%lf %lf", &num1, &num2);
    // SOMA
    soma = num1 + num2;
    // SAÍDA DE DADOS
    printf("A soma de %.2lf e %.2lf eh:%.2lf", num1, num2, soma);
    break;
  // CASE2
  case 2:
    // ENTRADA DE DADOS
    printf("Digite um numero:\n");
    scanf("%lf", &num1);
    // RAIZ QUADRADA
    raiz = sqrt(num1);
    // SAÍDA DE DADOS
    printf("A raiz quadrada de %.2lf eh:%.2lf", num1, raiz);
    break;
  // DEFAULT
  default:
    printf("Opcao invalida!!!");
    break;
  }
  return 0;
}