#include <iostream>

int main()
{
    std::string name;

    while(name.empty())
    {
        std::cout << "Digite seu nome: ";
        std::getline(std::cin,name);
    }

    std::cout << "Ola " << name;

    return 0;
}