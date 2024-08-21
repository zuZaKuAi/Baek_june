#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int count=1,tmp=0;
	int arr1[11];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
		arr1[i] %= 42;
	}
	sort(arr1, arr1 + 10);
	tmp = arr1[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] != tmp)
		{
			tmp = arr1[i];
			count++;
		}
	}
	cout << count;
	return  0;
}