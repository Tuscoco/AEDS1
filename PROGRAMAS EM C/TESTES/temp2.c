#include <stdio.h>
int main() 
{
    int opcao1,opcao2;
    double temp;
    printf("Qual unidade de temperatura?\n1=Graus Celcius\n2=Graus Fahrenheit\n3=Kelvin\n");
    scanf("%d",&opcao1);
    switch (opcao1)
    {
    case 1:
        printf("Para qual voce quer converter?\n1=Graus Fahrenheit\n2=Kelvin\n");
        scanf("%d",&opcao2);
        switch (opcao2)
        {
        case 1:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A conversao e:%lf",(temp*9/5)+32);
            break;
        case 2:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A conversao e:%lf",temp+273);
            break;
        }
        break;
    case 2:
        printf("Para qual voce quer converter?\n1=Graus Celsius\n2=Kelvin\n");
        scanf("%d",&opcao2);
        switch (opcao2)
        {
        case 1:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A convercao e:%lf",(temp-32)*5/9);
            break;
        case 2:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A convercao e:%lf",(temp+459)*5/9);
            break;
        }
        break;
    case 3:
        printf("Para qual voce quer converter?\n1=Graus Celsius\n2=Graus Fahrenheint\n");
        scanf("%d",&opcao2);
        switch (opcao2)
        {
        case 1:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A convercao e:%lf",temp-273);
            break;
        case 2:
            printf("Qual a temperatura?\n");
            scanf("%lf",&temp);
            printf("A convercao e:%lf",(temp-273)*9/5+32);
            break;
        }
        break;
    }
    return 0;
}