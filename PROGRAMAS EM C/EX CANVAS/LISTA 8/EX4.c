#include <stdio.h>
#include <string.h>

#define MAX_VOLUMES 1500
#define MAX_LENGTH 100

typedef struct {
    int codigo;
    char doacao;
    char nome[MAX_LENGTH];
    char autor[MAX_LENGTH];
    char editora[MAX_LENGTH];
    char area[MAX_LENGTH];
} Volume;

int main() {
    Volume volumes[MAX_VOLUMES];
    int num_volumes = 0;

    while (1) {
        int codigo;
        char doacao, nome[MAX_LENGTH], autor[MAX_LENGTH], editora[MAX_LENGTH], area[MAX_LENGTH];

        printf("\nCodigo Doacao(N/S) Nome Autor Editora Area: ");
        scanf("%d", &codigo);

        if (codigo == -1) {
            break;
        }

        scanf(" %c", &doacao);
        scanf(" %[^\n]", nome);
        scanf(" %[^\n]", autor);
        scanf(" %[^\n]", editora);
        scanf(" %[^\n]", area);

        volumes[num_volumes].codigo = codigo;
        volumes[num_volumes].doacao = doacao;
        strcpy(volumes[num_volumes].nome, nome);
        strcpy(volumes[num_volumes].autor, autor);
        strcpy(volumes[num_volumes].editora, editora);
        strcpy(volumes[num_volumes].area, area);

        num_volumes++;

        if (num_volumes >= MAX_VOLUMES) {
            printf("Limite de volumes atingido (%d). Cadastro encerrado.\n", MAX_VOLUMES);
            break;
        }
    }

    printf("\n### Consulta de Volumes ###\n");
    printf("Digite o codigo de catalogacao para consultar (ou -1 para sair):\n");

    while (1) {
        int codigo_consulta;
        char area_consulta[MAX_LENGTH];
        int encontrado = 0;

        printf("\nCodigo de catalogacao: ");
        scanf("%d", &codigo_consulta);

        if (codigo_consulta == -1) {
            break;
        }

        printf("Area: ");
        scanf(" %[^\n]", area_consulta);

        for (int i = 0; i < num_volumes; i++) {
            if (volumes[i].codigo == codigo_consulta && strcmp(volumes[i].area, area_consulta) == 0) {
                printf("\nCodigo: %d\n", volumes[i].codigo);
                printf("Doacao: %c\n", volumes[i].doacao);
                printf("Nome: %s\n", volumes[i].nome);
                printf("Autor: %s\n", volumes[i].autor);
                printf("Editora: %s\n", volumes[i].editora);
                printf("Area: %s\n", volumes[i].area);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("\nLivro nao encontrado ou area incorreta.\n");
        }
    }

    return 0;
}
