#include <stdio.h>

int main()
{
    double sm,salario,recebe;

    printf("Informe o salario minimo atual:\n");
    scanf("%lf",&sm);
    printf("Informe seu salario:\n");
    scanf("%lf",&salario);

    recebe=salario/sm;

    printf("Voce recebe %.2lf salarios minimos",recebe);

    return 0;
}