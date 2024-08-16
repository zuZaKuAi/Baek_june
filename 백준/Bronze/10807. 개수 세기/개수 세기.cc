#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,num,count=0;
	cin >> n;
	int* arr1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	cin >> num;

	sort(arr1, arr1 + n);
	int j = 0;
	while (arr1[j] <= num)
	{
		if (arr1[j] == num)
			count++;
		j++;
	}
	cout << count;

	delete[] arr1;
	
	return  0;
}