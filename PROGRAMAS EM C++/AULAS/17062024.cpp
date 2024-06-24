#include <iostream>
#include <exception>

class vetorFloat{

    protected:
        float *vet;
        int tamanho;

    public:
        vetorFloat(){
            vet = NULL;
            tamanho = 0;
            std::clog << "Construtor padrao" << std::endl;
        }
        vetorFloat(unsigned int t){
            vet = new float[t];
            tamanho = t;
            std::clog << "Construtor(int " << t << ")" << std::endl;
        }
        ~vetorFloat(){
            delete[] vet;
            tamanho = 0;
            std::clog << "Destrutor" << std::endl;
        }
        void imprimirInfo();
        float& operator[] (int i);

};

void vetorFloat::imprimirInfo(){
    std::cout << "[ ";
    for(int i = 0;i < tamanho; i++){
        std::cout << vet[i] << " ";
    }
    std::cout << " ]";
}

float& vetorFloat::operator[](int i){
    if(i < tamanho){
        return vet[i];
    }else{
        throw "ACESSO INVALIDO";
    }
}

class VFDinamico:public vetorFloat{
    public:
        VFDinamico();
        VFDinamico(int);
};

VFDinamico::VFDinamico():vetorFloat::vetorFloat(){}

VFDinamico::VFDinamico(int t):vetorFloat(t){}

int main()
{
    vetorFloat v1,v2(5);

    std::cout << "Valor de v1: ";
    v1.imprimirInfo();
    std::cout << std::endl;

    for(int i = 0; i <= 4; i++){
        v2[i] = i + 1;
    }

    std::cout << "Valor de v2: ";
    v2.imprimirInfo();
    std::cout << std::endl;

    return 0;
}