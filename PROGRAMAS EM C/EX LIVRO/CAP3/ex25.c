//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <math.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double custo,valor,qtd;
    //ENTRADA DE DADOS
    printf("Digite o custo do espetaculo:\n");
    scanf("%lf",&custo);
    printf("Digite o valor de cade ingresso:\n");
    scanf("%lf",&valor);
    //CONTAS E AFINS
    qtd=custo/valor;
    ceil(qtd);
    (int)qtd;
    //SAÍDA DE DADOS
    printf("Eh necessario vender %.0lf ingressos",qtd);
    return 0;   
}