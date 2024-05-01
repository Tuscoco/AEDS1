#include <stdio.h>

int main()
{
    double M [12] [12];
    double soma=0;
    int n,i=0,j=0;
    char operacao;

    scanf("%d",&n);
    scanf("%s ", &operacao);

    for( ;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M [i] [j]);
        }
    }

    if(operacao == 'S'){
        for(j=0;j<12;j++){
            soma+=M [n] [j];
        }
        printf("%.1lf\n",soma);
    }else if(operacao == 'M'){
        for(j=0;j<12;j++){
            soma+=M [n] [j];
        }
        printf("%.1lf\n",soma/12);
    }
    return 0;
}