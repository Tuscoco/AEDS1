#include <stdio.h>
#include <string.h>

void vogaisConsoantes(const char *frase){

    int i=0;
    int vogais=0,consoantes=0;

    for(i=0;frase[i]!='\0';i++){
        if((frase[i]>='A' && frase[i]<='Z')||(frase[i]>='a' && frase[i]<='z')){
            if((frase[i]=='A')||(frase[i]=='E')||(frase[i] == 'I')||(frase[i] == 'O')||(frase[i] == 'U')||(frase[i] == 'a')||(frase[i] == 'e')||(frase[i] == 'i')||(frase[i] == 'o')||(frase[i] == 'u')){
                vogais++;
            }else{
                consoantes++;
            }
        }
    }

    printf("Vogais:%d\n",vogais);
    printf("Consoantes:%d\n",consoantes);
}

int main()
{
    char texto[100];

    printf("Informe uma palavra:\n");
    scanf("%[^\n]s\n", texto);

    vogaisConsoantes(texto);

    return 0;
}