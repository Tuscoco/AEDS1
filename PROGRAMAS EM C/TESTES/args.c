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

int main(int n_args,char**args)
{
    char f[1000] = "";

    if(n_args > 1){
        int i=1;

        printf("Argumentos:\n");
        printf("\targs[0]:%s\n", args[0]);

        for(i=1;i<n_args;i++){
            printf("\targs[%d]:%s\n",i,args[i]);
            strcat(f,args[i]);
            strcat(f," ");
        }
    }else{
        printf("Digite uma frase:\n");
        scanf("%[^\n]s\n",f);
    }

    vogaisConsoantes(f);

    return 0;
}