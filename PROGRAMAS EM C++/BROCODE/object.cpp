#include <iostream>
#include "funcs.hpp"

class humano{
    public:
        std::string nome;
        int idade;
        char sexo;
        std::string cargo;


        void comer();
        void beber();
        void dormir();
};

void humano::comer(){
    come();
}

void humano::beber(){
    bebe();
}

void humano::dormir(){
    dorme();
}

int main(){

    humano pessoa1;
    humano pessoa2;

    pessoa1.nome = "Tusca";
    pessoa1.cargo = "Tuscoqueiro";
    pessoa1.idade = 18;
    pessoa1.sexo = 'M';

    system("cls");

    std::cout << pessoa1.nome << std::endl;
    std::cout << pessoa1.cargo << std::endl;
    std::cout << pessoa1.idade << std::endl;
    std::cout << pessoa1.sexo << std::endl;

    pessoa1.beber();
    pessoa1.comer();
    pessoa1.dormir();

    return 0;
}