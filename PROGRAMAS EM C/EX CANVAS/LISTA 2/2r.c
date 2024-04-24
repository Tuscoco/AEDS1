#include <stdio.h>
int main()
{
    int i=1,num,positivos=0,negativos=0,nulo=0;
    double porcentagem,n;

    printf("Quantos termos serao digitados?\n");
    scanf("%lf",&n);

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
    porcentagem=n/100;
    printf("%d Positivos:%.1lf%%\n",positivos,porcentagem*positivos);
    printf("%d Negativos:%.1lf%%\n",negativos,porcentagem*negativos);
    printf("%d Zeros:%.1lf%%\n",nulo,porcentagem*nulo);

    return 0;
}