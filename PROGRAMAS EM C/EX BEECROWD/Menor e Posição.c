#include <stdio.h>

int main()
{
    int n=0,i=0,menor=1000000000,posicao;
    int x[n];

    scanf("%d",&n);

    for( ;i<n;i++){
        scanf("%d",&x[i]);

        if(x[i]<menor){
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d",menor,posicao);

    return 0;
}