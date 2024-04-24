#include <stdio.h>

int main()
{
    double a1,a2,a3;

    printf("Informe dois angulos do triangulo:\n");
    scanf("%lf %lf",&a1,&a2);

    a3=180-(a1+a2);

    if (a3<0)
    {
        printf("INVALIDO");
    }else if (a3==0)
    {
        printf("INVALIDO");
    }else{
        printf("O terceiro angulo mede:%.2lf",a3);
    }
    return 0;
}