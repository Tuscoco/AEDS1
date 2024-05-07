#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i=0,j=0,soma=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Informe o %d numero da linha %d da coluna %d\n",j+1,i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    i=0;
    j=0;

    for(i=j;i<4;i++,j++){
        printf("Matriz[%d][%d] = %d\n",i,j,matriz[i][j]);
    }

    for(i=1;i<4;i++){
        for(j=0;j<3;j++){
            soma+=matriz[i][j];
        }
    }

    printf("Soma dos elementos abaixo da diagonal principal:%d\n",soma);

    return 0;
}