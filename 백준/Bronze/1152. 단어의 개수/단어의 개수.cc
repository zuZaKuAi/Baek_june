#include <iostream>
using namespace std;

int main() {
    char a[1000001];
    int sum=0;

    while (1) {
        cin >> a;
        if (cin.eof())
            break;
        else
            sum++;
    }
    cout << sum;
    return 0;
}