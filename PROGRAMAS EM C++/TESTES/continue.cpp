#include <iostream>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 6)
        {
            continue;
        }

        std::cout << i << '\n';
    }

    return 0;
}