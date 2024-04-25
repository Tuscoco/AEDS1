#include <stdio.h>

int main()
{
    int area,w,m1,m2;

    printf("Informe a largura e o comprimento do comodo:\n");
    scanf("%d %d",&m1,&m2);

    area=m1*m2;
    w=area*18;

    printf("A potencia necessaria eh:%d",w);

    return 0;
}