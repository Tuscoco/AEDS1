#include <stdio.h>
#include <stdlib.h>

int **preencherMatriz(int n)
{
    int i=0,j=0;
    int **matriz = (int**) malloc(n * sizeof(int*));

    if(matriz == NULL)
    {
        return NULL;
    }

    for(i=0;i<n;i++)
    {
        matriz[i] = (int*) malloc(n * sizeof(int));

        if(matriz[i] == NULL)
        {
            break;
        }
    }

    if(i != n)
    {
        for(i--;i>=0;i--)
        {
            free(matriz[i]);
        }
        free(matriz);
    }

    printf("Preencha a matriz:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elemento da linha %d da coluna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    return matriz;
}

int *diagonalPrincipal(int **matriz, int n)
{
    int i=0;
    int *dP = (int*) malloc(n * sizeof(int));

    if(dP == NULL)
    {
        return NULL;
    }

    for(i=0;i<n;i++)
    {
        dP[i] = matriz[i][i];
    }

    return dP;
}

int *diagonalSecundaria(int **matriz, int n)
{
    int i=0,j=n;
    int *d = (int*) malloc(n * sizeof(int));

    if(d == NULL)
    {
        return NULL;
    }

    for(i=0,j=n;i<n;i++,j--)
    {
        d[i] = matriz[i][j];
    }

    return d;
}

int determinante(int *dP, int *dS, int n)
{
    int det;
    int d1=0,d2=0;
    int i=0;

    for(i=0;i<n;i++)
    {
        d1 *= dP[i];
        d2 *= dS[i];
    }

    det = d1 - d2;

    return det;
}

void imprimir(int *vet, int n, int det)
{
    int i=0;

    system("cls");

    printf("------------------------------\n");
    printf("Diagonal principal:");

    for(i=0;i<n;i++)
    {
        printf("|%d|",vet[i]);
    }

    printf("\nDeterminante: %d\n",det);
    printf("------------------------------\n");
}

void liberar(int *vetordp, int *vetords, int **matriz, int n)
{
    int i=0;

    free(vetordp);
    free(vetords);

    for(i=0;i<n;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int main()
{
    int **matriz;
    int *vetordp;
    int *vetords;
    int n,det;

    printf("Informe a dimensao da matriz: ");
    scanf("%d",&n);

    matriz = preencherMatriz(n);

    vetordp = diagonalPrincipal(matriz, n);

    vetords = diagonalSecundaria(matriz, n);

    det = determinante(vetordp, vetords, n);

    imprimir(vetordp, n, det);

    liberar(vetordp, vetords, matriz, n);

    return 0;
}