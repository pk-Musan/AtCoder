#include <iostream>
#include <vector>

long long N;
long long mod = 1000000007;
long long zero_bit[60];
long long one_bit[60];

int main() {
    std::cin >> N;

    std::vector<long long> A(N);
    for (long long i = 0; i < N; i++) {
        std::cin >> A[i];
        for (long long bit = 0; bit < 60; bit++) {
            ((A[i] >> bit) & 1) ? one_bit[bit]++ : zero_bit[bit]++;
        }
    }

    long long result = 0;
    for (long long bit = 0; bit < 60; bit++) {
        long long tmp = 1;
        tmp *= (1LL << bit) % mod;
        tmp %= mod;
        tmp *= one_bit[bit] % mod;
        tmp %= mod;
        tmp *= zero_bit[bit] % mod;
        tmp %= mod;
        result = (result + tmp) % mod;
    }
    std::cout << result << std::endl;
    return 0;
}
