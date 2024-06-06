#include <iostream>

//typedef std::string text_t; Funciona igual a linguagem C
using text_t = std::string; //Mais popular que o typedef

int main()
{
    text_t nome = "Lucas";

    std::cout << nome << '\n';

    return 0;
}