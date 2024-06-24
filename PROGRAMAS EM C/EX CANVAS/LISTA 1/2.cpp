#include <iostream>

int main()
{
    int n1,n2,nr;

    std::cout << "Informe dois numeros: ";
    std::cin >> n1;
    std::cin >> n2;

    nr = n1 + n2;

    if(nr >= 10){
        nr += 5;
    }else{
        nr += 7;
    }

    std::cout << nr << std::endl;

    return 0;
}