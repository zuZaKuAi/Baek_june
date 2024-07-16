#include <iostream> 
using namespace std;

int main() {
	long long n,num=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
	}
	cout << num;
return 0;
}