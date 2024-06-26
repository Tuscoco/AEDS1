#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(char str[], int len) {

    int i, j;

    for(i = 0, j = len - 1; i < j; i++, j--){

        while (!isalnum(str[i]) && i < j) i++;
        while (!isalnum(str[j]) && i < j) j--;
        if (toupper(str[i]) != toupper(str[j])) {
            return 0;
        }

    }

    return 1;
}

int main() {

    char frase[1000];
    printf("Digite uma sequencia de caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = 0;

    printf("Você digitou: %s\n", frase);

    int len = strlen(frase);
    if(eh_palindromo(frase, len)){
        system("cls");
        printf("A sequencia eh um palindromo!!!\n");
    }else{
        system("cls");
        printf("A sequencia nao eh um palindromo!!!\n");
    }

    return 0;
}
