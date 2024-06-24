#include <stdio.h>
#include <string.h>

int main() {
    char vetor[] = "Hello, World!";
    int tamanho = strlen(vetor);
    char *ptr = vetor + tamanho - 1;

    printf("Vetor original: %s\n", vetor);
    printf("Vetor ao contrario: ");

    while (ptr >= vetor) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");

    return 0;
}
