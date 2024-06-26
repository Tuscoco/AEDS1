#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100], iniciais[10] = "";
    char *conectores[8] = {"e", "do", "da", "dos", "das", "de", "di", "du"};
    int num_conectores = 8;
    char *token;

    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;

    token = strtok(nome, " ");
    while (token != NULL) {
        int is_conector = 0;
        for (int i = 0; i < num_conectores; i++) {
            if (strcmp(token, conectores[i]) == 0) {
                is_conector = 1;
                break;
            }
        }
        if (!is_conector) {
            char initial[2] = {toupper(token[0]), '\0'};
            strcat(iniciais, initial);
        }
        token = strtok(NULL, " ");
    }

    printf("Iniciais: %s\n", iniciais);

    return 0;
}
