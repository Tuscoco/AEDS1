#ifndef funcs_hpp
#define funcs_hpp
#include <iostream>

namespace classe{

    class televisao{

        private:

            int volume;
            int canal;

        public:

            televisao()
            {
                volume = 50;
                canal = 1;
            }

            void controleVolume(char);
            void controleCanal(char);
            void selecionarCanal(int);
            void imprimirInfo();

    };

}

#endif