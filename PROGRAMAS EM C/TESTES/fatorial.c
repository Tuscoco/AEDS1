#include <stdio.h>

int fatorial(int n)
{
    if(n<=1){
        return 1;
    }
    return n*fatorial(n-1);
}

int main()
{
    int num;

    printf("Informe um numero:\n");
    scanf("%d",&num);

    printf("O fatorial de %d eh %d\n",num,fatorial(num));

    return 0;
}