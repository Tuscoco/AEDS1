#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    carro c1,c2;
    char o;
    int op,c;

    std::cout << "===============CARRO===============" << std::endl;
    std::cout << "Gostaria de iniciar o programa?(S ou N)" << std::endl;
    std::cout << "===================================" << std::endl;
    std::cin >> o;

    if(o != 'S' && o != 's'){
        return 0;
    }

    std::system("cls");

    while(1)
    {

        std::cout << "=========================" << std::endl;
        std::cout << "1 - Imprimir info" << std::endl;
        std::cout << "2 - Abastecer carro" << std::endl;
        std::cout << "3 - Andar" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "=========================" << std::endl;

        std::cin >> op;

        if(op == 0){
            break;
        }else if(op == 1){

            std::cout << "Qual carro?" << std::endl;
            std::cin >> c;

            if(c == 1){
                c1.imprimirInfo();
            }else if(c == 2){
                c2.imprimirInfo();
            }else{
                std::cout << "Invalido!!!" << std::endl;
            }

        }else if(op == 2){

            std::cout << "Qual carro?" << std::endl;
            std::cin >> c;

            if(c == 1){
                c1.abastecer();
            }else if(c == 2){
                c2.abastecer();
            }else{
                std::cout << "Invalido!!!" << std::endl;
            }

        }else if(op == 3){

            std::cout << "Qual carro?" << std::endl;
            std::cin >> c;

            if(c == 1){
                c1.andar();
            }else if(c == 2){
                c2.andar();
            }else{
                std::cout << "Invalido!!!" << std::endl;
            }

        }

    }

    return 0;
}