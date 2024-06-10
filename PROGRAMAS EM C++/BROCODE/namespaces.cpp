#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    using namespace first;
    using namespace std; //Ao utilizar isso, não é mais necessário usar o "std" para declarar strings e para utilizar o "cout", porém, pode haver conflitos
    using std::cout;
    using std::string;

    string name = "Lucas";

    cout << x << '\n';
    cout << x << '\n';
    cout << x << '\n';

    return 0;
}

//Basicamente, namespaces servem para evitar conflitos de nome