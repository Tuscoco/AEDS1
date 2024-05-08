#include <stdio.h>
#include <stdlib.h>

int contn=0;

int *negativos(int *veto){
    int i=0;

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

    return v;
}

void preencher_Vetor(){
    int vetor[10];
    int i=0;
    int *v;

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vetor[i]);
    }

    *v=*negativos(vetor);

    for(i=0;i<contn;i++){
        printf("%d\n",v[i]);
    }

    free(v);
}

int main(){
    preencher_Vetor();

    return 0;
}

/////////////DUVIDA
