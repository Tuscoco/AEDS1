#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Cadeia de caracteres em maiúsculas: %s\n", str);

    return 0;
}
