#include <stdio.h>

void ordem(int num1, int num2, int num3){

    if(num1>num2){
        if((num1>num3) && (num2>num3)){
            printf("%d--%d--%d\n",num3,num2,num1);
        }else{
            printf("%d--%d--%d\n",num2,num1,num3);
        }
    }else if(num2>num1){
        if((num2>num3) && (num3>num1)){
            printf("%d--%d--%d\n",num1,num3,num2);
        }else{
            printf("%d--%d--%d\n",num1,num2,num3);
        }
    }else if(num3>num2){
        if((num3>num1) && (num1>num2)){
            printf("%d--%d--%d\n",num2,num1,num3);
        }else{
            printf("%d--%d--%d\n",num2,num3,num1);
        }
    }
}

int main()
{
    int i=1,n,n1,n2,n3;

    printf("Informe a quantidade de conjuntos:\n");
    scanf("%d",&n);

    for( ;i<=n;i++){
        printf("Informe os 3 numeros:\n");
        scanf("%d %d %d",&n1,&n2,&n3);

        ordem(n1,n2,n3);
    }
    return 0;
}