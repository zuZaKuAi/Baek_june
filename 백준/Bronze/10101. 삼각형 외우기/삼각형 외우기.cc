#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int ang[3];
	cin >> ang[0] >> ang[1] >> ang[2];
	sort(ang, ang + 3);
	if (ang[0] + ang[1] + ang[2] != 180)
	{
		cout << "Error";
	}
	else
	{
		if (ang[0] == ang[1] || ang[2] == ang[1])
		{
			if (ang[0] == ang[2])
			{
				cout << "Equilateral";
			}
			else
			{
				cout << "Isosceles";
			}
		}
		else
		{
			cout << "Scalene";
		}
	}
	
	return  0;
}