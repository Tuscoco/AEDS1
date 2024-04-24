#include <stdio.h>

int main()
{
    int x,y,soma=0;

    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y)
    {
        for ( ;y<x;y++)
        {
            if((y%2!=0) || (y==0))
            {
                soma+=y;
            }
        }
        
    }
    if(y>x)
    {
        for ( ;x<y;x++)
        {
            if((x%2!=0) || (x==0))
            {
                soma+=x;
            }
        }
    }

    printf("%d\n",soma);

    return 0;
}