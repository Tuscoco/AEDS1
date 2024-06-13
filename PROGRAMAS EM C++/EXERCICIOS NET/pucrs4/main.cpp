#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    relogio r1;
    int h,m,s;
    int op;

    system("cls");

    std::cout << "Informe um horario(hh mm ss): ";
    std::cin >> h >> m >> s;
    r1.setHora(h,m,s);

    r1.getHora();

    while(1){

        std::cout << "====================" << std::endl;

        std::cout << "1 - Imprimir horario" << std::endl;
        std::cout << "2 - Avancar 5 segundos" << std::endl;
        std::cout << "3 - Encerrar programa" << std::endl;

        std::cout << "====================" << std::endl;

        std::cin >> op;

        system("cls");

        if(op == 1){
            r1.getHora();
        }else if(op == 2){
            r1.avancar();
        }else{
            break;
        }
    }

    return 0;
}