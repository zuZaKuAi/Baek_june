#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, t;
	int cnt[10001] = {};
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		cnt[t] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= cnt[i]; j++)
		{
			cout << i << "\n";
		}
	}
}