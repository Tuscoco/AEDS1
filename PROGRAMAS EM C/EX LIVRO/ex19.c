//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double ad,alu;
    int qd;
    //ENTRADA DE DADOS
    printf("Digite a autura de cada degrau:\n");
    scanf("%lf",&ad);
    printf("Digite a autura que deseja alcancar:\n");
    scanf("%lf",&alu);
    //CONTAS E AFINS
    qd=alu/ad;
    //SAÍDA DE DADOS
    printf("Voce devera subir %d degraus",qd);
    return 0;
}