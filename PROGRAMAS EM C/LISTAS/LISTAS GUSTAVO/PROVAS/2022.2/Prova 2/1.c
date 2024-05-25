#include <stdio.h>
#include <stdlib.h>

void parImpar(int num)
{
    if(num % 2 == 0)
    {
        system("cls");
        printf("EH PAR\n");
    }
    else
    {
        system("cls");
        printf("EH IMPAR\n");
    }
}

int main()
{
    int n;

    printf("Informe um numero:\n");
    scanf("%d",&n);

    parImpar(n);

    return 0;
}