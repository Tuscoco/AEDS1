#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000], resultado[1000] = "";
    int i, j = 0, espaco_encontrado = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = 0;

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ') {
            resultado[j++] = texto[i];
            espaco_encontrado = 0;
        } else if (!espaco_encontrado) {
            resultado[j++] = ' ';
            espaco_encontrado = 1;
        }
    }
    resultado[j] = '\0';

    printf("Texto ajustado: %s\n", resultado);

    return 0;
}
