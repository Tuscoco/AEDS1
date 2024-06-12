#include <iostream>

class aluno1{
    public:
        std::string nome;
        int idade;
        float nota;
};

class aluno2{
    private:
        std::string nome;
        int idade;
        float nota;
    
    public:
        aluno2()
        {}

        void setNome(std::string);
};

void aluno2::setNome(std::string novo){
    if(novo.length() > 2)
        nome = novo;
    else
        std::cout << "ERRO!" << std::endl;
}

int main()
{
    aluno1 a1;
    aluno2 a2;
    std::string n,nn;

    std::cout << "Informe dois nomes: ";
    std::getline(std::cin,n);
    std::getline(std::cin,nn);

    a1.nome = n;
    a2.setNome(nn);

    std::cout << n << std::endl;
    std::cout << nn << std::endl;

    return 0;
}