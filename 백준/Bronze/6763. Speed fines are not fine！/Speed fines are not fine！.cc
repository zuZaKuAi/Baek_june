#include <iostream>
using namespace std;

int main() {
	int limits, sp, mi;
	cin >> limits >> sp;
	mi = sp - limits;
	if (mi <= 0)
		cout << "Congratulations, you are within the speed limit!";
	else if(mi<=20)
		cout << "You are speeding and your fine is $100.";
	else if (mi <= 30)
		cout << "You are speeding and your fine is $270.";
	else
		cout << "You are speeding and your fine is $500.";
}