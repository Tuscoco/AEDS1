#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct cadastro{
    char nome[50];
    char endereco[100];
    int telefone;
};
typedef struct cadastro Cadastro; 


int main()
{
    Cadastro clientes[2];
    int i=0;

    for(i=0;i<2;i++){
        printf("Informe o nome do cliente: ");
        scanf("%[^\n]", clientes[i].nome);
        printf("Informe o telefone do cliente: ");
        scanf("%d", &clientes[i].telefone);

        while (getchar() != '\n');

        printf("Informe o endereco do cliente: ");
        scanf("%[^\n]", clientes[i].endereco);

        while (getchar() != '\n');
    }

    system("cls");

    for(i=0;i<2;i++){
        printf("----------%s----------\n", clientes[i].nome);
        printf("    telefone: %d\n",clientes[i].telefone);
        printf("    endereco: %s\n",clientes[i].endereco);
        printf("-----------------------------\n");
    }

    return 0;
}