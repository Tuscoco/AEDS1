#include <stdio.h>
int main()
{
    int i=1,n,num,positivos=0,negativos=0,nulo=0;

    printf("Quantos termos serao digitados?\n");
    scanf("%d",&n);

    for( ;i<=n;i++){
        scanf("%d",&num);

        if(num>0){
            positivos+=1;
        }else if(num<0){
            negativos+=1;
        }else{
            nulo+=1;
        }
    }
    printf("Positivos:%d\n",positivos);
    printf("Negativos:%d\n",negativos);
    printf("Zeros:%d\n",nulo);

    return 0;
}