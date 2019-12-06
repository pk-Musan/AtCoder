#include <iostream>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <vector>

int getCombo(std::vector<int> v, int n, int mod) {
    int j = 0;
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (v[i] != 2*j + 1) return 0;
            if (i % 2 == 1) j++;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (v[i] != 2*j) return 0;
            if (i % 2 == 0) j++;
        }
    }

    int result = 1;
    for (int i = 0; i < n/2; i++) {
        result = result*2 % mod;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int mod = std::pow(10, 9) + 7;
    printf("%d\n", getCombo(v, n, mod));
}