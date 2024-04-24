#include <stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if((n%n==0) && (n%1==n) && (n%2!=0) && (n%5!=0) && (n%7!=0) && (n%10!=0)){
        printf("Primo");
    }else{
        printf("Não primo");
    }
    return 0;
}