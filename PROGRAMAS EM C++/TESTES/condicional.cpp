#include <iostream>

int main()
{
    int age;

    std::cout << "Informe sua idade: ";
    std::cin >> age;

    if(age < 16){
        std::cout << "Voce nao pode votar!";
    }else if(age >= 16 && age < 18){
        std::cout << "Voce pode votar, mas nao eh obrigatorio!";
    }else if(age >= 18 && age <= 60){
        std::cout << "Voce eh abrigado a votar!";
    }else if(age > 60){
        std::cout << "Voce pode votar, mas nao eh obrigatorio!";
    }

    return 0;
}