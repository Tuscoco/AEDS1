#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3

struct dados{
    char nome[50];
    int idade;
    double peso;
};

typedef struct dados dados;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i=0;
    dados lista[tam];

    for(i=0;i<tam;i++){
        printf("Informe os dados da pessoa %d:\n",i+1);

        printf("Nome:\n");
        scanf("%50[^\n]s",&lista[i].nome);
        fflush(stdin);

        printf("Idade:\n");
        scanf("%d",&lista[i].idade);
        fflush(stdin);

        printf("Peso:\n");
        scanf("%lf",&lista[i].peso);
        fflush(stdin);
    }

    system("cls");

    puts("Dados coletados:\n");
    for(i=0;i<tam;i++){
        printf("--------------------Pessoa %d--------------------\n",i+1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2lf\n", lista[i].peso);
    }
    printf("------------------------------------------------------------\n");

    return 0;
}