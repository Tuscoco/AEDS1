#include <stdio.h>
#include <math.h>

int main()
{
    double c1,c2,h;

    printf("Informe o valor dos dois catetos:\n");
    scanf("%lf %lf",&c1,&c2);

    h=sqrt(pow(c1,2)+pow(c2,2));

    printf("A hipotenusa eh:%.2lf",h);

    return 0;
}