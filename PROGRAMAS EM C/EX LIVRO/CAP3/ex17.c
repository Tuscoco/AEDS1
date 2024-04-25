//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
//FUNÇÃO PRINCIPAL
int main ()
{
    //DECLARAÇÃO DE VARIÁVEIS
    double sal,r1,r2,i1,i2,total;
    //ENTRADA DE DADOS
    printf("Informe seu salario:\n");
    scanf("%lf",&sal);
    printf("Digite o valor emitido no primeiro cheque:\n");
    scanf("%lf",&r1);
    printf("Digite o valor emitido no segundo cheque:\n");
    scanf("%lf",&r2);
    //CONTAS E AFINS
    i1=r1+(r1*0.38/100);
    i2=r2+(r2*0.38/100);
    total=sal-i1-i2;
    //SAÍDA DE DADOS
    printf("Sobrou %.2lf reais na sua conta",total);
    return 0;
}