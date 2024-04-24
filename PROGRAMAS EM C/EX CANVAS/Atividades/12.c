#include <stdio.h>
int main ()
{
    double n,d,de;
    printf("Digite o numerador da fracao:\n");
    scanf("%lf",&n);
    printf("Digite o denominador da fracao:\n");
    scanf("%lf",&d);
    de=n/d;
    printf("Decimal:%lf",de);
    return 0;
}