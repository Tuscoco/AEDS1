#include <stdio.h>

int main()
{
    int par[5],impar[5];
    int i=0,imp=0,p=0,num=0;

    for( ;i<15;i++){
        scanf("%d",&num);

        if(num%2==0){
            par[p] = num;
            p++;
        }else{
            impar[imp] = num;
            imp++;
        }
    }
    return 0;
}