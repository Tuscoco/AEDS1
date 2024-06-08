#include <iostream>

int main()
{
    std::string name;
    //int x;

    std::cout << "Informe seu nome: ";
    std::getline(std::cin,name);

    //x = name.length(); Retorna o tamanho em caracteres da string
    //x = name.empty(); Retorna um valor booleano, que indica se a string esta preenchida ou nao
    //name.clear(); Limpa a string
    //name.append("@gmail.com"); Adiciona o que for pedido ao final da string
    //name.insert(3, "@"); Adiciona o caractere informado na posição informada, sem excuir o caractere

    //std::cout << x;
    std::cout << name << '\n';
    //std::cout << name.find('a'); Retorna a posição do caractere que foi pedido
    //std::cout << name.at(0); Retorna o caractere na posição desejada

    return 0;
}