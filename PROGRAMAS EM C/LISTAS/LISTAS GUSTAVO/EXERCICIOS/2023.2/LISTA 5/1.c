#include <stdio.h>
#include <stdlib.h>

int parImpar(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Informe um numero:\n");
    scanf("%d",&num);

    num = parImpar(num);

    if(num == 1)
    {
        system("cls");
        printf("PAR\n");
    }
    else
    {
        system("cls");
        printf("IMPAR\n");
    }

    return 0;
}