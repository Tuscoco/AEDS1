#include "funcs.hpp"
#include <iostream>
#include <cmath>
#define PI 3.14

void classe::circulo::calcularArea(){
    area = PI * pow(raio,2);
}

void classe::circulo::calcularCircunferencia(){
    circunferencia = 2 * PI * raio;
}

void classe::circulo::setRaio(float r){
    raio = r;
}

void classe::circulo::aumentarRaio(float p){
    float per = p/100;
    float aumento = raio * per;

    raio += aumento;
}

void classe::circulo::setCentro(int xi, int yi){
    x = xi;
    y = yi;
}

void classe::circulo::imprimirInfo(){

    calcularArea();
    calcularCircunferencia();

    system("cls");

    std::cout << "===========================" << std::endl;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Circunferencia: " << circunferencia << std::endl;
    std::cout << "Coordenadas Centro: (" << x << "," << y << ")" << std::endl;

    std::cout << "===========================" << std::endl;
}