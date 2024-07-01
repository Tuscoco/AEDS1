#include <iostream>
#include <exception>

int main()
{   
    try{
        throw std::exception("Levantado por std::exception");
    }

    catch(std::exception e){
        std::cout << e.what() << std::endl;
    }

    catch(...){
        std::cout << "Erro desconhecido" << std::endl;
    }
    return 0;
}