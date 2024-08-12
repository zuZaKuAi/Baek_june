#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout.tie(NULL);
	long long v,a,b,days=0;
	cin >> a >> b >> v;
	v -= a;
	if (v % (a - b) > 0)
	{
		days = 2 + v / (a - b);
	}
	else
	{
		days = v / (a - b)+1;
	}
	cout << days;
	return 0;

}