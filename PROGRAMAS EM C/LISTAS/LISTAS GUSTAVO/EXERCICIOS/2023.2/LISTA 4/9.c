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
    }

    if(i != n)
    {
        for(i--;i>=n;i--)
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
            scanf("%d",&matriz[i][j]);
        }
    }

    system("cls");

    return matriz;
}

int **multiplicar(int **matriz1, int **matriz2, int n)
{
    int i=0,j=0;
    int **matrizR = (int**) malloc(n * sizeof(int*));

    if(matrizR == NULL)
    {
        return NULL;
    }

    for(i=0;i<n;i++)
    {
        matrizR[i] = (int*) malloc(n * sizeof(int));
    }

    if(i != n)
    {
        for(i--;i>=n;i--)
        {
            free(matrizR[i]);
        }
        free(matrizR);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            matrizR[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    return matrizR;
}

void liberar(int **matriz1, int **matriz2, int **matrizR, int n)
{
    int i=0;

    for(i=0;i<n;i++)
    {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizR[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizR);
}

void imprimir(int **matrizR, int n)
{
    int i=0,j=0;
    
    system("cls");

    printf("----------Matriz Resultante----------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("|%d|",matrizR[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------------\n");
}

int main()
{
    int n;
    int **matriz1,**matriz2,**matrizR;

    printf("Informe a dimensao das matrizes: ");
    scanf("%d",&n);

    matriz1 = preencherMatriz(n);
    matriz2 = preencherMatriz(n);

    matrizR = multiplicar(matriz1, matriz2, n);

    imprimir(matrizR, n);
    liberar(matriz1, matriz2, matrizR, n);

    return 0;
}