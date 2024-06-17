#include <iostream>

int main()
{
    int n;
    float t = 0.0;

    std::cout << "Informe um numero inteiro" << std::endl;
    std::cin >> n;

    for(int i = 0;i < n;i++)
    {
        std::cout << "Informe o " << i+1 << " numero real" << std::endl;
        float f;
        std::cin >> f;
        t += f;
    }
    
    std::system("cls");

    std::cout << t;

    return 0;
}