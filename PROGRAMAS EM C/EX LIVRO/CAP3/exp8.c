#include <stdio.h>

int main()
{
    double kg,g;

    printf("Digite seu peso em kg:\n");
    scanf("%lf",&kg);

    g=kg*1000;

    printf("Peso em gramas:%.2lf",g);

    return 0;
}