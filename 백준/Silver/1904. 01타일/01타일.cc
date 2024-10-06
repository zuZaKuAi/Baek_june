#include <iostream>
using namespace std;

int main() {
    int N, current, MOD = 15746, prev2 = 1, prev1 = 2;
    
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (N == 2) {
        cout << 2 << endl;
        return 0;
    }

    for (int i = 3; i <= N; i++) {
        current = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = current;
    }

    cout << current << endl;

    return 0;
}
