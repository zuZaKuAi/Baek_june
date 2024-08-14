#include <iostream>
using namespace std;

int main() {
	int ham1, ham2, ham3, co, si,cham,cdrink;
	cin >> ham1>> ham2>> ham3>> co>> si;
	if (co > si)
		cdrink = si;
	else
		cdrink = co;
	if (ham1 > ham2)
		cham = ham2;
	else
		cham = ham1;
	if (cham > ham3)
		cham = ham3;
	cout << cham + cdrink - 50;
	return 0;
}