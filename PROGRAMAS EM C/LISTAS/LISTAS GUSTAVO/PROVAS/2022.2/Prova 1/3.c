#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num * fat(num-1);
}

int main()
{
    int i=0,n;
    double x,exp=0;

    printf("Informe o x:\n");
    scanf("%lf",&x);

    printf("Informe o n:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        exp += (pow(-x,i))/fat(i);
    }

    system("cls");

    printf("EXP: %.2lf\n",exp);

    return 0;
}