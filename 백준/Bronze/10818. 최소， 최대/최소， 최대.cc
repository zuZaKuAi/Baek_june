#include <iostream> 
using namespace std;

int main() {
	int n, temp, low, high, insert;
	cin >> n;
	if (n < 2) 
	{
		cin >> insert;
		low = insert;
		high = insert;
	}
	else
	{
		cin >> low >> high;
		if(low > high)
		{
			temp = low;
			low = high;
			high = temp;
		}
		for (int i = 2; i < n; i++)
		{
			cin >> insert;
			if (insert < low)
				low = insert;
			if (insert > high)
				high = insert;
		}
	}
	cout << low << " " << high;

	return 0;
}