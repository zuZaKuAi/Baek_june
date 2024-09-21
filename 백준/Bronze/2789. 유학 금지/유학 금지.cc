#include<iostream>
using namespace std;

int main()
{
	int n = 101;
	char cam[10] = "CAMBRIDGE";
	char* arr = new char[n];
	cin >> arr;
	int in = 0;
	while (arr[in] != '\0')
	{
		int tof = 0;
		for (int i = 0; i < 10; i++)
		{
			if (arr[in] == cam[i])
			{
				tof = 1;
				break;
			}

		}
		if (tof == 0)
		{
			cout << arr[in];
		}
		in++;
	}

	return 0;
}
