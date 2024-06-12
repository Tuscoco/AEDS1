#include <iostream>

int main()
{
    char op;
    double n1,n2,r=0;

    std::cout << "***************Calculadora***************\n";

    std::cout << "Qual operacao voce quer ralizar(+ - * /): ";
    std::cin >> op;

    std::cout << "Informe os dois numeros: ";
    std:: cin >> n1;
    std:: cin >> n2;

    switch(op)
    {
        case '+':
            r = n1 + n2;
            break;
        
        case '-':
            r = n1 - n2;
            break;

        case '*':
            r = n1 * n2;
            break;

        case '/':
            r = n1 / n2;
            break;

        default:
            std::cout << "Operacao invalida!!!";
            break;
    }

    std::cout << "O resultado eh: " << r << '\n';

    std::cout << "*****************************************\n";

    return 0;
}