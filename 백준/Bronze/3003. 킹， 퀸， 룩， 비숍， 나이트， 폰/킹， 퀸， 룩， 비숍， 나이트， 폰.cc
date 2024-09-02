#include <iostream>
using namespace std;

int main() {
	int K, Q, R, B, Kn, P;
		cin >> K >> Q >> R >> B >> Kn >> P;
		cout << 1 - K << ' ' << 1 - Q << ' ' << 2 - R << ' ' << 2 - B << ' ' << 2 - Kn << ' ' << 8 - P;
}