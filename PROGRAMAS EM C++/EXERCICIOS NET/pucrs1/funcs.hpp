#ifndef funcs_hpp
#define funcs_hpp
#include <iostream>

namespace classe{
    class pessoa{
        private:
            std::string nome;
            int idade;
            float altura;

        public:

            pessoa()
            {}

            void setNome(std::string novo);

            void setIdade(int i);

            void setAltura(float a);
        
            std::string getNome();

            int getIdade();

            float getAltura();
    };
}

#endif