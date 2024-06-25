#include <iostream>
#include <exception>
#include <stdexcept>
#include <iomanip>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class data{

    protected:
        int ano,mes,dia;

    public:
        data();
        data(int,int,int);
        int getAno();
        int getMes();
        int getDia();
        void adicionarDias(int);
        data operator+(int d);
        int diferenca(data);
        int operator-(data);
        int contarDias();

};

data::data(){
    ano = 0000;
    mes = 00;
    dia = 00;
}

data::data(int a, int m, int d){

    if(!dataValida(a,m,d)){
        throw std::exception();
    }

    ano = a;
    mes = m;
    dia = d;
}

bool dataValida(int a, int m, int d){
    if(m < 1 || m > 12){
        return false;
    }else if(d < 1 || d > meses(a,m)){
        return false;
    }
}

int meses(int a, int m){

    if(m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    }

    if(m == 2){
        if(verificarBisexto(a)){
            return 29;
        }else{
            return 28;
        }
    }

    return 31;
}

bool verificarBisexto(int a){
    if((a % 4 == 0 && a % 100 != 0) || (a % 400)){
        return true;
    }else{
        return false;
    }
}

int data::getAno(){
    return ano;
}

int data::getMes(){
    return mes;
}

int data::getDia(){
    return dia;
}

void data::adicionarDias(int d){

    if(d < 0){
        throw std::exception();
    }

    dia += d;

    if(dia > meses(ano,mes)){
        dia -= meses(ano,mes);

        if(mes+1 > 12){
            mes = 1;
            ano++;
        }
    }

}

data data::operator+(int d){
    data result = *this;

    result.adicionarDias(d);

    return result;
}

int data::diferenca(data dt){
    return contarDias() - dt.contarDias();
}

int data::operator-(data dt){
    return diferenca(dt);
}

int data::contarDias(){
    int total = 0;

    for(int i = 1; i < ano; i++){
        if(verificarBisexto(ano)){
            total += 366;
        }else{
            total += 365;
        }
    }

    for(int i = 1; i < mes; i++){
        total += meses(ano,mes);
    }

    total += dia;

    return total;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////


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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class tempo:public data,public horario{
    protected:
        data d;
        horario h;
    public:
        tempo(data,horario);
        horario diferencaDH(tempo);
        horario operator-(tempo);
        friend std::ostream& operator<<(std::ostream &out, const tempo &dh);
        int contar();

};

tempo::tempo(data d, horario h){
    ano = d.getAno();
    mes = d.getMes();
    dia = d.getDia();

    hora = h.getHora();
    minuto = h.getMinuto();
    segundo = h.getSegundo();
}

horario tempo::diferencaDH(tempo dh){
    int totalSegundos1 = dh.contar();
    int totalSegundos2 = dh.contar();

    int diferencaSegundos = abs(totalSegundos1 - totalSegundos2);

    int horas = diferencaSegundos / 3600;
    diferencaSegundos %= 3600;
    int minutos = diferencaSegundos / 60;
    int segundos = diferencaSegundos % 60;

    return horario(horas, minutos, segundos);
}

horario tempo::operator-(tempo dh){
    return diferencaDH(dh);
}

std::ostream& operator<<(std::ostream &out, const tempo &dh) {
    out << dh.ano << "/"
        << std::setw(2) << std::setfill('0') << dh.mes << "/"
        << std::setw(2) << std::setfill('0') << dh.dia << "-"
        << std::setw(2) << std::setfill('0') << dh.hora << ":"
        << std::setw(2) << std::setfill('0') << dh.minuto << ":"
        << std::setw(2) << std::setfill('0') << dh.segundo;
    return out;
}

int tempo::contar(){
    int totalSegundos = this->contar() * 86400;
    totalSegundos += hora * 3600;
    totalSegundos += minuto * 60;
    totalSegundos += segundo;
    return totalSegundos;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////