#include <stdio.h>
int main()
{
    int temp,opcao;
    printf("Qual a temperatura?\n");
    scanf("%d",&temp);
    printf("Para qual voce quer converter?\n1:Graus Celsius\n2:Graus Fahrenheit\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
    printf("A temperatura em Celsius e:%d",(temp-32)*5/9);
        break;
    case 2:
    printf("A temperatura em Fahrenheit e:%d",(temp*9/5)+32);
        break;
    }
    return 0;
}