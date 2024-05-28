#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
    int i=3;
    int n1=0,n2=1,aux;

    system("cls");

    printf("%d\n",n1);
    printf("%d\n",n2);

    for(i=3;i<=n;i++)
    {
        aux = n1+n2;
        n1 = n2;
        n2 = aux;

        printf("%d\n",aux);
    }
}

int main()
{
    int num;

    printf("Informe a quantidade de termos:\n");
    scanf("%d",&num);

    fibonacci(num);

    return 0;
}