#include <stdio.h>

int main()
{
    double s=0,n,i=1;

    printf("Informe um numero:\n");
    scanf("%lf",&n);

    for( ;i<=n;i++)
    {
        s+=1/i;
    }

    printf("S=%lf\n",s);

    return 0;
}