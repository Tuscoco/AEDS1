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
        for(i=0;i<12;i++){
            soma+=M [i] [n];
        }
        printf("%.1lf\n",soma);
    }else if(operacao == 'M'){
        for(i=0;i<12;i++){
            soma+=M [i] [n];
        }
        printf("%.1lf\n",soma/12);
    }
    return 0;
}