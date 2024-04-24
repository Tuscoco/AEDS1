#include <stdio.h>
int main ()
{
    int num1,num2,produto;
    printf("Digite um numero:\n");
    scanf("%d",&num1);
    printf("Digite outro numero:\n");
    scanf("%d",&num2);
    produto=num1*num2;
    printf("O produto e: %d",produto);
    return 0;
}