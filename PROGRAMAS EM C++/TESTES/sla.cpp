#include <iostream>
 
int main() {
    
    int n;
    int i=1;
    
    std::cin >> n;
    
    while(i <= 10)
    {
        std::cout << i << " x " << n << " = " << i*n << '\n';
        i++;
    }
 
    return 0;
}