#include <stdio.h>

int main()
{
    int i=1,n,quadrado;

    scanf("%d",&n);

    for( ;i<=n;i++){

        if(i%2==0){
            quadrado=i*i;
            printf("%d^2 = %d\n",i,quadrado);
        }
    }

    return 0;
}