#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *R;
    int i=0,posicao;

    scanf("%d",&N);

    R = (int*) malloc(N * sizeof(int));

    for( ;i<N;i++){
        scanf("%d",&R[i]);

        if(R[i-1] > R[i]){
            posicao = i;
        }else{
            posicao = 0;
        }
    }

    printf("%d\n",posicao);

    free(R);

    return 0;
}