#ifndef funcs_hpp
#define funcs_hpp

namespace classe{

    class arCondicionado{

        private:

            float tempEx;
            float tempIn;
            float potencia;

        public:

            arCondicionado(){
                tempEx = 31.0;
                tempIn = 31.0;
                potencia = 0;
            }
            arCondicionado(int){
                tempEx = 25.0;
                tempIn = 25.0;
                potencia = 0;
            }

            void selecionarPotencia(float);
            void imprimirInfo();

    };

}

#endif