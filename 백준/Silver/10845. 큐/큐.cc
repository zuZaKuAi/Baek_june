#define STACK_LENGTH  100001

#include <iostream> 
#include <cmath>
using namespace std;

int arr[STACK_LENGTH] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, a, q_top = -1,q_bottom=0;
	string input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == "push")
		{
			cin >> a;
			q_top++;
			arr[q_top] = a;
		}

		else if (input == "pop")
		{
			
			if (q_top-q_bottom < 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << arr[q_bottom] << "\n";
				arr[q_bottom] = 0;
				q_bottom++;
			}
		}
		else if (input == "size")
		{
			cout << q_top-q_bottom + 1 << "\n";
		}
		else if (input == "empty")
		{
			if (q_top - q_bottom < 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (input == "front")
		{
			if (q_top - q_bottom < 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << arr[q_bottom] << "\n";
			}
		}
		else if (input == "back")
		{
			if (q_top - q_bottom < 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << arr[q_top] << "\n";
			}
		}
	}



	return 0;
}