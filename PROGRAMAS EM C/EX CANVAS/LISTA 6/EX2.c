#include <stdio.h>
#include <stdlib.h>

void preencher_Vetor(){
    int vetor[10];
    int i=0;

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vetor[i]);
    }
    negativos(vetor);
}

int *negativos(int *veto){
    int contn=0,i=0;

    for(i=0;i<10;i++){
        if(veto[i]<0){
            contn++;
        }
    }

    int *v=(int*) malloc(contn*sizeof(int));

    for(i=0;i<contn;i++){
        if(veto[i]<0){
            v[i]=veto[i];
        }
    }

    return *veto;
}

int main(){
}

/////////////DUVIDA
