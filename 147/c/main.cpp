#include <iostream>
#include <cmath>

int count(int bits) {
    if (bits == 0) return 0;
    return count(bits >> 1) + (bits & 1);
}

int main() {
    int N;
    int A[16];
    int x[16][16];
    int y[16][16];

    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> A[i];
        for (int j = 1; j <= A[i]; j++) {
            std::cin >> x[i][j] >> y[i][j];
        }
    }

    int result = 0;
    /*
        正直者を決め打ちする．N人いれば組み合わせは2^N通りなので，N桁の二進数で表せる．
        8人いる中で1, 3, 7番目の人が正直者だと仮定すると，
        01000101
        となり，これは十進数で69．
        これをint型のbitsを使って見ていく
    */
    for (int bits = 1; bits < (1 << N); bits++) {
        bool ok = true;
        for (int i = 1; i <= N; i++) {
            // 正直者同士で矛盾がないか探せばよいので，それ以外を対象とした検証は飛ばす．
            if ( !( bits & ( 1 << (i-1) ) ) ) continue;
            for (int j = 1; j <= A[i]; j++) {
                /*
                    ( bits >> (x[i][j]-1) ) & 1
                    は，bitsにおいてx[i][j]番目の人を正直者としていた場合，1を表し，嘘つきとしていた場合，0を表す

                    一方，y[i][j]はx[i][j]番目の人が正直者なら1，そうでないなら0を表すので，

                    矛盾が生じるのは
                    0 ^ 1   正直者だと仮定した人(Aさん)が，嘘つきと仮定した人(Bさん)のことを正直者だと証言してしまっている
                    1 ^ 0   正直者だと仮定した人(Aさん)が，正直者だと仮定した(Bさん)のことを嘘つきだと証言してしまっている

                    の時である
                */
                if ( ( ((bits >> (x[i][j]-1)) & 1) ^ y[i][j] ) ) ok = false;
            }
        }
        if (ok) result = std::max(result, count(bits));
    }
    if (0 ^ 1) std::cout << "hi" << std::endl;

    std::cout << result << std::endl;
    return 0;
}