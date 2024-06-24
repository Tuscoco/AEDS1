#include <stdio.h>
#include <stdlib.h>

int mudar(int *x, int *y)
{
    int a1,a2;
    a1 = *x;
    a2 = *y;

    if(a2 > a1){
        *x = a2;
        *y = a1;
    }else{
        *x = a1;
        *y = a2;
    }

    return 1;
}

int main()
{
    int n1,n2;
    int *e1, *e2;
    e1 = &n1;
    e2 = &n2;

    printf("Informe dois numeros: ");
    scanf("%d",&n1);
    scanf("%d",&n2);

    mudar(e1,e2);

    system("cls");

    printf("====================\n");

    printf("X = %d\n",n1);
    printf("Y = %d\n",n2);

    printf("====================\n");

    return 0;
}