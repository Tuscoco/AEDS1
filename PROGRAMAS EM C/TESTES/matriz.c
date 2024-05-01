#include <stdio.h>

int main()
{
    int E [4] [4];
    int i=0,j=0;

    for( ;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&E[i][j]);
        }
    }

    printf("%d--%d--%d--%d\n",E[0][0],E[0][1],E[0][2],E[0][3]);
    printf("%d--%d--%d--%d\n",E[1][0],E[1][1],E[1][2],E[1][3]);
    printf("%d--%d--%d--%d\n",E[2][0],E[2][1],E[2][2],E[2][3]);
    printf("%d--%d--%d--%d\n",E[3][0],E[3][1],E[3][2],E[3][3]);

    return 0;
}