#include <iostream>
using namespace std;

int main() {
	char* stack_ = new char[51];
	int n,stack=-1;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int lo=0;
		stack = -1;
		cin >> stack_;
		while (stack >= -1)
		{
			if (stack_[lo] == '(')
			{
				stack++;
			}
			else if (stack_[lo] == ')')
			{
				stack--;
				if (stack < -1)
					break;
			}
			else
				break;

			lo++;
		}
		if (stack == -1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	delete stack_;
}