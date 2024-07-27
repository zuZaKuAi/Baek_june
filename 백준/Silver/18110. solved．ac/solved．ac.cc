#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n, a, x;
	double sum = 0;
	cin >> n;
	vector<int> p;

	if (n == 0) {
		cout << 0 << "\n";

	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			p.push_back(x);
		}
		sort(p.begin(), p.end());

		a = round(n * 0.15);

		for (int i = a; i < n - a; i++)
		{
			sum += p[i];
		}
		sum =round(sum/ (p.size() - 2* a));
		cout << sum << "\n";

		return 0;
	}
}