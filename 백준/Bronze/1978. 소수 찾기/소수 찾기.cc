#include <iostream> 
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int incount, n, torf, sum;
	sum = 0;
	int k = 0;
	cin >> n;
	while (1)
	{
		if (k == n)
			break;
		torf = 0;
		cin >> incount;

		if (incount == 1)
			sum++;
		for (int i = 2; i < incount; i++)
		{
			if (incount % i == 0)
			{
				sum++;
				break;
			}

		}
		k++;
	}
	cout << n - sum;
	return 0;
}