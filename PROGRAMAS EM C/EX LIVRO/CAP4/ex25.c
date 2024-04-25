// INCLUSÃO DE BIBLIOTECA
#include <stdio.h>

// FUNÇÃO PRINCIPAL
int main() {
  // DECLARAÇÃO DE VARIÁVEIS
  int angulo, voltas;

  // ENTRADA DE DADOS
  printf("Digite o angulo:\n");
  scanf("%d", &angulo);

  // VOLTAS
  if (angulo >= 360 || angulo <= -360) {
    voltas = angulo / 360;
    angulo = angulo % 360;
  } else {
    voltas = 0;
  }

  // QUADRANTE
  if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 ||
      angulo == 360) {
    printf("Esta em cima de um dos eixos!");
  } else if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo > -360)) {
    printf("PRIMEIRO QUADRANTE");
  } else if ((angulo > 90 && angulo < 180) ||
             (angulo < -180 && angulo > -270)) {
    printf("SEGUNDO QUADRANTE");
  } else if ((angulo > 180 && angulo < 270) ||
             (angulo < -90 && angulo > -180)) {
    printf("TERCEIRO QUADRANTE");
  } else if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo > -90)) {
    printf("QUARTO QUADRANTE");
  }
  printf("\nVoltas:%d", voltas);

  return 0;
}