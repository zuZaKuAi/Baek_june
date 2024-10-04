#include<iostream>

using namespace::std;

int main() {
	int n,tmp=0,i=0;
	while (1) {
		cin >> n;
		if (n == 0) break;
		while (n / 10 > 0) {
			tmp = 0;
			while (n / 10 > 0) {
				tmp += n % 10;
				n /= 10;
			}
			tmp += n;
			n = tmp;
		}
		cout << n << "\n";
	}
}