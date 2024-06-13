#ifndef funcs_hpp
#define funcs_hpp


namespace classe{

    class circulo{

        private:
            float raio;
            int x,y;
            float area;
            float circunferencia;

        public:

            circulo()
            {
                raio = 0;
                x = 0;
                y = 0;
                area = 0.0;
                circunferencia = 0.0;
            }

            void calcularArea();
            void calcularCircunferencia();
            void setRaio(float);
            void aumentarRaio(float);
            void setCentro(int, int);

            void imprimirInfo();
            
    };

}


#endif