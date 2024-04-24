#include <stdio.h>

void trian(int x,int y,int z){
    if((x<y+z)&&(y<x+z)&&(z<x+y)){
        if((x==y)&&(y==z)){
            printf("Equilatero\n");
        }else if(((x==y)&&(y!=z))||((x==z)&&(z!=y))||((y==z)&&(z!=x))){
            printf("Isoceles\n");
        }else if((x!=y)&&(y!=z)){
            printf("Escaleno\n");
        }
    }else{
        printf("NAO PODE SER UM TRIANGULO\n");
    }
}

int main()
{
    int l1,l2,l3;

    printf("Informe os tres lados do triangulo:\n");
    scanf("%d %d %d",&l1,&l2,&l3);

    trian(l1,l2,l3);

    return 0;
}