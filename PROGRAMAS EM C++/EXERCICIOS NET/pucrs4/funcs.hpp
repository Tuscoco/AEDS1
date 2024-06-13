#ifndef funcs_hpp
#define funcs_hpp

namespace classe{

    class relogio{

        private:
            int hora;
            int minuto;
            int segundo;

        public:

            relogio(){
                hora = 00;
                minuto = 00;
                segundo = 00;
            }

            void setHora(int, int, int);

            void getHora();

            void avancar();

            void imprimirHorario();

    };

}

#endif