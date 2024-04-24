#include <stdio.h>
int main ()
{
    int num;
    printf("Digite um numero de 3 digitos:\n");
    scanf("%d",&num);
    printf("O inverso e:%d%d%d",num%10,(num/10)%10,num/100);
    return 0;
}