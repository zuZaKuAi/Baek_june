#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	int melody[8], temp,temp2, cases;
	for (int i = 0; i < 8; i++)
	{
		cin >> melody[i];
	}
	if(melody[0]==1)
	{ 
		cases = 2;
		for (int i = 0; i < 7; i++)
		{
			temp = melody[i + 1] - melody[i];
			if (temp < 0 && temp < -1)
			{
				cases = 1;
				break;
			}
			else if (temp > 1)
			{
				cases = 1;
				break;
			}
		}
	}
	else if(melody[0]==8)
	{
		cases = 3;
		for (int i = 0; i < 7; i++)
		{
			temp = melody[i + 1] - melody[i];
			if (temp < 0 && temp < -1)
			{
				cases = 1;
				break;
			}
			else if (temp > 1)
			{
				cases = 1;
				break;
			}
		}
	}
	else
	{
		cases = 1;
	}
	if (cases == 1)
		cout << "mixed";
	else if (cases == 2)
		cout << "ascending";
	else
		cout << "descending";
	return 0;
}