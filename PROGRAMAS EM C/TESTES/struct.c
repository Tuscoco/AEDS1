#include <stdio.h>
#include <string.h>
#include <locale.h>

#define tam 50

struct tusca{
    int idade;
    float peso;
    char nome[tam];
};

typedef struct tusca tusca;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    tusca sla = {0,0.0, "Teste"};

    printf("Idade: %d\n",sla.idade);
    printf("Peso: %f\n",sla.peso);
    printf("Nome: %s\n",sla.nome);

    sla.idade = 18;
    sla.peso = 77.7;
    strcpy(sla.nome, "Lucas");

    printf("\n\n");
    printf("Idade: %d\n",sla.idade);
    printf("Peso: %f\n",sla.peso);
    printf("Nome: %s\n",sla.nome);

    printf("\n\n");
    
    printf("Idade: ");
    scanf("%d",&sla.idade);
    printf("Peso: ");
    scanf("%f",&sla.peso);
    fflush(stdin);
    printf("Nome: ");
    scanf("%s ",&sla.nome);

    system("cls");

    printf("\n\n");
    printf("Idade: %d\n",sla.idade);
    printf("Peso: %f\n",sla.peso);
    printf("Nome: %s\n",sla.nome);

    return 0;
}