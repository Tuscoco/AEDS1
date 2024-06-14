#include "funcs.hpp"
#include <iostream>

void classe::arCondicionado::selecionarPotencia(float p){

    if(p > 10 || p < 0){
        std::cout << "Informe uma potencia valida!!!" << std::endl;
    }else{
        potencia = p;
        tempIn = tempEx - (p * 1.8);
    }
}

void classe::arCondicionado::imprimirInfo(){

    system("cls");

    std::cout << "=====================================" << std::endl;

    std::cout << "Temperatura Externa: " << tempEx << std::endl;
    std::cout << "Temperatura Interna: " << tempIn << std::endl;
    std::cout << "Potencia: " << potencia << std::endl;

    std::cout << "=====================================" << std::endl;

}