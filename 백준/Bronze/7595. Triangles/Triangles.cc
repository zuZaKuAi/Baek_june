#include <iostream> 
using namespace std;

int main() {
	long long n;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		else {
			for (int i = 1; i <= n; i++)
			{
				for (int j = 0; j < i; j++)
				{
					cout << '*';
				}
				cout << endl;
			}
		}
		
	}
	return 0;
}