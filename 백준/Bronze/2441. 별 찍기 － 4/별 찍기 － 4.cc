#include <iostream> 
using namespace std;

int main() {
	int n, i;
	i = 1;
	cin >> n;
	while (i <= n)
	{
		for (int j = 1; j <= i-1; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
		i++;
	}

	return 0;
}