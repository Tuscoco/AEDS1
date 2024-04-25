#include <stdio.h>

int main()
{
    double salariom,salariob,salarior,vht,vhe,var;
    int ht,he;

    printf("Informe o salario minimo atual:\n");
    scanf("%lf",&salariom);
    printf("Digite quantas horas foram trabalhadas:\n");
    scanf("%d",&ht);
    printf("Digite quantas horas extras foram trabalhadas:\n");
    scanf("%d",&he);

    vht=salariom/8;
    vhe=salariom/4;
    salariob=ht*vht;
    var=he*vhe;
    salarior=salariob+var;

    printf("Salario a receber:%.2lf",salarior);

    return 0;
}