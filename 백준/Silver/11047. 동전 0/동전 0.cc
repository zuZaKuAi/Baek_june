#include <iostream>
using namespace std;

int main() {
	long long arr[10];
	long long N,K;
	int coins = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = N-1; i>=0; i--)
	{
		coins =coins+ K/ arr[i];
		K = K % arr[i];
	}
	cout << coins;
	return 0;
}