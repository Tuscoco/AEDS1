#include <stdio.h>

int main()
{
    double tc,tf;

    printf("Digite a temperatura em celcius:\n");
    scanf("%lf",&tc);

    tf=(tc*9/5)+32;

    printf("A temperatura em fahreinheint eh:%.2lf",tf);

    return 0;
}