#include <iostream>

int main() {
    std::string line;
    std::cin >> line;

    int line_length = (int)line.size();
    int result = 0;
    for (int i = 0; i < line_length/2; i++) {
        if (line[i] != line[line_length-1-i]) result++;
    }
    std::cout << result << std::endl;
    return 0;
}

