#include <iostream>
using namespace std;

int main() {
	int t,r;
	char arr[21];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int size = 0,loca=0;
		cin >> r;
		cin >> arr;
		
		while (arr[loca] != '\0')
		{
			size++;
			loca++;
		}
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << arr[j];
			}
		}
		cout << "\n";
	}
	
	return  0;
}