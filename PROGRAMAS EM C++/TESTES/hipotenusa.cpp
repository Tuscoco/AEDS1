#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double c1,c2,h=0;

    cout << "Informe os catetos:\n";
    cin >> c1;
    cin >> c2;

    h = sqrt(pow(c1,2) + pow(c2,2));

    cout << "A hipotenusa vale: " << h << '\n';

    return 0;
}