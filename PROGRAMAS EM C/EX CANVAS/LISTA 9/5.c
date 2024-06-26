#include <stdio.h>
#include <string.h>

int main() {
    char telefone[15], telefone_corrigido[15];

    printf("Telefone: ");
    fgets(telefone, sizeof(telefone), stdin);


    telefone[strcspn(telefone, "\n")] = 0;


    char telefone_sem_traco[15];
    int j = 0;
    for (int i = 0; telefone[i] != '\0'; i++) {
        if (telefone[i] != '-') {
            telefone_sem_traco[j++] = telefone[i];
        }
    }
    telefone_sem_traco[j] = '\0';

    int len = strlen(telefone_sem_traco);


    if (len == 8) {
        printf("Telefone possui 8 dígitos. Vou acrescentar o digito nove na frente.\n");
        snprintf(telefone_corrigido, sizeof(telefone_corrigido), "9%s", telefone_sem_traco);
    } else {
        strncpy(telefone_corrigido, telefone_sem_traco, sizeof(telefone_corrigido));
    }


    char telefone_formatado[15];
    strncpy(telefone_formatado, telefone_corrigido, 5);
    telefone_formatado[5] = '-';
    strncpy(telefone_formatado + 6, telefone_corrigido + 5, 4);
    telefone_formatado[10] = '\0';

    printf("Telefone corrigido sem formatação: %s\n", telefone_corrigido);
    printf("Telefone corrigido com formatação: %s\n", telefone_formatado);

    return 0;
}
