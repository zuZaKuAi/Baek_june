#include <iostream> 
using namespace std;


int main() {

	int n,num=1, count = 0;
	
	cin >> n;
	if (n == 1)
	{
		count++;
	}
	else
	{
		for (int i = 0; num < n; i++)
		{
			num = num + i * 6;
			count++;
		}
	}
	cout << count;



return 0;
}