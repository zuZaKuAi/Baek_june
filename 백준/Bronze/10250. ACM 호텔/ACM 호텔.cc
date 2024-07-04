#include <iostream> 
using namespace std;

int main() {
	int t, n, h, w;
	int stack = 0;
	int k = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		cout << ((n % h == 0) ? h*100 :(n % h * 100)) + ((n % h == 0) ? n / h : (n / h + 1)) << endl;
	}
	return 0;
}