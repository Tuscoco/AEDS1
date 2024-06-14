#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    arCondicionado a1,a2(1);
    int op;
    int a;
    float p;
    char c;

    system("cls");

    std::cout << "=============AR=CONDICIONADO=============" << std::endl;
    std::cout << "Gostaria de iniciar o programa? (s ou n)" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    std::cin >> c;

    if(c == 'N' || c == 'n'){
        return 0;
    }

    while(1)
    {
        std::cout << "===================================" << std::endl;
        std::cout << "1 - Imprimir informacoes" << std::endl;
        std::cout << "2 - Setar potencia" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "===================================" << std::endl;

        std::cin >> op;

        if(op == 0){
            break;
        }else if(op == 1){
            std::cout << "1 ou 2: ";
            std::cin >> a;

            if(a == 1){
                a1.imprimirInfo();
            }else if(a == 2){
                a2.imprimirInfo();
            }else{
                std::cout << "Valor invalido" << std::endl;
            }
        }else if(op == 2){
            std::cout << "1 ou 2: ";
            std::cin >> a;

            std::cout << "Informe a potencia(0-10): ";
            std::cin >> p;

            if(a == 1){
                a1.selecionarPotencia(p);
            }else if(a == 2){
                a2.selecionarPotencia(p);
            }else{
                std::cout << "Valor invalido" << std::endl;
            }
        }
    }

    return 0;
}