#include <stdio.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutacoes(char *vetor, int inicio, int tamanho) {
    if (inicio == tamanho - 1) {
        printf("%s\n", vetor);
    } else {
        for (int i = inicio; i < tamanho; i++) {
            swap(vetor + inicio, vetor + i);
            permutacoes(vetor, inicio + 1, tamanho);
            swap(vetor + inicio, vetor + i);
        }
    }
}

int main() {
    char vetor[] = {'A', 'B', 'C', 'D'};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    permutacoes(vetor, 0, tamanho);

    return 0;
}
