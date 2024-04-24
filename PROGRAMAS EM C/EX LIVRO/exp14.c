#include <stdio.h>

int main()
{
    int anonasc,anoatual,idadea,idadem,idaded,idades;

    printf("Digite seu ano de nascimento:\n");
    scanf("%d",&anonasc);
    printf("Digite o ano atual:\n");
    scanf("%d",&anoatual);

    idadea=anoatual-anonasc;
    idadem=idadea*12;
    idaded=idadea*365;
    idades=idaded/7;

    printf("Anos:%d",idadea);
    printf("\nMeses:%d",idadem);
    printf("\nDias:%d",idaded);
    printf("\nSemanas:%d",idades);

    return 0;
}