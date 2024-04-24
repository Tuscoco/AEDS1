#include <stdio.h>
int main ()
{
    int h,m,d;
    printf("Horas:\n");
    scanf("%d",&h);
    printf("Minutos:\n");
    scanf("%d",&m);
    d=m+h*60;
    printf("%d",d);
    return 0;
}