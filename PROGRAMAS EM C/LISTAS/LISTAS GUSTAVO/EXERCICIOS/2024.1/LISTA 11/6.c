#include <stdio.h>
#include <stdlib.h>

int *multiplicar(int *v, int **m, int tv, int l, int c)
{
    if(tv != l)
    {
        return NULL;
    }

    int *vetorR = (int*) calloc(c,sizeof(int));

    if(vetorR == NULL)
    {
        fprintf(stderr,"Erro ao alocar memoria!!!");
        return NULL;
    }

    int i,j;

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            vetorR[j] += v[i] * m[i][j]; 
        }
    }

    return vetorR;
}

int main()
{}