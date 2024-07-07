#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	int n, t = 2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		t += pow(2, i);
	}
	cout << (int)pow(t, 2);
	return 0;
}