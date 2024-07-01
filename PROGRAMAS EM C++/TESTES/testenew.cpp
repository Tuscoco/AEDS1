#include <iostream>

int main()
{
    int *p = new int[10];

    for(int i = 0; i < 10; i++)
    {
        p[i] = 0;
    }

    for(int i = 0; i < 10; i++)
    {
        std::cout << p[i] << "  ";
    }

    delete[] p;

    return 0;
}