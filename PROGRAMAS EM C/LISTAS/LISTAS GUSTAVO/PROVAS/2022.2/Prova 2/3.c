#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *preencherVetor(int n)
{
    double *vet = (double*) malloc(n * sizeof(double));
    int i=0;

    printf("Preencha os elementos do vetor:\n");
    for(i=0;i<n;i++)
    {
        printf("Insira o elemento %d do vetor:\n",i);
        scanf("%lf",&vet[i]);
    }

    return vet;
}

void calcular(double *vet, int esc, int n)
{
    int i=0;

    for(i=0;i<n;i++)
    {
        vet[i] *= esc;
    }

    system("cls");

    printf("------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("Vetor[%d] = %.2lf\n",i,vet[i]);
    }

    printf("------------------------------\n");
}

int main()
{
    int num,esc;
    double *vetor;

    printf("Informe o numero de elementos do vetor:\n");
    scanf("%d",&num);

    printf("Informe o escalar:\n");
    scanf("%d",&esc);

    vetor = preencherVetor(num);

    calcular(vetor,esc,num);

    free(vetor);

    return 0;
}