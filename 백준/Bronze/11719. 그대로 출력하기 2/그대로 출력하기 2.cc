#include <iostream>
#include <string>

using namespace std;
int main() {
    string sen;
    while (1) {
        getline(cin, sen);
        if (cin.eof()) break;
        else cout << sen << endl;
    }
    return 0;
}