#include <iostream>

int main() {
    int a1, a2, a3;
    std::cin >> a1 >> a2 >> a3;

    std::string result = (a1 + a2 + a3 <= 21) ? "win" : "bust";
    std::cout << result << std::endl;
    return 0;
}