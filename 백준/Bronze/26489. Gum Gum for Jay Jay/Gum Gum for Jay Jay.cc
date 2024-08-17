#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	while (true) {
		getline(cin,a);
		if (cin.eof())
			break;

		count++;
	}
	cout << count;
	return  0;
}