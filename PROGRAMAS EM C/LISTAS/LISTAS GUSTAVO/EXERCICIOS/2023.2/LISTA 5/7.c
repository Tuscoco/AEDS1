#include <stdio.h>
#include <stdlib.h>

void triangulo(int n)
{
    int v=1;
    if(v == n+1)
    {
        return;
    }
    int i=1;

    for(i=n;i>=v;i--)
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