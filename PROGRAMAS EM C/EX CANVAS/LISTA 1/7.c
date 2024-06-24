#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;

    printf("Informe o X: ");
    scanf("%f",&x);

    if(x <= 1){
        y = 1;
    }else if(x > 1 && x <= 2){
        y = 2;
    }else if(x > 2 && x <= 3){
        y = pow(x,2);
    }else if(x > 3){
        y = pow(x,3);
    }

    printf("f(x) = y = %.2f\n",y);

    return 0;
}