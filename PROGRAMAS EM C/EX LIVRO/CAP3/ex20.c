//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <math.h>
#define PI 3.14
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double ang,parede,radiano,escada;
    //ENTRADA DE DADOS
    printf("Qual o angulo entre a parede e o chao(em graus)?\n");
    scanf("%lf",&ang);
    printf("Qual a altura da parede?\n");
    scanf("%lf",&parede);
    //CONTAS E AFINS
    radiano=ang*PI/180;
    escada=parede/(asin(radiano));
    //SAÍDA DE DADOS
    printf("O tamanho da escada eh:%.2lf",escada);
    return 0;
}