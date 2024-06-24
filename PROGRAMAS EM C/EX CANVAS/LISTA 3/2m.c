#include <stdio.h>
#include <stdlib.h>

void media(float s, int f, int n)
{
    float mediaSalario;
    mediaSalario = s / n;
    int mediaFilhos;
    mediaFilhos = f / n;

    system("cls");

    printf("====================\n");

    printf("Media de salario: %.2f\n",mediaSalario);
    printf("Media de filhos: %d\n",mediaFilhos);

    printf("====================\n");
}

int main()
{
    int n,i;
    float s,salario = 0.0;
    int f,filhos = 0;

    printf("Informe o numero de pessoas:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Pessoa %d\n",i);
        printf("Informe o salario: ");
        scanf("%f",&s);

        salario += s;

        printf("Informe o numero de filhos: ");
        scanf("%d",&f);

        filhos += f;
    }

    media(salario,filhos,n);

    return 0;
}