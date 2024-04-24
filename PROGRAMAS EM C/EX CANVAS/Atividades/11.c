#include <stdio.h>
int main ()
{
    double a,b;
    printf("Digite um numero:\n");
    scanf("%lf",&a);
    printf("Digite outro numero:\n");
    scanf("%lf",&b);
    printf("A=%2.lf",a-a+b);
    printf("\nB=%2.lf",b-b+a);
    return 0;
}