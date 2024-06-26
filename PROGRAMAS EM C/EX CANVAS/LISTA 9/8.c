#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cifra_de_cesar(char *str, int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char base = isupper(str[i]) ? 'A' : 'a';
            str[i] = (str[i] - base + shift) % 26 + base;
        }
    }
}

int main() {
    char str[1000];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = 0;


    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }


    cifra_de_cesar(str, 3);

    printf("String codificada: %s\n", str);

    return 0;
}
