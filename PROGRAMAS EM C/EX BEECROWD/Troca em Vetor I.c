#include <stdio.h>

int main()
{
    int N[20];
    int i=0;

    for( ;i<20;i++){
        scanf("%d",&N[i]);
    }

    i=0;

    for( ;i<20;i++){
        printf("N[%d] = %d\n",i,N[19-i]);
    }

    return 0;
}