//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double hora,h,m,conv;
    //ENTRADA DE DADOS
    printf("Digite um horario como um numero real(00.00):\n");
    scanf("%lf",&hora);
    //CONTAS E AFINS
    h=(int)hora;
    m=h-hora;
    conv=m+(h*60);
    //SAÍDA DE DADOS
    printf("O horario em minutos eh:%lf",conv);
    return 0;
}