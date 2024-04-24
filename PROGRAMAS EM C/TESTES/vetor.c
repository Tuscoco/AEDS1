#include <stdio.h>

int main()
{
    const int tamanho = 10;
    int notas[tamanho];
    int i=0;
    double media=0;

    for( ;i<tamanho;i++){

        printf("Informe a nota:\n");
        scanf("%d",&notas[i]);

        media+=notas[i];
    }

    media/=tamanho;

    printf("A media eh:%.2lf\n",media);

    return 0;
}