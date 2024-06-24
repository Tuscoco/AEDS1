#include <stdio.h>
#include <stdlib.h>

float mediaAprovados(int n)
{
    int i;
    float nota,total=0.0,media=0.0;

    for(i=1;i<=n;i++)
    {
        printf("Informe a nota do aluno %d: ",i);
        scanf("%f",&nota);

        if(nota >= 6){
            total += nota;
        }

    }

    media = total / n;

    return media;
}

int main()
{
    int num;
    float media;

    printf("Informe o numero de alunos: ");
    scanf("%d",&num);

    media = mediaAprovados(num);

    system("cls");

    printf("===============\n");

    printf("Media: %.2f\n",media);

    printf("===============\n");

    return 0;
}