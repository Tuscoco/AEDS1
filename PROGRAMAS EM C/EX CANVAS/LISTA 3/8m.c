#include <stdio.h>
#include <math.h>

int sla(int n){
    if(n==0){
        return 0;
    }

    return ((pow(n,2)+1)/(n+3))+sla(n-1);
}

int main()
{
    int num,ss;

    printf("Informe um numero:\n");
    scanf("%d",&num);

    ss=sla(num);

    printf("%d\n",ss);

    return 0;
}