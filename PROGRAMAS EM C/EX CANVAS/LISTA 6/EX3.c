#include <stdio.h>

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
}