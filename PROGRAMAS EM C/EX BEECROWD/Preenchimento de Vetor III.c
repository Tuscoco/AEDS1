#include <stdio.h>

int main()
{
    double N[100];
    int i=1;

    scanf("%lf",&N[0]);

    for( ;i<100;i++){
        N[i] = N[i-1]/2;
    }

    i=0;

    for( ;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
    }

    return 0;
}