#include <stdio.h>

int main()
{
    int num[8],pos[8],neg[8];
    int contp=0,contn=0,i=0;

    for(i=0;i<8;i++){
        printf("Informe um numero:\n");
        scanf("%d",&num[i]);

        if(num[i]>=0){
            pos[i] = num[i];
            contp++;
        }else{
            neg[i] = num[i];
            contn++;
        }
    }

    if(contp == 0){
        printf("Vetor de positivos vazio\n");
    }else{
        for(i=0;i<contp;i++){
            printf("Positivo[%d] = %d\n",i,pos[i]);
        }
    }

    if(contn == 0){
        printf("Vetor de negativos vazio\n");
    }else{
        for(i=0;i<contn;i++){
            printf("Negativo[%d] = %d\n",i,neg[i]);
        }
    }

    return 0;
}