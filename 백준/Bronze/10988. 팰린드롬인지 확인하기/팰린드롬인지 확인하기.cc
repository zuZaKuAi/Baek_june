#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n, end, tf = 1;
	string arr;
	cin >> arr;
	n = arr.length();
	end = n - 1;
	tf = 1;
	for (int i = 0; i < n / 2; i++)
	{
		if (arr.at(i) != arr.at(end))
		{
			tf = 0;
			break;
		}
		end--;
	}
	cout << tf;


	return 0;

}