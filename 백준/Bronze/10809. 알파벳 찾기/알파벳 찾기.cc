#include <iostream>
using namespace std;

int main() {
	int n=0;
	char arr1[101];
	int arr2[27];
	for (int i = 0; i < 26; i++)
	{
		arr2[i]=-1;
	}
	
	cin >> arr1;
	while (arr1[n] != '\0')
	{
		if (arr2[(int)arr1[n] - (int)'a'] == -1)
			arr2[(int)arr1[n] - (int)'a'] = n;
		n++;
	}
	n = 0;
	for (int i = 0; i < 26; i++)
	{
		cout<<arr2[i]<<" ";
	}
}