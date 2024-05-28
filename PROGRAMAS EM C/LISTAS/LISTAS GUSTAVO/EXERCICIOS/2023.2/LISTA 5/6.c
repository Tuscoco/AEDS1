#include <stdio.h>
#include <stdlib.h>

int **preencherMatriz(int l, int c)
{
    int i=0,j=0;
    int **mat = (int**) malloc(l * sizeof(int*));

    if(mat == NULL)
    {
        return NULL;
    }

    for(i=0;i<l;i++)
    {
        mat[i] = (int*) malloc(c * sizeof(int));

        if(mat[i] == NULL)
        {
            break;
        }
    }

    if(i != l)
    {
        for(i--;i>=0;i--)
        {
            free(mat[i]);
        }

        free(mat);
    }

    ////////////////////////////////////////////////////////

    system("cls");

    printf("Preencha a matriz:\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Elemento da linha %d da coluna %d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    return mat;
}

int **produtoMatriz(int **matriz1, int **matriz2, int l, int c)
{
    int i=0,j=0;
    int **mat = (int**) malloc(l * sizeof(int*));

    if(mat == NULL)
    {
        return NULL;
    }

    for(i=0;i<l;i++)
    {
        mat[i] = (int*) malloc(c * sizeof(int));

        if(mat[i] == NULL)
        {
            break;
        }
    }

    if(i != l)
    {
        for(i--;i>=0;i--)
        {
            free(mat[i]);
        }

        free(mat);
    }

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            mat[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    return mat;
}

void imprimir(int **matrizR, int l, int c)
{
    int i=0,j=0;

    system("cls");

    printf("------------MatrizResultante------------\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("|%d|",matrizR[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
}

void liberarMemoria(int **matriz1, int **matriz2, int **matrizR, int l)
{
    int i=0;

    for(i=0;i<l;i++)
    {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizR[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizR);
}

int main()
{
    int l,c;
    int **matriz1;
    int **matriz2;
    int **matrizR;

    printf("Informe a quantidade de linhas das matrizes: ");
    scanf("%d",&l);

    printf("Informe a quantidade de colunas das matrizes: ");
    scanf("%d",&c);

    matriz1 = preencherMatriz(l,c);
    matriz2 = preencherMatriz(l,c);

    matrizR = produtoMatriz(matriz1,matriz2,l,c);

    imprimir(matrizR,l,c);

    liberarMemoria(matriz1,matriz2,matrizR,l);

    return 0;
}