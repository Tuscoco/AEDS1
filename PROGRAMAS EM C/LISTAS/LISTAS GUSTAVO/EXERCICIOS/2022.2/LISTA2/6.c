#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double lar,alt;

    printf("Informe a largura do retangulo:\n");
    scanf("%lf",&lar);

    printf("Informe a altura do retangulo:\n");
    scanf("%lf",&alt);

    system("cls");

    printf("Area: %lf\n",lar*alt);
    printf("Perimetro: %lf\n",lar+lar+alt+alt);

    return 0;
}