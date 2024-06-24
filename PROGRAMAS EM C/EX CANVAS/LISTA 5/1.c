#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int *num1,*num2;

    printf("Informe dois numeros: ");
    scanf("%d",&n1);
    scanf("%d",&n2);

    num1 = &n1;
    num2 = &n2;

    if(num1 > num2){
        system("cls");
        printf("%p eh maior que %p\n",num1,num2);
    }else{
        system("cls");
        printf("%p eh maior que %p\n",num2,num1);
    }

    return 0;
}