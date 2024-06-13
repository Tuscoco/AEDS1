#ifndef funcs_hpp
#define funcs_hpp
#include <iostream>

namespace classe{

    class elevador{
        private:
            int andar;
            int totalAndares;
            int capacidade;
            int pessoas;
            
        public:
            elevador(){
                andar = 0;
                totalAndares = 10;
                capacidade = 10;
                pessoas = 0;
            }

            void entra();
            void sai();
            void sobe();
            void desce();
            
            void imprimirInfo();

            //int getPessoas();
            //int getCapacidade();
            //int getAndar();
    };

}

#endif