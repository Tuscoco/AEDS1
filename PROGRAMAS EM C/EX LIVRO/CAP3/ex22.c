//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double salm,qkw,vkw,vasp,vcd;
    //ENTRADA DE DADOS
    printf("Informe o salario minimo:\n");
    scanf("%lf",&salm);
    printf("Informe a quantidade de kw consumida:\n");
    scanf("%lf",&qkw);
    //CONTAS E AFINS
    vkw=salm/5;
    vasp=qkw*vkw;
    vcd=vasp-(vasp*15/100);
    //SAÍDA DE DADOS
    printf("Valor de cada KW:%.2lf",vkw);
    printf("\nValor a ser pago:%.2lf",vasp);
    printf("\nValor a ser pago com 15%% de desconto:%.2lf",vcd);
    return 0;
}