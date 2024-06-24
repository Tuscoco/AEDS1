#include <stdio.h>

int main() {
    char simbolo;

    printf("Digite um simbolo: ");
    scanf(" %c", &simbolo);

    switch (simbolo) {
        case '<':
            printf("SINAL DE MENOR\n");
            break;
        case '>':
            printf("SINAL DE MAIOR\n");
            break;
        case '=':
            printf("SINAL DE IGUAL\n");
            break;
        default:
            printf("OUTRO SINAL\n");
            break;
    }

    return 0;
}
