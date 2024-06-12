#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){

    if(n==1){
        return 1;
    }

    return n * fatorial(n-1);
}

int main()
{
    int i=1,num;
    double e=1.0,fat;

    printf("Informe a quantidade de termos:\n");
    scanf("%d",&num);

    for(i = 1; i <= num; i++)
    {
        fat = fatorial(i);
        e += 1/(fat);
    }

    system("cls");

    printf("O valor de E: %lf\n",e);

    return 0;
}