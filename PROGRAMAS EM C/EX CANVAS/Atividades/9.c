#include <stdio.h>
int main ()
{
    int pt,r,dt;
    printf("Qual o primeiro termo da p.a?\n");
    scanf("%d",&pt);
    printf("Qual a razao?\n");
    scanf("%d",&r);
    dt=pt+9*r;
    printf("O decimo termo e:%d",dt);
    return 0;
}