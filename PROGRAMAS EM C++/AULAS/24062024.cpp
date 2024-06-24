#include <iostream>

class vetorFloat{
    private:
        int tamanho;
        float *vetor;

    public:
        vetorFloat();
        vetorFloat(int);
        ~vetorFloat();
        void imprimirInfo();
};

void vetorFloat::imprimirInfo(){
    std::cout << "[ ";
    for(int i = 0;i < tamanho; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << " ]";
}