#include "funcs.hpp"
#include <iostream>

void classe::elevador::entra(){
    if(capacidade == 0){
        std::cout << "Elevador lotado!!!" << std::endl;
        return;
    }else{
        capacidade--;
        pessoas++;
    }
}

void classe::elevador::sai(){
    if(capacidade == 10){
        std::cout << "Elevador vazio!!!" << std::endl;
        return;
    }else{
        capacidade++;
        pessoas--;
    }
}

void classe::elevador::sobe(){
    if(andar == totalAndares){
        std::cout << "Esta no ultimo andar!!!" << std::endl;
        return;
    }else{
        andar++;
    }
}

void classe::elevador::desce(){
    if(andar == 0){
        std::cout << "Esta no terreo!!!" << std::endl;
        return;
    }else{
        andar--;
    }
}

void classe::elevador::imprimirInfo(){
    std::system("cls");
    std::cout << "==============================" << std::endl;

    std::cout << "Pessoas: " << pessoas << std::endl;
    std::cout << "Capacidade: " << capacidade << std::endl;
    std::cout << "Andar: " << andar << std::endl;

    std::cout << "==============================" << std::endl;
}