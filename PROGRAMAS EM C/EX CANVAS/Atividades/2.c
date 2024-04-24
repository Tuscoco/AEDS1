#include <stdio.h>
int main ()
{
    int num1,num2,soma,subtracao,multiplicacao,divisao;
    printf("Digite um numero:\n");
    scanf("%d",&num1);
    printf("Digite outro numero:\n");
    scanf("%d",&num2);
    soma=num1+num2;
    subtracao=num1-num2;
    multiplicacao=num1*num2;
    divisao=num1/num2;
    printf("soma:%d",soma);
    printf("\nsubtracao:%d",subtracao);
    printf("\nmultiplicacao:%d",multiplicacao);
    printf("\ndivisao:%d",divisao);
    return 0;
}