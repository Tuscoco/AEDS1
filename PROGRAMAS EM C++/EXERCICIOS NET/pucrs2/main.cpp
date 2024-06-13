#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{

    elevador e1;
    char iniciar;
    int escolha;

    system("cls");

    std::cout << "==========SISTEMA=DE=CONTROLE=DO=ELEVADOR==========" << std::endl;
    std::cout << "Bem vindo ao sistema de controle do elevador" << std::endl;
    std::cout << "Gostaria de iniciar o programa?(S / N):" << std::endl;
    std::cout << "===================================================" << std::endl;

    std::cin >> iniciar;

    if(iniciar != 'S'){
        return 0;
    }

    while(1)
    {
        std::cout << "===========INFORME=UM=COMANDO==========" << std::endl;
        std::cout << "1 - Imprimir informacoes" << std::endl;
        std::cout << "2 - Adicionar uma pessoa" << std::endl;
        std::cout << "3 - Remover uma pessoa" << std::endl;
        std::cout << "4 - Subir um andar" << std::endl;
        std::cout << "5 - Descer um andar" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "=======================================" << std::endl;

        std::cin >> escolha;

        system("cls");

        if(escolha == 0){
            break;
        }else if(escolha == 1){
            e1.imprimirInfo();
        }else if(escolha == 2){
            e1.entra();
        }else if(escolha == 3){
            e1.sai();
        }else if(escolha == 4){
            e1.sobe();
        }else if(escolha == 5){
            e1.desce();
        }else{
            std::cout << "Insira um codigo valido" << std::endl;
        }
    }
    
    return 0;
}