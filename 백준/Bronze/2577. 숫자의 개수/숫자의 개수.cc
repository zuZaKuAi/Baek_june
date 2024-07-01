#include <iostream> 
using namespace std;

int main() {
	int a, b, c, sum;
	int answer[10] = { 0, };

	cin >> a;
	cin >> b;
	cin >> c;
	sum = a * b * c;

	int t = 10;

	while (t < sum)
	{
		answer[sum % t]++;
		sum /= 10;

	}
	answer[sum]++;

	for (int i = 0; i < 10; i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}