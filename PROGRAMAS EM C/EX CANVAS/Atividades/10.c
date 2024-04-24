#include <stdio.h>
int main()
{
    int pt,r,qt,q;
    printf("Qual o primeiro termo da p.g?\n");
    scanf("%d",&pt);
    printf("Qual a razao da p.g?\n");
    scanf("%d",&r);
    q=pt*r/pt;
    qt=pt*q*q*q*q;
    printf("O quinto termo e:%d",qt);
    return 0;
}