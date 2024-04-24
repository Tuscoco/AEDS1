#include <stdio.h>
int main ()
{
    int num1,num2,opcao;
    printf("Digite um numero:\n");
    scanf("%d",&num1);
    printf("Digite outro numero:\n");
    scanf("%d",&num2);
    printf("Escolha uma das opcoes:\n1=somar\n2=subtrair\n3=multiplicar\n4=dividir\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
        case 1:
        printf("A soma e:%d\n",num1+num2);
        break;
        case 2:
        printf("A diferença e:%d\n",num1-num2);
        break;
        case 3:
        printf("A multiplicacao e:%d\n",num1*num2);
        break;
        case 4:
        printf("A divisao e:%d\n",num1/num2);
        break;
    }
    return 0;
}