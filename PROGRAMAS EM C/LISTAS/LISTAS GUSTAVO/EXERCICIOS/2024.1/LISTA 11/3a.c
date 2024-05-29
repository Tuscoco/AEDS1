#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar(const char *f, const char *p)
{
    int c = 0;
    char *deonde = f;

    while(1)
    {
        deonde = strstr(deonde,p);

        if(deonde == NULL)
        {
            break;
        }
        deonde++;
        c++;
    }

    return c;
}

int main()
{
    char str1[30] = "lucaslucaslucaslucas";
    char str2[30] = "lucas";
    int n;

    n = contar(str1,str2);

    printf("%d\n",n);

    return 0;
}