#include <iostream>
#include "funcs.hpp"
#include "funcs.cpp"

using namespace classe;

int main()
{
    circulo c1;
    int x1,y1;
    float temp;
    int op;

    std::cout << "==========BEM VINDO AO CIRCULO==========" << std::endl;
    std::cout << "Informe as coordenadas do centro do circulo (x,y):" << std::endl;
    std::cin >> x1 >> y1;
    c1.setCentro(x1,y1);
    std::cout << "Informe o raio do circulo: " << std::endl;
    std::cin >> temp;
    c1.setRaio(temp);

    system("cls");

    while(1)
    {
        std::cout << "==========CONTROLE==========" << std::endl;
        std::cout << "1 - Imprimir informacoes" << std::endl;
        std::cout << "2 - Aumentar raio" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "============================" << std::endl;

        std::cin >> op;

        if(op == 1){
            c1.imprimirInfo();
        }else if(op == 2){
            std::cout << "Informe o percentual de aumento: ";
            std::cin >> temp;

            c1.aumentarRaio(temp);
        }else if(op == 0){
            break;
        }else{
            std::cout << "Informe um codigo valido" << std::endl;
        }

    }

    return 0;
}