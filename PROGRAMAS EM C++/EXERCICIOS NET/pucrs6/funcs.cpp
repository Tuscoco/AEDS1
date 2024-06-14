#include "funcs.hpp"
#include <iostream>

void classe::televisao::controleVolume(char c){
    if(volume == 100){
        std::cout << "Volume Maximo!!!" << std::endl;
    }else{
        if(c == '+'){
            volume += 5;
        }else if(c == '-'){
            volume -= 5;
        }else{
            std::cout << "Invalido" << std::endl;
        }
    }
}

void classe::televisao::controleCanal(char c){
    if(c == '+'){
        if(canal == 10){
            std::cout << "Ultimo canal" << std::endl;
        }else{
            canal++;
        }
    }else if(c == '-'){
        if(canal == 1){
            std::cout << "Primeiro canal" << std::endl;
        }else{
            canal--;
        }
    }
}

void classe::televisao::selecionarCanal(int c){
    if(c > 10 || c < 1){
        std::cout << "Canal nao existente" << std::endl;
    }else{
        canal = c;
    }
}

void classe::televisao::imprimirInfo(){

    system("cls");

    std::cout << "====================" << std::endl << std::endl;
    
    std::cout << "Canal: " << canal << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    std::cout << std::endl << "====================" << std::endl;

}