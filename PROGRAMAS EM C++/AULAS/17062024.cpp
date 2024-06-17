#include <iostream>

class vetorFloat{

    public:
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
            delete vet;
            tamanho = 0;
            std::clog << "Destrutor" << std::endl;
        }

};

int main()
{
    vetorFloat v1(5),v2;

    std::cout << "Valor de v1:[ ";
    for(int i=0;i<v1.tamanho;i++)
    {
        std::cout << v1.vet[i] << " ";
    }
    std::cout << " ]" << std::endl;

    std::cout << "Valor de v2:[ ";
    for(int i=0;i<v2.tamanho;i++)
    {
        std::cout << v2.vet[i] << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}