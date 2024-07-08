#define STACK_LENGTH  1000001

#include <iostream> 
#include <cmath>
using namespace std;

int arr[STACK_LENGTH] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, a,b,stack=-1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			cin >> b;
			stack++;
			arr[stack] = b;
			
			break;
		case 2:
			if (stack <0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << arr[stack] << "\n";
				arr[stack] = 0;
				stack--;
			}
			break;
		case 3:
			cout << stack + 1 << "\n";
			break;
		case 4:
			if (stack < 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
			break;
		case 5:
			if (stack < 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << arr[stack] << "\n";
			}
			break;
		}

	}

	return 0;
}