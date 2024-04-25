//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double sr,total,rg;
    //ENTRADA DE DADOS
    printf("Qual o peso do saco de racao(em KG)?\n");
    scanf("%lf",&sr);
    printf("Qual a quantidade de racao diaria de cada gato(em g)?\n");
    scanf("%lf",&rg);
    //CONTAS E AFINS
    total=sr-5*(2*(rg/1000));
    //SAÍDA DE DADOS
    printf("Apos 5 dias,restara %.2lg kg de racao no saco",total);
    return 0;
}