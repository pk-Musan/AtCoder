#include <iostream>

int main() {
    int a, b, c;    

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    for (int i = 0; i < b; i++) {
        if ( a*i % b == c ) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}