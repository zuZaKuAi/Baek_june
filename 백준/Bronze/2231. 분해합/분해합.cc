#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, answer, has_answer = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int k = 0;
		int temp = i;
		answer = i;
		while (i > 0)
		{
			temp = temp + i % 10;
			k++;
			i = i / 10;
		}
		if (temp == n)
		{
			has_answer = 1;
			break;
		}
		i = answer;
	}
	if (has_answer == 1)
	{
		cout << answer;
	}
	else if (has_answer == 0)
	{
		cout << 0;
	}
	return 0;
}