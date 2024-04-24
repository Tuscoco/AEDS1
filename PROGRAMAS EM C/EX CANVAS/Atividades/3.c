#include <stdio.h>
int main ()
{
    int num1,num2,num3,media;
    printf("Digite o primeiro numero:\n");
    scanf("%d",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d",&num3);
    media=num1/3+num2/3+num3/3;
    printf("A media aritmetica e:%d",media);
    return 0;
}