#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    pessoa p1;
    std::string nome;
    int var;
    double vari;

    std::cout << "Informe um nome: ";
    std::getline(std::cin,nome);
    p1.setNome(nome);

    std::cout << "Informe a idade: ";
    std::cin >> var;
    p1.setIdade(var);

    std::cout << "Informe a altura: ";
    std::cin >> vari;
    p1.setAltura(vari);

    system("cls");

    std::cout << "Nome: " << p1.getNome() << std::endl;
    std::cout << "Idade: " << p1.getIdade() << std::endl;
    std::cout << "Altura: " << p1.getAltura() << std::endl;

    return 0;
}