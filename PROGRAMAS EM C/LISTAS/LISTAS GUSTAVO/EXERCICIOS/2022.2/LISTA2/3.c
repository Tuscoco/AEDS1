#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Informe o primeiro numero:\n");
    scanf("%d",&n1);

    printf("Informe o segundo numero:\n");
    scanf("%d",&n2);

    if(n1>n2)
    {
        system("cls");
        printf("O numero %d eh maior\n",n1);
    }else if(n2>n1)
    {
        system("cls");
        printf("O numero %d eh maior\n",n2);
    }else
    {
        system("cls");
        printf("Sao iguais");
    }

    return 0;
}