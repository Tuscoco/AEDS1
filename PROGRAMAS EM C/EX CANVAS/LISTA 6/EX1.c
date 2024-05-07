#include <stdio.h>

void media(double *notasdaturma){
    double soma=0,mediaa=0;
    int j=0,cont=0;

    for(j=0;j<10;j++){
        soma+=notasdaturma[j];
    }

    mediaa=soma/10;

    for(j=0;j<10;j++){
        if(notasdaturma[j]>mediaa){
            cont++;
        }
    }

    printf("A media da turma eh: %.2lf\n",mediaa);
    printf("%d alunos ficaram acima da media!\n",cont);
}

void preencher_Vetor(){
    double notas[10];
    int i=0;

    for(i=0;i<10;i++){
        printf("Informe a nota do aluno %d\n",i);
        scanf("%lf",&notas[i]);
    }

    media(notas);
}

int main()
{
    preencher_Vetor();

    return 0;
}