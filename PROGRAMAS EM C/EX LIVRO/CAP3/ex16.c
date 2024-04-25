//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double sm,imp,sbruto,vht,sar,ht;
    //ENTRADA DE DADOS
    printf("Insira o valor do salario minimo:\n");
    scanf("%lf",&sm);
    printf("Quantas horas foram trabalhadas?\n");
    scanf("%lf",&ht);
    //CONTAS E AFINS
    vht=sm/2;
    sbruto=ht*vht;
    imp=sbruto*3/100;
    sar=sbruto-imp;
    //SAÍDA DE DADOS
    printf("O salario a receber eh:%.2lf",sar);
    return 0;
}