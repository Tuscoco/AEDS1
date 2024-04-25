#include <stdio.h>

int main()
{
    double p,pg,pm;

    printf("Digite seu peso:\n");
    scanf("%lf",&p);

    pg=(p*15/100)+p;
    pm=p-(p*20/100);

    printf("Se engordar 15%%:%.2lf",pg);
    printf("\nSe emagrecer 20%%:%.2lf",pm);

    return 0;
}