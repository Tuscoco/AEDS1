#include <iostream>

int main()
{
    int mes;

    std::cout << "Digite o numero do mes(1-12): ";
    std::cin >> mes;

    switch (mes)
    {
    case 1:
        std::cout << "Janeiro";
        break;

    case 2:
        std::cout << "Fevereiro";
        break;

    case 3:
        std::cout << "Marco";
        break;

    case 4:
        std::cout << "Abril";
        break;

    case 5:
        std::cout << "Maio";
        break;

    case 6:
        std::cout << "Junho";
        break;

    case 7:
        std::cout << "Julho";
        break;

    case 8:
        std::cout << "Agosto";
        break;

    case 9:
        std::cout << "Setembro";
        break;

    case 10:
        std::cout << "Outubro";
        break;

    case 11:
        std::cout << "Novembro";
        break;

    case 12:
        std::cout << "Dezembro";
        break;

    default:
        std::cout << "Nao eh um mes";
        break;
    }

    return 0;
}