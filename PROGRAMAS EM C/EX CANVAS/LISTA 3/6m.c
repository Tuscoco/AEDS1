#include <stdio.h>

double sla(double n){
    double s=1,fat=1;
    int i=1,j=1;

    for( ;i<=n;i++){
        for( ;j<=n;j++){
            fat*=j;
        }
        s+=(1/fat);

        n--;
    }

    return s;
}

int main()
{
    double num;

    printf("Informe o numero de termos:\n");
    scanf("%lf",&num);

    printf("%.2lf\n",sla(num));

    return 0;
}