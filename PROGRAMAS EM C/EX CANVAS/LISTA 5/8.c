#include <stdio.h>

int ordenaValores(int *a, int *b, int *c) {
    int temp;
    int iguais = 0;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a == *b && *b == *c) {
        iguais = 1;
    }

    return iguais;
}

int main() {
    int a, b, c;

    printf("Digite três valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    int saoIguais = ordenaValores(&a, &b, &c);

    printf("\nValores ordenados: %d %d %d\n", a, b, c);

    if (saoIguais) {
        printf("Os três valores são iguais.\n");
    } else {
        printf("Os três valores são diferentes.\n");
    }

    return 0;
}
