#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    televisao t1;
    int op;
    int c;
    char a;

    std::cout << "===============TELEVISAO===============" << std::endl;
    std::cout << "GOSTARIA DE LIGAR A TELEVISAO? (S ou N)" << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cin >> a;

    if(a == 'N' || a == 'n'){
        return 0;
    }

    system("cls");

    while(1)
    {
        
        std::cout << "==========================" << std::endl;
        std::cout << "1 - Imprimir Info" << std::endl;
        std::cout << "2 - Informar um canal" << std::endl;
        std::cout << "3 - Controle de canal" << std::endl;
        std::cout << "4 - Controle de volume" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "==========================" << std::endl;

        std::cin >> op;

        if(op == 0){
            break;
        }else if(op == 1){
            t1.imprimirInfo();
        }else if(op == 2){
            std::cout << "Informe um canal(1 - 10): ";
            std::cin >> c;

            system("cls");

            t1.selecionarCanal(c);
        }else if(op == 3){
            std::cout << "(+ ou -): ";
            std::cin >> a;

            system("cls");

            t1.controleCanal(a);
        }else if(op == 4){
            std::cout << "(+ ou -): ";
            std::cin >> a;

            system("cls");

            t1.controleVolume(a);
        }

    }

    return 0;
}