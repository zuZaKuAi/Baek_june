#include <iostream>
using namespace std;

int main() {
	float H, h, K;
	float x;
	cin >> K >> H >> h;
	x = K * K - (H - h) * (H - h)/4;
	cout <<x;
}