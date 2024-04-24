#include <stdio.h>

void medias( int num ){
    int i=1;
    double n1,n2,n3;
    char tipo;

        for( ;i<=num;i++){
        printf("Informe as 3 notas:\n");
        scanf("%lf %lf %lf",&n1,&n2,&n3);
        printf("Informe o tipo de media desejada:\nA-aritmetica\nP-ponderada\n");
        scanf("%c", &tipo);

        if(tipo=='a'){
        printf("Media aritmetica:%.2lf\n",(n1+n2+n3)/3);
        }
        if(tipo=='p'){
        printf("Media ponderada:%.2lf\n",(5*n1+3*n2+2*n3)/10);
        }
    }
}

int main()
{
    int n;

    printf("Informe a quantidade de alunos:\n");
    scanf("%d",&n);

    medias(n);

    return 0;
}