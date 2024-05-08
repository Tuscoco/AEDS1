#include <stdio.h>
#include <stdlib.h>

void trocarl2l8(){}

void trocarc4c10(){}

void trocardpds(){}

void trocarl5c10(){}

void preencher_Matriz(){
    int matriz[10][10];
    int i=0,j=0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("Informe um numero para a linha %d e coluna %d:\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

////////Dúvida