#include <iostream>
#include <ctime>

int main()
{
    int n;
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        n = (rand() % 60)+1;
        std::cout << n << '\n';
    }

    return 0;
}