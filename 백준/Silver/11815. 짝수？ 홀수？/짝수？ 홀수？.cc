#include <iostream>
#include <cmath>
using namespace std;
int main() {

	long long n, a, a1 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a1 = 0;
		cin >> a;
		
		if ((long long)sqrtl(a)== sqrtl(a))
		{
			a1=1;
		}
		cout << a1 << ' ';
	}
}
