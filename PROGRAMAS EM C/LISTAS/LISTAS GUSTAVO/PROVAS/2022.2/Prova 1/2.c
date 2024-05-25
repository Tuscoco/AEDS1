#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double c1,c2,h,a,sen1,sen2;

    printf("Informe os catetos do triangulo:\n");
    scanf("%lf",&c1);
    scanf("%lf",&c2);

    h = sqrt(pow(c1,2) + pow(c2,2));
    a = (c1 * c2)/2;

    system("cls");

    printf("--------------------\n");

    printf("Hipotenusa: %.2lf\n",h);
    printf("Area: %.2lf\n",a);

    if(h != 1)
    {
        sen1 = c1/h;
        sen2 = c2/h;

        printf("Sen(a): %.2lf\n",sen1);
        printf("Sen(b): %.2lf\n",sen2);
    }

    printf("--------------------\n");

    return 0;
}