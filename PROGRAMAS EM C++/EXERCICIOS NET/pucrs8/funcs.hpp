#ifndef funcs_hpp
#define funcs_hpp

namespace classe{

    class carro{

        private:
            int gasolina;
            float distancia;

        public:
            carro()
            {
                gasolina = 0;
                distancia = 0;
            }

            void abastecer();
            void andar();

            void imprimirInfo();
            
    };

}

#endif