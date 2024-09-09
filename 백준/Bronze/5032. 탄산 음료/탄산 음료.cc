#include <iostream>
using namespace std;

int main() {
	int drinked = 0,bottle=0,tmpb=0, e, f, c;
	cin >> e >> f >> c;
	//drinked = e;
	bottle = e + f;
	while (bottle / c > 0)
	{
		tmpb = bottle % c;
		bottle /= c;
		drinked += bottle;
		bottle += tmpb;
	}
	cout << drinked;

}