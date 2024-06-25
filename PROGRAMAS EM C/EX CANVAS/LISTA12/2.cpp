#include <iostream>

class horario{
    protected:
        int hora,minuto,segundo;
    public:
        horario();
        horario(int,int,int);
        int getHora();
        int getMinuto();
        int getSegundo();
        void acrescentar(horario);
        horario operator+(horario);
        horario diferenca(horario);
        horario operator-(horario);
};

horario::horario(){
    hora = 00;
    minuto = 00;
    segundo = 00;
}

horario::horario(int h, int m, int s){
    if((h >= 0 && h <24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hora = h;
        minuto = m;
        segundo = s;
    }else{
        std::cout << "Horario invalido!" << std::endl;
    }
}

int horario::getHora(){
    return hora;
}

int horario::getMinuto(){
    return minuto;
}

int horario::getSegundo(){
    return segundo;
}

void horario::acrescentar(horario h){

    segundo += h.segundo;

    if(segundo > 60){
        minuto += segundo / 60;
        segundo %= 60;
    }

    minuto += h.minuto;

    if(minuto > 60){
        hora += minuto / 60;
        minuto %= 60;
    }

    hora += h.hora;
}

horario horario::operator+(horario h){
    horario result = *this;

    result.acrescentar(h);

    return result;
}

horario horario::diferenca(horario h){
    int h1;
    int m1;
    int s1;

    h1 = hora - h.hora;
    m1 = minuto - h.minuto;
    s1 = segundo - h.segundo;

    return horario(h1,m1,s1);
}

horario horario::operator-(horario h){
    return diferenca(h);
}