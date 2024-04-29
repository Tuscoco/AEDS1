#include <stdio.h>

int main()
{
    int N[1000];
    int i=0,num=0,T;

    scanf("%d",&T);

    if(T==1){
        printf("N[%d] = %d\n",0,0);
        return 0;
    }

    for( ;i<1000;i++){
        for( ;num<T;num++){
            N[i] = num;
            printf("N[%d] = %d\n",i,N[i]);
        }
        num = 0;
    }

    return 0;
}