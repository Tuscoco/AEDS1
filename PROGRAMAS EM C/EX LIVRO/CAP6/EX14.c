#include <stdio.h>

int main()
{
    char nome[5];
    double sal[5];
    int tempo[5];
    int i=0,novosal=0;

    for(i=0;i<5;i++){
        printf("Informe o nome do funcionario:\n");
        scanf("%c ",&nome[i]);
        printf("Informe o salario:\n");
        scanf("%lf",&sal[i]);
        printf("Informe o tempo de servico:\n");
        scanf("%d",&tempo);
    }
}