#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    double r,c,a,v;

    printf("Informe o raio da esfera:\n");
    scanf("%lf",&r);

    c=2*PI*r;
    a=PI*pow(r,2);
    v=PI*r*r*r*3/4;

    printf("C=%.2lf",c);
    printf("\nA=%.2lf",a);
    printf("\nV=%.2lf",v);

    return 0;
}