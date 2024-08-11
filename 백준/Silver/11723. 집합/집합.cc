#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout.tie(NULL);
	int m=0;
	short inp=0;
	short num[22]{0,};
	string arr ;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> arr;
		if (arr == "add")
		{
			cin >> inp;
			num[inp] = 1;
		}
		else if (arr == "remove")
		{
			cin >> inp;
			num[inp] = 0;
		}
		else if (arr == "check")
		{
			cin >> inp;
			if(num[inp] == 1)
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if (arr == "toggle")
		{
			cin >> inp;
			if (num[inp] == 1)
			{
				num[inp] = 0;
			}
			else
			{
				num[inp] = 1;
			}
		}
		else if (arr == "all")
		{
			for (int j = 1; j < 21; j++)
			{
				num[j] = 1;
			}
		}
		else if (arr == "empty")
			for (int j = 1; j < 21; j++)
			{
				num[j] = 0;
			}

	}

	return 0;

}