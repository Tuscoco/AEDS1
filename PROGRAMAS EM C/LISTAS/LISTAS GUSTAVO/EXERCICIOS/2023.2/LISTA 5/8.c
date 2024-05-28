#include <stdio.h>
#include <stdlib.h>

void triangulo(int n)
{
    if(n == 0)
    {
        return;
    }
    int i=1;

    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");

    return triangulo(n-1);
}

int main()
{
    int n;

    printf("Informe o numero de linhas:\n");
    scanf("%d",&n);

    system("cls");

    triangulo(n);

    return 0;
}