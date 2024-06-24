#include <stdio.h>

int main() {
    char *ptr;
    char letra = 'A';

    ptr = &letra;

    printf("Letras do alfabeto maiusculo:\n");

    for (*ptr = 'A'; *ptr <= 'Z'; (*ptr)++) {
        printf("%c ", *ptr);
    }

    printf("\n");

    return 0;
}
