#include <iostream>

int main()
{
    int num1,num2;

    std::cout << "Informe o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Informe o segundo numero: ";
    std::cin >> num2;

    if(num1 > num2){
        std::cout << num1 << " eh maior" << std::endl;
    }else if(num2 > num1){
        std::cout << num2 << " eh maior" << std::endl;
    }else{
        std::cout << "Sao iguais!!" << std::endl;
    }

    return 0;
}