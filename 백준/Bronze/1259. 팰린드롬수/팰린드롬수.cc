#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n, end, tf = 1;
	string num;
	cin >> num;
	
	while (num.front() != '0')
	{
		n = num.length();
		end = n-1;
		tf = 1;
		for (int i = 0; i < n / 2; i++)
		{
			if (num.at(i) != num.at(end))
			{
				tf = 0;
				break;
			}
			end--;
		}
		if (tf == 1)
		{
			cout << "yes\n";
		}
		else if (tf == 0)
		{
			cout << "no\n";
		}
		cin >> num;
	}
	return 0;

}