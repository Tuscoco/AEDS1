#include <stdio.h>

void triangulo(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        return triangulo(n-1);
    }
}

int main()
{
    int num;

    printf("Informe um numero:\n");
    scanf("%d",&num);

    triangulo(num);

    return 0;
}