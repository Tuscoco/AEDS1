#include <stdio.h>
#include <stdlib.h>

int multiplicar(int **mat, int maior)
{
    int **matr;
    int i,j;

    matr = (int**) malloc(2*sizeof(int*));
    for(i=0;i<2;i++)
    {
        matr[i] = (int*) malloc(2*sizeof(int));
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            matr[i][j] = mat[i][j]*maior; 
        }
    }

    return matr;
}

int maior(int **m)
{
    int i=0,j=0;
    int mai=0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(m[i][j] > mai)
            {
                mai = m[i][j];
            }
        }
    }

    return mai;
}

int **preencherMatriz()
{
    int **matriz;
    int i,j;

    matriz = (int**) malloc(2*sizeof(int*));
    for(i=0;i<2;i++)
    {
        matriz[i] = (int*) malloc(2*sizeof(int));
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Informe o elemento da linha %d da coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    return matriz;
}

int main()
{
    int maio;
    int **mat;
    int i,j;
    int **matriz;

    mat = preencherMatriz();

    maio = maior(mat);

    matriz = multiplicar(mat,maio);

    system("cls");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d--",matriz[i][j]);
        }
        printf("\n");
    }

    

    for(i=0;i<2;i++)
    {
        free(mat[i]);
    }
    free(mat);

    for(i=0;i<2;i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}