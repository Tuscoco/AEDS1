#include <iostream>

int main()
{
    int n;

    do
    {

        std::cout << "Informe um numero positivo: ";
        std::cin >> n;

    } while (n < 0);

    std::cout << '\n' << n << '\n';

    return 0;
}