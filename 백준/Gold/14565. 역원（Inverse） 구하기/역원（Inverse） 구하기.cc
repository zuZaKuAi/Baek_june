#include <iostream>
using namespace std;

long long extended_gcd(long long a, long long b, long long& x, long long& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long gcd = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

pair<long long, long long> find_modular_inverses(long long N, long long A) {
    long long additive_inverse = (N - A) % N;

    long long x, y;
    long long gcd = extended_gcd(A, N, x, y);
    long long multiplicative_inverse;
    if (gcd != 1) {
        multiplicative_inverse = -1;  
    }
    else {
        multiplicative_inverse = (x % N + N) % N;  
    }

    return { additive_inverse, multiplicative_inverse };
}

int main() {
    long long N, A;
    cin >> N >> A;

    pair<long long, long long> inverses = find_modular_inverses(N, A);

    cout << inverses.first << " " << inverses.second << endl;

    return 0;
}
