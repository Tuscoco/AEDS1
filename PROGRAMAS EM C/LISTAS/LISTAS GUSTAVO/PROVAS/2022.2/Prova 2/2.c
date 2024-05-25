#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n1,n2,resultado;

    printf("Informe os dois numeros:\n");
    scanf("%lf",&n1);
    scanf("%lf",&n2);

    resultado = sqrt(pow(n1,2) + pow(n2,2));

    system("cls");

    printf("Resultado: %.2lf\n",resultado);

    return 0;
}