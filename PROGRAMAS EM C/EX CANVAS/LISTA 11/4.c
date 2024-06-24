#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double *multiplicarVetor(double *vet1, double *vet2)
{
    double *vetr = (double*) malloc(5 * sizeof(double));
    int i=0;

    for(i=0;i<5;i++)
    {
        vetr[i] = vet1[i] * vet2[i];
    }

    return vetr;
}


int main()
{
    double vetor1[5];
    double vetor2[5];
    double *vetorr;
    int i=0;

    printf("Informe os elementos do vetor 1:\n");
    for(i=0;i<5;i++)
    {
        printf("Elemento %d: ",i+1);
        scanf("%lf",&vetor1[i]);
    }

    printf("\nInforme os elementos do vetor 2:\n");
    for(i=0;i<5;i++)
    {
        printf("Elemento %d: ",i+1);
        scanf("%lf",&vetor2[i]);
    }

    vetorr = multiplicarVetor(vetor1,vetor2);

    system("cls");
    for(i=0;i<5;i++)
    {
        printf("Vetor3[%d] = %.1lf\n",i,vetorr[i]);
    }

    free(vetorr);

    return 0;
}