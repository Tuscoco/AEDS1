#include <stdio.h>
#include <stdlib.h>

void intercalar(int *v1,int *v2){
    int i=0,j=0;
    int *vetor3 = (int*) malloc(10 * sizeof(int));

    for(i=0;i<10;i++){
        vetor3[i] = 0;
    }

    for(j=0,i=0;j<10;j+=2,i++){
        vetor3[j] = v2[i]; 
    }

    for(j=1,i=0;j<10;j+=2,i++){
        vetor3[j] = v1[i];
    }

    for(i=0;i<10;i++){
        printf("Vetor3[%d] = %d\n",i,vetor3[i]);
    }

    free(vetor3);
}

void preencher_Vetores(){
    int vetor1[5];
    int vetor2[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vetor1[i]);
    }

    for(i=0;i<5;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vetor2[i]);
    }

    intercalar(vetor1,vetor2);
}

int main(){
    preencher_Vetores();

    return 0;
}