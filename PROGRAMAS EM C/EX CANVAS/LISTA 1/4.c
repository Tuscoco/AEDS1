#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 8 && nota <= 10) {
        printf("Ótimo\n");
    } else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    } else if (nota < 5) {
        printf("Insatisfatório\n");
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}
