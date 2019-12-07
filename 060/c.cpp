#include <iostream>
#include <vector>

int main() {
    int n, t;

    std::cin >> n;
    std::cin >> t;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int result = 0;
    for (int i = 0; i < n-1; i++) {
        if (v[i+1] - v[i] >= t) result += t;
        else result += v[i+1] - v[i];
    }
    result += t;

    printf("%d\n", result);

    return 0;
}