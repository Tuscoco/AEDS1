#include <stdio.h>
#include <math.h>
int main ()
{
    double cateto1,cateto2,h;
    printf("Informe um cateto:\n");
    scanf("%lf",&cateto1);
    printf("Informe o outro cateto:\n");
    scanf("%lf",&cateto2);
    h=sqrt(cateto1*cateto1+cateto2*cateto2);
    printf("A hipotenusa e:%lf",h);
    return 0;
}