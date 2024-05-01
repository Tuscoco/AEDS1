#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int *FIB;
    int i=2,n1=0,n2=1;

    scanf("%d",&T);

    FIB = (int*) malloc(T * sizeof(int));

    FIB[0] = 0;
    FIB[1] = 1;

    for( ;i<=T;i++){
        FIB[i] = n1+n2;
        n1 = n2;
        n2 = FIB[i];
    }

    printf("Fib[%d] = %d",T,FIB[T]);

    free(FIB);

    return 0;
}