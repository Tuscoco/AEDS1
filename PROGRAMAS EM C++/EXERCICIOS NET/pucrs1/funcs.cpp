#include "funcs.hpp"
#include <iostream>

void classe::pessoa::setNome(std::string novo){
    if(novo.length() > 2)
        nome = novo;
    else
        std::cout << "Erro" << std::endl;
}

void classe::pessoa::setIdade(int novaI){
    if(novaI >= 0)
        idade = novaI;
    else
        std::cout << "Erro" << std::endl;
}

void classe::pessoa::setAltura(float novaA){
    if(novaA > 0)
        altura = novaA;
    else
        std::cout << "Erro" << std::endl;
}

std::string classe::pessoa::getNome(){
    return nome;
}

int classe::pessoa::getIdade(){
    return idade;
}

float classe::pessoa::getAltura(){
    return altura;
}