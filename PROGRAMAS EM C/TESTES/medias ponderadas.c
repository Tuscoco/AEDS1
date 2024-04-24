#include <stdio.h>

int main()
{
    int i=1,n;
    double x,y,z,media;

    scanf("%d",&n);

    for( ;i<=n;i++){

        scanf("%.1lf %.1lf %.1lf",&x,&y,&z);

        media=(2*x+3*y+5*z)/10;

        printf("%.1lf",media);
    }

    return 0;
}