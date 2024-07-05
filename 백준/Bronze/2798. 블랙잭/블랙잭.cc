#include <iostream> 
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, sum = 0, temp = 0;
	cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n, compare);


	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				temp = arr[i] + arr[j] + arr[k];
				if ((temp <= m) && (temp > sum))
				{
					sum = temp;
				}

			}
		}
	}

	cout << sum;
	return 0;
}