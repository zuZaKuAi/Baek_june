#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	int t, money, quaeter, dime, nickel, penny;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> money;
		quaeter = money / 25;
		money %= 25;
		dime = money / 10;
		money %= 10;
		nickel = money / 5;
		penny = money % 5;
		cout << quaeter << " " << dime << " " << nickel << " " << penny << "\n";
	}
	return 0;
}