#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alocar(int linhas, int colunas)
{
    int **m = (int**) calloc(linhas,sizeof(int*));
    int i;

    if(m == NULL)
    {
        fprintf(stderr,"Erro ao alocar memoria!!!");
        return NULL;
    }

    for(i=0;i<linhas;i++)
    {
        m[i] = (int*) calloc(colunas,sizeof(int));

        if(m[i] == NULL)
        {
            break;
        }
    }

    if(i != linhas)
    {
        fprintf(stderr,"Erro ao alocar memoria!!!");

        for(i--;i >= 0;i--)
        {
            free(m[i]);
        }
        free(m);
        return NULL;
    }

    return m;
}


int main()
{
    int **matriz;
    int i=0,j=0,l,c;

    printf("Informe a quantidade de linhas da matiz:\n");
    scanf("%d",&l);

    printf("Informe a quantidade de colunas da matriz:\n");
    scanf("%d",&c);

    matriz = alocar(l,c);

    system("cls");

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("|%d|",matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<l;i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}