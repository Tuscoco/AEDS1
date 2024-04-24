#include <stdio.h>

int main()
{
    int i=1,num,d1=0,d2=0,d3=0;

    for( ;i<=10;i++)
    {
        scanf("%d",&num);

        if((num%3==0) && (num%9==0))
        {
            d1+=1;
            printf("%d eh divisivel por 3 e 9 simultaneamente!\n",num);
        }
        else if(num%2==0)
        {
            d2+=1;
            printf("%d eh divisivel por 2!\n",num);
        }
        else if(num%5==0)
        {
            d3+=1;
            printf("%d eh divisivel por 5!\n",num);
        }
        else
        {
            printf("Esse numero nao eh divisivel pelos valores!\n");
        }
    }
    printf("%d divisiveis por 3 e 9 ao mesmo tempo\n",d1);
    printf("%d divisiveis por 2\n",d2);
    printf("%d divisiveis por 5\n",d3);

    return 0;
}