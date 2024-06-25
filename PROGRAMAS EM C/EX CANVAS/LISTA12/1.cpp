#include <iostream>
#include <exception>

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