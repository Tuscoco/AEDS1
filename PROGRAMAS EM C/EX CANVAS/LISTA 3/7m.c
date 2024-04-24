#include <stdio.h>
#include<stdbool.h>

bool pn(int n){
    bool t;
    if(n>0){
        t=true;
    }else{
        t=false;
    }
    return t;
}

int main()
{
    int num;
    bool a;

    printf("Informe um numero:\n");
    scanf("%d",&num);

    a=pn(num);

    if(a==true){
        printf("O numero %d eh positivo\n",num);
    }else if(a==false){
        printf("O numero %d eh negativo\n",num);
    }

    return 0;
}