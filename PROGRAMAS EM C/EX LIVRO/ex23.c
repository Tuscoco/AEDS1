//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <math.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double num,pi,pf,arc,arb;
    //ENTRADA DE DADOS
    printf("Digite um numero real:\n");
    scanf("%lf",&num);
    //CONTAS E AFINS
    pi=(int) num;
    pf=num-pi;
    arc=ceil(num);
    arb=floor(num);
    //SAÍDA DE DADOS
    printf("Parte inteira:%.0lf",pi);
    printf("\nParte fracionaria:%.2lf",pf);
    printf("\nArredondamento cima:%.0lf",arc);
    printf("\nArredondamento baixo:%.0lf",arb);
    return 0;
}