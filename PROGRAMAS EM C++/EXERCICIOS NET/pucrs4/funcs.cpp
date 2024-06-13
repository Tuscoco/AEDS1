#include "funcs.hpp"
#include <iostream>

void classe::relogio::setHora(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}

void classe::relogio::getHora(){

    system("cls");

    std::cout << "====================" << std::endl;

    std::cout << hora << ":" << minuto << ":" << segundo << std::endl;

    std::cout << "====================" << std::endl;
}

void classe::relogio::avancar(){

    segundo += 5;

    if(segundo >= 60){

        segundo -= 60;
        minuto ++;

        if(minuto >= 60){

            minuto -= 60;
            hora++;
            
        }
    }

}

/*
void classe::relogio::imprimirHorario(){
    std::cout << std::endl << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;
    std::cout << hora << ":" << minuto << ":" << segundo << std::endl << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;
}
*/