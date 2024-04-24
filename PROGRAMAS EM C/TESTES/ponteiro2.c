#include <stdio.h>

int main()
{
    int x = 1;
    int *y;

    y = &x;

    printf("%d",*y);

    return 0;
}