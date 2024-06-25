#ifndef 4_hpp
#define 4_hpp
#include <iostream>

namespace banco{

//////////////////////////////////////////////////////////////////////

    class conta{
        private:
            int numero;
            float saldo;
        public:
            std::string PIX;

            conta(int);
            float saldo();
            int getConta();
            void sacar(float);
    };

    class corrente:public conta{};

    class poupanca:public conta{
        private:
            int aniversario;
            float valor;
        public:
            int getAniversario();
            int aplicaJuros();
    };

    class especial:public conta{
        public:
            float limite;

            especial(float);
    };

////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////

    class pessoa{
        private:
            std::string nome;
        public:
            conta contas;

            pessoa(std::string,std::string);
            std::string getNome();
    };

    class fisica:public pessoa{
        private:
            std::string cpf;
        public:
            fisica(std::string);
            std::string getCpf();
    };

    class juridica:public pessoa{
        private:
            std::string cnpj;
        public:
            juridica(std::string);
            std::string getCnpj();
    };

////////////////////////////////////////////////////////////////////

    class historico{
        private:
            int numero_conta;
            int operacao;
            float valor;
        public:
            void operar(conta,int,float);
    };

//////////////////////////////////////////////////////////////////////

}

#endif