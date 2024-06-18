#include "funcs.hpp"
#include <iostream>

void classe::carro::imprimirInfo(){

    std::system("cls");
    std::cout << "==========================================" << std::endl;
    std::cout << "Tanque: " << gasolina << " litros de gasolina" << std::endl;
    std::cout << "Distancia percorrida: " << distancia << "KM" << std::endl;
    std::cout << "==========================================" << std::endl;

}

void classe::carro::abastecer(){

    int g;

    std::cout << "Quantos litros?" << std::endl;
    std::cin >> g;

    if((gasolina + g) > 50){
        std::system("cls");
        std::cout << "Quantidade de gasolina nao suportada!!!" << std::endl;
    }else{
        std::system("cls");
        gasolina += g;
    }

}

void classe::carro::andar(){

    float d;

    std::cout << "Quantos KM?" << std::endl;
    std::cin >> d;

    if(d > (gasolina * 15)){
        std::system("cls");
        std::cout << "Gasolina insuficiente!!!" << std::endl;
    }else{
        std::system("cls");
        if(gasolina - (d/15) < 0){
            std::cout << "Gasolina insuficiente!!!" << std::endl;
        }else{
            gasolina -= (d/15);
            distancia += d;
        }
    }

}