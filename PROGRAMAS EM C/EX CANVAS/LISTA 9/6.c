#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);


    palavra[strcspn(palavra, "\n")] = 0;

    int len = strlen(palavra);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("%c\n", palavra[i]);
    }

    return 0;
}
